# Atividade Pratica Trie

Tries são árvores de busca digital em que toda chave está numa folha. Foram definidas em 1960 por Edward Fredkin e o nome vem de Re**trie**val (Relacionado à Recuperação de Informações).

Para distinção com tree (que significa árvore) pronuncia-se trai.

Para a atividade de hoje devem utilizar duas classes representando os dois tipos de Trie vistos em aula:
- Trie - considerando alfabeto de 26 caracteres com ponteiros para cada caractere. Nesta implementaçao observe que o caractere em si nao é armazenado no nó;
- TST (Ternary Search Trie) - variação que combina Trie com árvore de busca binaria e utiliza apenas 3 ponteiros para cada nó;


## Atividades:

Implemente as seguintes funcionalidades nas duas classes (Trie e TST):

1. Implemente o método de remoção de chaves.
2. Crie um novo método para contar palavras.
3. Crie uma função que dado um prefixo retorne todas as palavras que iniciam com esse prefixo. 

## Observações: 

Para compilar o teste com a Trie:

```
g++ Trie.cpp teste_Trie.cpp -o mainTrie
```

e execute:
```
./mainTree
```


Para compilar o teste com a TST:

```
g++ teste_TST.cpp TST.cpp -o mainTST
```

e execute:

```
./mainTST
```
