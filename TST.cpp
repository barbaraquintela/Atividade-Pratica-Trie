#include "TST.hpp"
#include <iostream>

TST::TST(){
    raiz = new Node();
}

Node* TST::aux_busca(Node *x, string palavra, int d){
    if (x == NULL) return NULL;
    char c = palavra.at(d);
    if (c < x->c) return aux_busca(x->esq, palavra, d);
    else if (c > x->c) return aux_busca(x->dir, palavra, d);
    else if (d < palavra.length() - 1) return aux_busca(x->mid, palavra, d+1);
    else return x;
}

bool TST::busca(string palavra){
    Node *x = aux_busca(raiz, palavra, 0);
    if (x == NULL) return false;
    return true;
}

Node* TST::aux_insere(Node *x, string palavra, int d){
    char c = palavra.at(d);
    if (x == NULL) {
        x = new Node();
        x->c = c;
    }
    if (c < x->c) x->esq = aux_insere(x->esq, palavra, d);
    else if (c > x->c) x->dir = aux_insere(x->dir, palavra, d);
    else if (d < palavra.length() - 1) x->mid = aux_insere(x->mid, palavra, d+1);
    else x->val = palavra;
    return x;
}

void TST::insere(string palavra){
    raiz = aux_insere(raiz, palavra, 0);
}
        
void TST::remove(string k){
    /* Implemente aqui */
}

void TST::aux_imprime(Node *x){
    if (x != NULL){
        cout << x->c << " : ";
        if(x->val != "") cout << x->val << endl; 
        if(x->esq != NULL) {
            cout << "/" << endl;
            aux_imprime(x->esq);
        }
        if(x->mid != NULL) {
            cout << "|" << endl;
            aux_imprime(x->mid);
        }
        if(x->dir != NULL) {
            cout << "\\" << endl;
            aux_imprime(x->dir);
        }    
    }
}    

void TST::imprime(){
    aux_imprime(raiz);
}

