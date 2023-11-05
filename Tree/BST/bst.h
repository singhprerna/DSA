#ifndef _BST_H_
#define _BST_H_

#include <stdio.h>
#include <stdlib.h>

struct TNode {
    int data;
    struct TNode* left;
    struct TNode* right;
};

typedef struct TNode Node;
 
Node* newNode(int data);
Node* addNode(Node* root, int data);
void printBST(Node* root);

#endif
