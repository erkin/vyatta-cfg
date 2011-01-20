/*
 * Copyright (C) 2010 Vyatta, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CNODE_ALGORITHM_HPP_
#define _CNODE_ALGORITHM_HPP_

#include <cnode/cnode.hpp>

namespace cnode {

void show_cfg_diff(const CfgNode& cfg1, const CfgNode& cfg2,
                   vector<string>& cur_path,
                   bool show_def = false, bool hide_secret = false,
                   bool context_diff = false);
void show_cfg(const CfgNode& cfg, bool show_def = false,
              bool hide_secret = false);

void show_cmds_diff(const CfgNode& cfg1, const CfgNode& cfg2);
void show_cmds(const CfgNode& cfg);

void get_cmds_diff(const CfgNode& cfg1, const CfgNode& cfg2,
                   vector<vector<string> >& del_list,
                   vector<vector<string> >& set_list,
                   vector<vector<string> >& com_list);
void get_cmds(const CfgNode& cfg, vector<vector<string> >& set_list,
              vector<vector<string> >& com_list);

extern const string ACTIVE_CFG;
extern const string WORKING_CFG;

void showConfig(const string& cfg1, const string& cfg2,
                const vector<string>& path, bool show_def = false,
                bool hide_secret = false, bool context_diff = false,
                bool show_cmds = false);

} // namespace cnode

#endif /* _CNODE_ALGORITHM_HPP_ */

