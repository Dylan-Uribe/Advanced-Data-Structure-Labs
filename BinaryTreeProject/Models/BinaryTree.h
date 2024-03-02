#include "Node.h"

class BinaryTree {
private:
    Node *root;

    Node* Insert(Node *r, TipoElemento &data);
    void Preorder(Node* r);
    void InOrder(Node *r);

public:
    BinaryTree(); void Insert(TipoElemento data);
    void PreOrder(); void InOrder();
};


