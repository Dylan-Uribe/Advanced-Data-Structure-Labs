#include "BinaryTree.h"

BinaryTree::BinaryTree() {
    root = nullptr;
}

//Privado
Node* BinaryTree::Insert(Node *r, TipoElemento &data) {

    if(r == nullptr){
        return new Node(data);
    }

    if(data < r->GetData()){
        Node *left = Insert(r->GetLeft(), data);
        r->SetLeft(left);
    }
    else if(data > r->GetData()){
        Node* right = Insert(r->GetRight(), data);
        r->SetRight(right);
    }

    return r;

}

void BinaryTree::Preorder(Node *r) {
    if(r != nullptr){
        r->Visit();
        BinaryTree::Preorder(r->GetLeft());
        BinaryTree::Preorder(r->GetRight());
    }
}

void BinaryTree::InOrder(Node *r) {
    if(r != nullptr){
        BinaryTree::InOrder(r->GetLeft());
        r->Visit();
        BinaryTree::InOrder(r->GetRight());
    }
}

//Público
void BinaryTree::Insert(TipoElemento data) {
    root = Insert(root, data);
}

void BinaryTree::PreOrder() {
    Preorder(root);
}

void BinaryTree::InOrder() {
    InOrder(root);
}