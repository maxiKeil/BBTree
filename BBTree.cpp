/* Algorithmen und Datenstrukturen II
 * Prof. Dr. Oliver Braun
 * Blatt 1
 *
 * Maximilian Keil IF7W
 */
#include "BBTree.h"

bool BBTree::search(const int key) const {
    if (root == nullptr) {
        return false;
    } else {
        return root -> search(key);
    }
}

bool BBTree::Node::search(const int key) const {
    bool found = false;
    bool isLeaf = (right == nullptr) && (left == nullptr);

    int tmpKey = this -> key;

    if (tmpKey == key) {
        return true;
    } else {
        while (!found && !isLeaf) {
            if(tmpKey < key) {
                found = right -> search(key);
            } else if (tmpKey > key) {
                found = left -> search(key);
            } else {
                found = true;
                break;
            }
        }
    }
    return found;
}

void BBTree::insert(const int key) {
    if (root == nullptr) {
        root = new Node(key);
    } else {
    }
}

BBTree::Node *BBTree::Node::insert(const int key, const double balance) {
    return nullptr;
}

void BBTree::remove(const int key) {

}

BBTree::Node *BBTree::Node::remove(const int key, const double balance) {
    return nullptr;
}

int main() {
    return 0;
}