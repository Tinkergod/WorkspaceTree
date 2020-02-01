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
