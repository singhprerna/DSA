#include "bst.h"

void printBST(Node* root) {
    if (!root)
	return;

    printBST(root->left);
    printf("%d ", root->data);
    printBST(root->right);
}

Node* newNode (int data) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node* addNode(Node* Node, int data) {
    if (Node == NULL)
        return newNode(data);
 
    if (data < Node->data)
        Node->left = addNode(Node->left, data);
    else if (data > Node->data)
        Node->right = addNode(Node->right, data);
 
   return Node;
}
