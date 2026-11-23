#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

    // Open the file containing the codes
    ifstream fin("codes.txt");

    if (!fin) {
        cout << "Error opening codes.txt" << endl;
        return 1;
    }

    // Read each code and insert it into the BST
    string code;

    while (fin >> code) {
        tree.insertNode(code);
    }

    fin.close();

    // Display all codes using inorder traversal
    cout << "Codes in the BST:" << endl;
    tree.displayInOrder();

    return 0;
}
