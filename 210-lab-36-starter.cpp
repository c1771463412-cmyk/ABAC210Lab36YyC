// COMSC-210-5293 | Lab 36 | Yuyi Chen

#include <iostream>
#include <fstream>
#include <string>
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

    int choice = 0;
    string newCode;

    do {
        cout << "\nBinary Search Tree Menu" << endl;
        cout << "1. Add a record" << endl;
        cout << "2. Delete a record" << endl;
        cout << "3. Search for a record" << endl;
        cout << "4. Modify a record" << endl;
        cout << "5. Display all records" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            if (cin.eof())
                break;
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid choice." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Enter a code to add: ";
            if (!(cin >> code))
                return 0;

            if (tree.searchNode(code)) {
                cout << "Code already exists." << endl;
            } else {
                tree.insertNode(code);
                cout << "Code added." << endl;
            }
            break;

        case 2:
            cout << "Enter a code to delete: ";
            if (!(cin >> code))
                return 0;

            if (tree.searchNode(code)) {
                tree.remove(code);
                cout << "Code deleted." << endl;
            } else {
                cout << "Code not found." << endl;
            }
            break;

        case 3:
            cout << "Enter a code to search: ";
            if (!(cin >> code))
                return 0;

            if (tree.searchNode(code))
                cout << "Code found." << endl;
            else
                cout << "Code not found." << endl;
            break;

        case 4:

            break;

        case 5:
        
            break;

        case 6:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
