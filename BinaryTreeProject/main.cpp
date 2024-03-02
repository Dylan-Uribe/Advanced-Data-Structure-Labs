#include <iostream>
#include "Models/BinaryTree.h"

int main() {

    BinaryTree tree;
    tree.Insert(51);
    tree.Insert(36);
    tree.Insert(159);
    tree.Insert(89);
    tree.Insert(142);
    tree.Insert(108);
    tree.Insert(25);
    tree.Insert(177);
    tree.Insert(78);
    tree.Insert(157);
    tree.Insert(3);
    tree.Insert(178);
    tree.Insert(28);
    tree.Insert(150);
    tree.Insert(179);
    tree.Insert(164);
    tree.Insert(71);
    tree.Insert(169);
    tree.Insert(113);
    tree.Insert(81);

    std::cout << "Recorrido en Pre-Orden:" << std::endl;
    tree.PreOrder(); std::cout<<std::endl;
    std::cout << "Recorrido en In-Orden:" << std::endl;
    tree.InOrder();


    return 0;
}
