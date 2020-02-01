#include "WorkspaceNode.h"

WorkspaceNode::WorkspaceNode(string workspace_name) {
  this->workspace_name = new string();
  *this->workspace_name = workspace_name;
  this->parent = NULL;
}

void WorkspaceNode::add_child_workspace_node(WorkspaceNode* workspace_node) {
   this->children.push_back(workspace_node);
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
  cout << children;
}

void WorkspaceNode::print_parent_workspace_name() {
  if (parent != NULL) {
    cout << parent->get_workspace_name() << std::endl;
  }
}

string WorkspaceNode::get_workspace_name() {
  return *this->workspace_name;
}

WorkspaceNode* WorkspaceNode::get_parent() {
  return this->parent;
}

WorkspaceNode::~WorkspaceNode() {
  if (this->workspace_name != NULL) {
    delete this->workspace_name;
    this->workspace_name = NULL;
    this->parent = NULL;
  }
}

