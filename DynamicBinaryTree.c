#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define NODE_LIMIT 50 // max amount of node in queue
#define DATA_LIMIT 1000 // Max DataSize

/* Structure Definitions */

struct TreeNode
{
	void* data;
	int NodeNumber;
	size_t DataSize;
	struct TreeNode* LeftNode;
	struct TreeNode* RightNode;
};

struct Tree
{
	char TreeID[30];
	int TreeNodeCount;
	struct TreeNode* root;
};

/* Function Prototypes */

struct Tree* CreateTree(const char* TreeID);
struct TreeNode* InsertNode(struct Tree*, void* data, size_t DataSize, int position);
void* GrabNodeData(struct Tree*, int NodeNumber);
bool RemoveNode(struct Tree*, int NodeNumber);
bool EmptyTree(struct Tree*);
bool DeleteTree(struct Tree*);


/* Functions */