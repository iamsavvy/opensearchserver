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

import org.w3c.dom.NamedNodeMap;

public class SizeFragmenter extends FragmenterAbstract {

	/**
	 * 
	 */
	private static final long serialVersionUID = 4846488165800084876L;

	private int maxFragmentSize = 200;

	@Override
	public void check(String originalText) {
		int pos = 0;
		int len = originalText.length();
		while ((len - pos) > maxFragmentSize) {
			pos += maxFragmentSize;
			addSplit(pos);
		}
	}

	@Override
	protected void setAttributes(NamedNodeMap attr) {
		maxFragmentSize = Integer.parseInt(attr.getNamedItem("maxFragmentSize")
				.getNodeValue());
	}

	@Override
	protected FragmenterAbstract newInstance() {
		SizeFragmenter fragmenter = new SizeFragmenter();
		fragmenter.maxFragmentSize = this.maxFragmentSize;
		return fragmenter;
	}

}
