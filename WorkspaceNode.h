#include <iostream>
#include <stdlib.h>
#include <vector>

#ifndef WORKSPACE_NODE
#define WORKSPACE_NODE
class WorkspaceNode {
	private:
		WorkspaceNode* parent;
		std::vector<WorkspaceNode*> children;
		std::string* workspace_name;
	public:
		WorkspaceNode(std::string WorkspaceName);
		WorkspaceNode* get_parent();
		std::vector<WorkspaceNode*> get_children();
		std::string get_workspace_name();
		std::string set_workspace_name(std::string workspace_name);
		
		void set_parent_workspace_node(WorkspaceNode* parent);
		void add_workspace_node(std::string);
		void add_existing_workspace_node(WorkspaceNode* workspace_node);
// move following three to workspace tree.
		void remove_workspace_node();
		void print_child_workspace_names();
		void print_parent_workspace_name();
		~WorkspaceNode();
};
#endif

