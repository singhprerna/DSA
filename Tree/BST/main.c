#include "bst.h"

int main()
{
    Node* root = NULL;
    root = addNode(root, 50);
    addNode(root, 30);
    addNode(root, 20);
    addNode(root, 40);
    addNode(root, 70);
    addNode(root, 60);
    addNode(root, 80);

    printf("Print BST\n");
    printBST(root);
    return(0);
}
