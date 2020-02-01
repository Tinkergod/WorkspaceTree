#include "WorkspaceNode"

void DeleteBranch(WorkspaceNode node*) {
	std::string removable_workspace="";
	unsigned int parent_child_amount=node->get_parent()->get_children().size();

	if (node->get_children().size()==0) {
		for (unsigned int i=0; i < parent_child_amount; i++) {
			removable_workspace_name=node->get_parent()->get_children()
				.at(i)->get_workspace_name();

			if(removable_workspace_name==node->get_workspace_name()) {
				node->get_parent()->get_workspace_children()
					.erase(i)
					break;
			}
		}
		delete node;
	} else if(node->get_children().size() > 0) {
		while (node->get_children().size() > 0) {
			DeleteBranch(node->get_children().at(0));
		}
	}

}
