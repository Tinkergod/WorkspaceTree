#include "WorkspaceNode.h"
#ifndef SEARCH_IN_TREE_OR_BRANCH
#define SEARCH_IN_TREE_OR_BRANCH

bool search_in_tree_or_branch(WorkspaceNode* node, std::string workspace_name) {
	bool search_result=false;
	if (node->get_workspace_name() == workspace_name) {
		search_result=true;
	} else {
		for (unsigned int i=0; i < node->get_children().size(); i++) {
			return search_in_tree_or_branch
				(
					node->get_children().at(i), 
					workspace_name
				);
		}
	}
	return search_result;
}
#endif
