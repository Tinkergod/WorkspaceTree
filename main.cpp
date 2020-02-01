#include <iostream>
#include "WorkspaceNode.h"
int main() {
	WorkspaceNode* root=new WorkspaceNode("Root node");
	std::cout << root->get_workspace_name();

	return 0;
}
