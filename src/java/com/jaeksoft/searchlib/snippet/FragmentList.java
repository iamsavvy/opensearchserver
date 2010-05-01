/**   
 * License Agreement for Jaeksoft OpenSearchServer
 *
 * Copyright (C) 2008 Emmanuel Keller / Jaeksoft
 * 
 * http://www.open-search-server.com
 * 
 * This file is part of Jaeksoft OpenSearchServer.
 *
 * Jaeksoft OpenSearchServer is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 * Jaeksoft OpenSearchServer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Jaeksoft OpenSearchServer. 
 *  If not, see <http://www.gnu.org/licenses/>.
 **/

package com.jaeksoft.searchlib.snippet;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class FragmentList {

	private List<Fragment> fragments;

	private int totalSize;

	protected FragmentList() {
		fragments = new ArrayList<Fragment>();
		totalSize = 0;
	}

	protected Fragment addOriginalText(String originalText, int vectorOffset,
			boolean newValue) {
		totalSize += originalText.length();
		Fragment fragment = new Fragment(originalText, vectorOffset, newValue);
		fragments.add(fragment);
		return fragment;
	}

	protected int getTotalSize() {
		return totalSize;
	}

	protected ListIterator<Fragment> iterator() {
		return fragments.listIterator();
	}

	/**
	 * Find the next highlighted fragment
	 * 
	 * @param iterator
	 * @return
	 */
	final protected Fragment findNextHighlightedFragment(
			ListIterator<Fragment> iterator) {
		while (iterator.hasNext()) {
			Fragment fragment = iterator.next();
			if (fragment.isHighlighted() && !fragment.isInSnippet())
				return fragment;
		}
		return null;
	}

	final private static String lastRight(String text, int max) {
		int len = text.length();
		if (max >= len)
			return text;
		int pos = len - max;
		while (pos < len)
			if (Character.isWhitespace(text.charAt(pos)))
				break;
			else
				pos++;
		if (pos == len)
			pos = len - max;
		return text.substring(pos);
	}

	final private static String firstLeft(String text, int max) {
		if (max >= text.length())
			return text;
		int pos = max;
		while (pos > 0)
			if (Character.isWhitespace(text.charAt(pos)))
				break;
			else
				pos--;
		if (pos == 0)
			return null;
		return text.substring(0, pos);
	}

	final private static boolean leftAppend(Fragment fragment, int maxLength,
			StringBuffer snippet, String separator) {
		int maxLeft = maxLength - snippet.length();
		if (maxLeft < 0)
			return false;
		String text = fragment.getFinalText();
		String appendText = firstLeft(text, maxLeft);
		if (appendText == null)
			return true;
		if (snippet.length() > 0)
			if (fragment.isEdge())
				snippet.append(separator);
		snippet.append(appendText);
		if (appendText.length() == text.length())
			return true;
		snippet.append(separator);
		return false;
	}

	final private static boolean rightAppend(Fragment fragment, int maxLength,
			StringBuffer snippet, String separator) {
		int maxLeft = maxLength - snippet.length();
		if (maxLeft < 0)
			return false;
		String text = fragment.getFinalText();
		String appendText = lastRight(text, maxLeft);
		if (appendText == null)
			return true;
		if (snippet.length() > 0)
			if (fragment.isEdge())
				snippet.insert(0, separator);
		snippet.insert(0, appendText);
		if (appendText.length() == text.length())
			return true;
		snippet.insert(0, separator);
		return false;
	}

	/**
	 * Build a snippet starting from originalFragment (highlighted or not)
	 * 
	 * @param maxLength
	 * @param separator
	 * @param iterator
	 * @param originalFragment
	 * @return
	 */
	final protected StringBuffer getSnippet(int maxLength, String separator,
			ListIterator<Fragment> iterator, Fragment originalFragment) {
		StringBuffer snippet = new StringBuffer();
		if (!leftAppend(originalFragment, maxLength, snippet, separator))
			return snippet;
		// First add next fragment (highlighted or not)
		int distFromOriginalFragment = 1;
		while (iterator.hasNext()) {
			if (!leftAppend(iterator.next(), maxLength, snippet, separator))
				return snippet;
			distFromOriginalFragment++;
		}
		// Move back iterator to originalFragment
		while (distFromOriginalFragment-- > 0)
			iterator.previous();
		// Then previous fragment (highlighted or not)
		while (iterator.hasPrevious())
			if (!rightAppend(iterator.previous(), maxLength, snippet, separator))
				return snippet;
		return snippet;

	}

	public int size() {
		return fragments.size();
	}

}
