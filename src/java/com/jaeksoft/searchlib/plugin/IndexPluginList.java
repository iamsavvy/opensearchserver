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

package com.jaeksoft.searchlib.plugin;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import com.jaeksoft.searchlib.SearchLibException;
import com.jaeksoft.searchlib.index.IndexDocument;

public class IndexPluginList {

	private List<IndexPluginInterface> pluginList;

	public IndexPluginList(IndexPluginTemplateList templateList)
			throws SearchLibException {
		if (templateList == null)
			return;
		pluginList = new ArrayList<IndexPluginInterface>();
		Iterator<IndexPluginItem> it = templateList.iterator();
		try {
			while (it.hasNext())
				pluginList.add(it.next().newInstance());
		} catch (InstantiationException e) {
			throw new SearchLibException(e);
		} catch (IllegalAccessException e) {
			throw new SearchLibException(e);
		} catch (ClassNotFoundException e) {
			throw new SearchLibException(e);
		}
	}

	public boolean run(IndexDocument indexDocument) {
		if (pluginList == null)
			return true;
		Iterator<IndexPluginInterface> it = pluginList.iterator();
		while (it.hasNext())
			if (!it.next().run(indexDocument))
				return false;
		return true;
	}

}
