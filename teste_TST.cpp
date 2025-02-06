#include <iostream>
#include "TST.hpp"

using namespace std;


int main(){

    TST trie; // cria uma trie ternaria
    trie.insere("teste"); // insere a palavra teste
    trie.insere("texto"); // insere a palavra texto
    trie.insere("cachorro");
    trie.insere("gato");

    if(trie.busca("teste")) cout << "Encontrou" << endl;
    else cout << "Nao encontrou!" << endl;

    if(trie.busca("texto")) cout << "Encontrou" << endl;
    else cout << "Nao encontrou!" << endl;

    if(trie.busca("tez")) cout << "Encontrou" << endl;
    else cout << "Nao encontrou!" << endl;

    trie.remove("texto"); // remove a palavra texto
    if(trie.busca("texto")) cout << "Encontrou" << endl;
    else cout << "Nao encontrou!" << endl;

    trie.imprime(); // exibe a trie

    return 0;
}

