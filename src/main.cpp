#include <iostream>
#include "WorkspaceNode.h"

int main() {
  WorkspaceNode* test_node = new WorkspaceNode("test");

  std::cout << test_node->get_workspace_name() << std::endl;

	return 0;
}
