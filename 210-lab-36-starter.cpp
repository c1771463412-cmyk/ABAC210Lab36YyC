#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

    // Test inserting string values
    tree.insertNode("M50");
    tree.insertNode("A20");
    tree.insertNode("Z90");
    tree.insertNode("B30");
    tree.insertNode("X70");

    // Test inorder traversal
    cout << "Inorder traversal:" << endl;
    tree.displayInOrder();

    // Test searching for existing and missing values
    cout << "\nSearching for A20: ";
    if (tree.searchNode("A20"))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    cout << "Searching for C40: ";
    if (tree.searchNode("C40"))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    // Test removing a string value
    tree.remove("A20");

    cout << "\nAfter removing A20:" << endl;
    tree.displayInOrder();

    return 0;
}
