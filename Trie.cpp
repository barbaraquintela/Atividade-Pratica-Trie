#include "Trie.hpp"
#include <iostream>

Trie::Trie(){
    raiz = new Node();
}

bool Trie::aux_busca(Node * raiz, string palavra){
    if (raiz == nullptr) {
        return false;
    }
  
    // Inicializa ponteiro atual com a raiz
    Node* atual = raiz;

    // Itera no comprimento da string
    for (char c : palavra) {
      
        // verifica se existe o no
        if (atual->filho[c - 'a'] == nullptr) 
            return false;
        
        // move o ponteiro atual
        atual = atual->filho[c - 'a'];
    }

    // Retorna true se a palavra existe
    // e tem seu final marcado
    return atual->final;
}


bool Trie::busca(string palavra){
    return aux_busca(raiz,palavra);
}

void Trie::aux_insere(Node * raiz, string palavra){
    // Inicializa ponteiro atual com a raiz
    Node* atual = raiz;

    // Itera no comprimento da string
    for (char c : palavra) {
      
        // Verifica se o no existe 
        if (atual->filho[c - 'a'] == nullptr) {
          
            // Se nao existe cria um novo
            Node* nNode = new Node();
          
            // mantem a referencia
            atual->filho[c - 'a'] = nNode;
        }
      
        // move o ponteiro para o novo no criado
        atual = atual->filho[c - 'a'];
    }

    // Marca o final da palavra
    atual->final = true;

}

void Trie::insere(string palavra){
    aux_insere(raiz, palavra);

}

void Trie::aux_imprime(Node *raiz, char str[], int nivel){
    // imprime a palavra inteira quando chega ao final
    if(raiz->final){
        str[nivel] = '\0';
        cout << str << endl;
    }  
    for (int i = 0; i < 26; i++) {
        // identifica os caracteres armazenados
        if(raiz->filho[i]){
            str[nivel] = i + 'a';
            aux_imprime(raiz->filho[i], str, nivel+1);
        }        
    }
}    


void Trie::imprime(){
    char str[20];
    if (raiz != nullptr) {
        aux_imprime(raiz,str,0);
    }
}

