#include <string>

using namespace std;

struct Node{
    char c; // caractere
    Node *esq, *mid, *dir; // subtries esquerda, intermediaria e direita
    string val; // valor associado a string
};

class TST {
    private:
        Node* raiz;
        Node* aux_insere(Node *x, string palavra, int d);
        Node* aux_busca(Node *x, string palavra, int d);
        void aux_imprime(Node *x);
    public:
        TST();
        bool busca(string palavra);
        void insere(string palavra);
        void remove(string k);
        void imprime();
};