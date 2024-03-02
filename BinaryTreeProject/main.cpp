#include <iostream>
#include "Models/BinaryTree.h"

int main() {

    BinaryTree tree;
    tree.Insert(51);
    tree.Insert(36);


    std::cout << "Recorrido en Pre-Orden:" << std::endl;
    tree.PreOrder(); std::cout<<std::endl;
    std::cout << "Recorrido en In-Orden:" << std::endl;
    tree.InOrder();


    return 0;
}
