//Act 3.1 - Operaciones avanzadas en un BST
//Héctor Robles Villarreal A01634105
//Sábado 23 de octubre de 2021

#include "avlTree.h"

int main() {
    avl_tree tree;
    r = tree.insert(r, 3);
    r = tree.insert(r, 6);
    r = tree.insert(r, 8);
    r = tree.insert(r, 5);
    r = tree.insert(r, 9);
    r = tree.insert(r, 4);
    r = tree.insert(r, 7);
    cout << "Datos del árbol ordenados en Preorder:" << endl;
    avl_tree::visit(r,1);
    cout << endl;
    cout << "Datos del árbol ordenados en Inorder: " << endl;
    avl_tree::visit(r,2);
    cout  << endl;
    cout << "Datos del árbol ordenados en Postorder: " << endl;
    avl_tree::visit(r,3);
    cout << endl;
    cout << "Datos del árbol ordenados por nivel: " << endl;
    avl_tree::visit(r,4) ;
    cout << endl;
    cout << "La altura del árbol r es de: ";
    cout << avl_tree::height(r) << endl << endl;
    cout << "Ancestros del nodo que tiene el 5: " << endl;
    avl_tree::ancestors(r,5);
    cout << endl;
    cout << "Ancestros del nodo que tiene el 9: " << endl;
    avl_tree::ancestors(r,9);
    cout << endl;
    cout << "Ancestros del nodo que tiene el 4: " << endl;
    avl_tree::ancestors(r,4);
    cout << endl;
    cout << "Ancestros del nodo que tiene el 6: " << endl;
    avl_tree::ancestors(r,6);
    cout << endl;
    cout << "El nivel en el que se encuentra el número 9 es el: ";
    cout << avl_tree::whatlevelamI(r,9) <<endl;
    cout << "El nivel en el que se encuentra el número 3 es el: ";
    cout << avl_tree::whatlevelamI(r,3) <<endl;
    cout << "El nivel en el que se encuentra el número 4 es el: ";
    cout << avl_tree::whatlevelamI(r,4) <<endl;
    cout << "El nivel en el que se encuentra el número 6 es el: ";
    cout << avl_tree::whatlevelamI(r,6) <<endl;
    cout << "El nivel en el que se encuentra el número 5 es el: ";
    cout << avl_tree::whatlevelamI(r,5) <<endl;
    cout << "El nivel en el que se encuentra el número 89 es el: ";
    cout << avl_tree::whatlevelamI(r,89) <<endl;
    
    return 0;
}