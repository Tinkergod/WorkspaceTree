compiler=g++
flags=-Wall
flags_object=-Wall -c
all:  main.cpp WorkspaceNode.o
	$(compiler) $(flags) main.cpp  WorkspaceNode.o

WorkspaceNode.o: WorkspaceNode.cpp WorkspaceNode.h search_in_tree_or_branch.cpp
	$(compiler) $(flags_object) WorkspaceNode.cpp WorkspaceNode.h search_in_tree_or_branch.cpp

run_tests: WorkspaceNodeUnitTesting.cpp WorkspaceNode.o
	$(compiler) $(flags) WorkspaceNodeUnitTesting.cpp WorkspaceNode.o

clean:
	rm *.o a.out
