#include "WorkspaceNode.h"
#include "search_in_tree_or_branch.cpp"
#include <string>

WorkspaceNode::WorkspaceNode(string workspace_name) {
  this->workspace_name = new string();
  *this->workspace_name = workspace_name;
  this->parent = NULL;
}

void WorkspaceNode::add_workspace_node(string workspace_name) {
  bool has_child = false;
  WorkspaceNode* new_child = NULL;
  has_child = search_in_tree_or_branch(this, workspace_name);

  if (!has_child) {
    new_child = new WorkspaceNode(workspace_name);
    new_child->set_parent_workspace_node(this);
    this->children.push_back(new_child);
  }
}

void WorkspaceNode::add_existing_workspace_node(WorkspaceNode* workspace_node) {
  WorkspaceNode* parent_node = workspace_node->get_parent();
  string workspace_name = workspace_node->get_workspace_name();
  unsigned int child_amount = 0;
  string parent_child_name = "";
  if (parent_node != NULL) {
    child_amount = parent_node->get_children().size();
    for (unsigned int i = 0; i < child_amount; i++) {
      parent_child_name = parent_node->get_children()
        .at(i)->get_workspace_name();
      if (parent_child_name == workspace_name) {
        parent_node->get_children()
          .erase(parent_node->get_children()
          .begin()+(i+1));
      }
    }
    workspace_node->set_parent_workspace_node(this);
    this->get_children().push_back(workspace_node);
  } else {
    workspace_node->set_parent_workspace_node(this);
    this->get_children().push_back(workspace_node);
  }
}

void WorkspaceNode::set_parent_workspace_node(WorkspaceNode* parent) {
  this->parent = parent;
}

std::vector<WorkspaceNode*> WorkspaceNode::get_children() {
  return this->children;
}

void WorkspaceNode::print_child_workspace_names() {
  string children = "";
  for (unsigned int i = 0; i < this->children.size(); i++) {
    children += this->children.at(i)->get_workspace_name();
    children += "\n";
  }
  std::cout << children;
}

void WorkspaceNode::print_parent_workspace_name() {
  if (parent != NULL) {
    std::cout << parent->get_workspace_name() << std::endl;
  }
}

string WorkspaceNode::get_workspace_name() {
  return *this->workspace_name;
}

WorkspaceNode* WorkspaceNode::get_parent() {
  return this->parent;
}

/**
 * 
 * deletes workspace that we are currently on. First child in workspace_node is
 * promoted and it's children are merged with it's previous neighbors.
 *
 */

void WorkspaceNode::remove_workspace_node() {
}

WorkspaceNode::~WorkspaceNode() {
  if (this->workspace_name != NULL) {
    delete this->workspace_name;
    this->workspace_name = NULL;
    this->parent = NULL;
  }
}

