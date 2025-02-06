#include <iostream>
#include "Trie.hpp"

using namespace std;


int main(){

    Trie trie; // cria uma trie 
    trie.insere("teste"); // insere a palavra teste

    if(trie.busca("teste")) cout << "Encontrou!" << endl;
    else cout << "Nao encontrou!" << endl;
    if(trie.busca("texto")) cout << "Encontrou!" << endl;
    else cout << "Nao encontrou!" << endl;

    trie.insere("texto"); // insere a palavra texto
    if(trie.busca("texto")) cout << "Encontrou!" << endl;
    else cout << "Nao encontrou!" << endl;
    trie.insere("terra");
    trie.insere("ternario");
    trie.insere("aula");
    trie.insere("aulao");

    trie.imprime(); // exibe a trie

    return 0;
}
