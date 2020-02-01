#include <iostream>

class WorkspaceNameNode {
	private:
		Node* self;
		Node* parent;
		Node* children[];
		std::string* name;
	public:
		WorkspaceNameNode();
		void add_workspace_node(std::string);
		void remove_workspace_node(std::string);
		~WorkspaceNameNode();
}
