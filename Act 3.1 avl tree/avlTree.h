//Act 3.1 - Operaciones avanzadas en un BST
//Héctor Robles Villarreal A01634105
//Sábado 23 de octubre de 2021

#ifndef AVLTREE_H
#define AVLTREE_H

#include<iostream>
#include <string>
#include <queue>
using namespace std;

struct avl {
    int d;
    struct avl* l;
    struct avl* r;
}*r;

avl* newNode(int data){
    avl* Node = new avl();
    Node->d = data;
    Node->l = NULL;
    Node->r = NULL;
    return (Node);
}

class avl_tree{
    public:
        static int height(avl*);
        int difference(avl*);
        avl* rr_rotat(avl*);
        avl* ll_rotat(avl*);
        avl* lr_rotat(avl*);
        avl* rl_rotat(avl*);
        avl* balance(avl*);
        avl* insert(avl*, int);
        void show(avl*, int);
        static void inorder(avl*);
        static void preorder(avl*);
        static void postorder(avl*);
        static bool ancestors(avl*, int);
        static int getLevel(avl*, int, int);
        static int whatlevelamI(avl*, int);
        static void visit(avl*,int);
        static void visitByLevel(avl*);
        avl* newNode(int);
        avl_tree() {
            r = NULL;
        }
};

int avl_tree::height(avl* t) {
    int h = 0;
    if (t != NULL) {
        int l_height = height(t->l);
        int r_height = height(t->r);
        int max_height = max(l_height, r_height);
        h = max_height + 1;
    }
    return h;
}
int avl_tree::difference(avl* t) {
    int l_height = height(t->l);
    int r_height = height(t->r);
    int b_factor = l_height - r_height;
    return b_factor;
}
avl* avl_tree::rr_rotat(avl* parent) {
    avl* t;
    t = parent->r;
    parent->r = t->l;
    t->l = parent;
    //cout << "Right Rotation" << std::endl;
    return t;
}
avl* avl_tree::ll_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = t->r;
    t->r = parent;
    //cout << "Left Rotation" << std::endl;
    return t;
}
avl* avl_tree::lr_rotat(avl* parent) {
    avl* t;
    t = parent->l;
    parent->l = rr_rotat(t);
    //cout << "Left-Right Rotation" << std::endl;
    return ll_rotat(parent);
}
avl* avl_tree::rl_rotat(avl* parent) {
    avl* t;
    t = parent->r;
    parent->r = ll_rotat(t);
    //cout << "Right-Left Rotation" << std::endl;
    return rr_rotat(parent);
}
avl* avl_tree::balance(avl* t) {
    int bal_factor = difference(t);
    if (bal_factor > 1) {
        if (difference(t->l) > 0)
            t = ll_rotat(t);
        else
            t = lr_rotat(t);
    }
    else if (bal_factor < -1) {
        if (difference(t->r) > 0)
            t = rl_rotat(t);
        else
            t = rr_rotat(t);
    }
    return t;
}
avl* avl_tree::insert(avl* r, int v) {
    if (r == NULL) {
        r = new avl;
        r->d = v;
        r->l = NULL;
        r->r = NULL;
        return r;
    }
    else if (v < r->d) {
        r->l = insert(r->l, v);
        r = balance(r);
    }
    else if (v >= r->d) {
        r->r = insert(r->r, v);
        r = balance(r);
    } return r;
}
void avl_tree::show(avl* p, int l) {
    int i;
    if (p != NULL) {
        show(p->r, l + 1);
        cout << " ";
        if (p == r)
            cout << "Root -> ";
        for (i = 0; i < l && p != r; i++)
            cout << " ";
        cout << p->d;
        show(p->l, l + 1);
    }
}
void avl_tree::inorder(avl* t) {
    if (t == NULL)
        return;
    inorder(t->l);
    cout << t->d << " ";
    inorder(t->r);
}
void avl_tree::preorder(avl* t) {
    if (t == NULL)
        return;
    cout << t->d << " ";
    preorder(t->l);
    preorder(t->r);
}
void avl_tree::postorder(avl* t) {
    if (t == NULL)
        return;
    postorder(t->l);
    postorder(t->r);
    cout << t->d << " ";
}

void avl_tree::visit(avl* t, int orden){
    if (orden == 1){
        preorder(t);
    }
    else if (orden ==2){
        inorder(t);
    }
    else if (orden == 3){
        postorder(t);
    }
    else if (orden == 4){
        static avl* const DELIMETER = nullptr;
        //Si la raíz está vacía no imrpime nada
        if (t == NULL){
            return;
        }
        //Inicializa una queue de nodos
        queue<avl*> qu;
        //Se introduce el nodo de parámetro
        qu.push(t);
        //Se mete un delimitador que indica que habrá un cambio de nivel
        qu.push(DELIMETER);
        while(true){
            avl* curr = qu.front();
            qu.pop();
            if(curr != DELIMETER){
                cout << curr->d <<" ";
                if(curr->l != NULL){
                    qu.push(curr->l);
                }
                if (curr->r != NULL){
                    qu.push(curr->r);
                }
            }
            else{
                cout << endl;
                if(qu.empty()) break;
                qu.push(DELIMETER);
            }
        } 
    }
}

void avl_tree::visitByLevel(avl* t){
    
}

bool avl_tree::ancestors(avl *t, int dato){
    //Si el árbol está vacío no tiene ancestos
    if (t == NULL){
        return false;
    }
    //Regresa true cuando encuentra el dato
    if (t->d == dato){
        return true;
    }
    //Se usa recursión para encontrar el lado en el que se encuentra el dato
    //Posteriormente se recorre ese lado del árbol, desplegando los ancestros del dato
    if (ancestors(t->l,dato) || ancestors(t->r,dato)) {
        cout << t->d << "  ";
        return true;
    }
    //Regresa false si no encuentra el dato en el árbol
    return false;
}

int avl_tree::whatlevelamI(avl* t, int dato){
    //Si el nodo está vacío, regresa un 0
    if (t == NULL){
        return 0;
    }
    int level = 1;
    int nivel = 0;
    //Guarda el nivel del dato a buscar
    nivel = avl_tree::getLevel(t, dato, level);
    //Si no encuentra el dato, regresa un -1
    if (nivel == 0){
        return -1;
    }
    else{
        return nivel;
    }
}

int avl_tree::getLevel(avl *t, int dato, int level){
    //Si el nodo está vacío, regresa un 0
    if(t == NULL){
        return 0;
    }
    //Checa si el valor de ese nodo es el dato que se busca
    if (t->d == dato){ 
        return level;
    }
    //Llamada recursiva para buscar el árbob por el lado izquierdo
    int resultado = getLevel(t->l, dato, level+1);
    if (resultado != 0){
        return resultado;
    }
    //Si no encontro el dato en el lado izquierdo, lo busca en el derecho
    resultado = getLevel(t->r,dato,level+1);
    return resultado;
}


#endif //AVLTREE_H