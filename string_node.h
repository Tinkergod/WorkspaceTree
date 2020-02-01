#include <iostream>

class WorkspaceNameNode {
	private:
		Node* parent;
		Node* children[];
		String* contents;
	public:
		void add_child_to_node(Node* child);
}
