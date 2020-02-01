#define CATCH_CONFIG_MAIN
#include "WorkspaceNode.h"
#include "catch.hpp"


TEST_CASE("Workspace node constructor", "[workspaces_tree]") {
	WorkspaceNode* node = new WorkspaceNode("hello");
	REQUIRE(node->get_workspace_name() == "hello");
	REQUIRE(node->get_parent() == NULL);
}

TEST_CASE("Add child workspace node to an existing node.", "[workspaces_tree]") {
	WorkspaceNode* node = new WorkspaceNode("hello");
	node->add_workspace_node("hello2");
	REQUIRE(node->get_children().at(0)->get_workspace_name() == "hello2");
	REQUIRE(node->get_parent() == NULL);
}

TEST_CASE("Removing current workspace", "[workspaces_tree]") {
//	WorkspaceNode* node = new WorkspaceNode("hello");
//	WorkspaceNode* node->add_workspace_node("hello2");

	/**
	 * Possible scenerious when deleting a workspace node from tree.
	 * Deleted node has children.
	 * 	if this is the case delete entire branch.
	 * 	make parent point to NULL
	 * Deleted node is a leaf node.
	 * 	delete node make parent point to NULL
	 * Deleted node is root node.
	 * Just delete don't bother making parent point to null.
	 *
	 **/
}

TEST_CASE("Print parent workspace node name.", "workspace_tree") {
	WorkspaceNode* node = new WorkspaceNode("hello");
	node->add_workspace_node("hello2");
	node->add_workspace_node("hello3");
	WorkspaceNode* node2 = node->get_children().at(0);
	std::cout << "Printing parent workspace name of a node" << std::endl;
	node2->print_parent_workspace_name();
}

TEST_CASE("Printing direct children worspace names.", "[workspaces_tree]") {
	WorkspaceNode* node = new WorkspaceNode("hello");
	node->add_workspace_node("hello2");
	node->add_workspace_node("hello3");
	std::cout << "Printing children of workspace node" << std::endl;
	node->print_child_workspace_names();
}


