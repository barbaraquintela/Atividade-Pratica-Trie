#include <string>

using namespace std;

struct Node{
    Node* filho[26]; // subtries de acordo com o tamanho do alfabeto exemplo 26 letras
    // apenas os caracteres diferentes de nulo sao armazenados na ordem 
    bool final; // indica final da string
    Node(){ // construtor   
            // inicializa a variavel final com falso
            // inicializa cada indice de Node com NULL
        final = false;
        for (int i = 0; i < 26; i++) {
            filho[i] = NULL;
        }
    }
};

class Trie {
    private:
        Node* raiz;
        bool aux_busca(Node * raiz, string palavra);
        void aux_insere(Node * raiz, string palavra);
        void aux_imprime(Node *raiz, char str[], int nivel);
    public:
        Trie();
        bool busca(string palavra);
        void insere(string palavra);
        void imprime();
};