#include "BinaryTree.h"

class BinarySearchTree : public BinaryTree {
public:
    BinaryNode *search(char *key){
        return searchRecur(root, key);
    }
    BinaryNode *searchRecur(BinaryNode *n, char * key){
        if (n == NULL) return NULL;
        if (n->compare(key) == 0) return n;
        //??
        else if (n->compare(key) < 0)
            return searchRecur(n->getLeft(), key);
        else
            return searchRecur(n->getRight(), key);
    }

}