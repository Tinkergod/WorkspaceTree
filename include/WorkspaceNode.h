#include <iostream>
#include <stdlib.h>
#include <vector>
using std::string;
using std::cout;

#ifndef WORKSPACE_NODE
#define WORKSPACE_NODE
class WorkspaceNode {
	private:
		WorkspaceNode* parent;
		std::vector<WorkspaceNode*> children;
		string* workspace_name;
	public:
		WorkspaceNode(string workspace_name);
		WorkspaceNode* get_parent();
		std::vector<WorkspaceNode*> get_children();
		string get_workspace_name();
		string set_workspace_name(string workspace_name);
		
		void set_parent_workspace_node(WorkspaceNode* parent);
		void add_child_workspace_node(WorkspaceNode* workspace_node);
		void print_child_workspace_names();
		void print_parent_workspace_name();
		~WorkspaceNode();
};
#endif

