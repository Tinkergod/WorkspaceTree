#include <string>

class WorkspaceTree {
 private:
    WorkspaceNode* root_workspace;

 public:
    WorkspaceTree(string root_workspace_name);

    void addWorkspaceNode(string tree_workspace, string workspace);
    void deleteWorkspaceNodeBranch(string tree_node_name);
    void printTreeForDisplay();
}
