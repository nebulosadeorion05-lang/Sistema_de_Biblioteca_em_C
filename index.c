#include <stdio.h>

struct livro
{
    char titulo[100], autor[50], genero;
    int ID, paginas, ano_de_publicacao;

};

void mostrar_livro(struct livro bib[], int posicao)
{
    printf("Livro %d:\nTítulo: %s\nPáginas: %d\n",posicao + 1,
        bib[posicao].titulo, bib[posicao].paginas);
}

void mostrar_biblioteca(struct livro bib[], int tamanho)
{
    int i;
    
    for(i = 0; i < tamanho; i++)
        mostrar_livro(bib, i);
}
void ler_livro(struct livro bib[], int posicao)
{
    printf("Livro %d:\nDigite o título: ", posicao + 1);
    scanf("%s", bib[posicao].titulo);
    printf("Digite quantidade de páginas: ");
    scanf("%d", & bib[posicao].paginas);
}

void ler_biblioteca(struct livro bib[], int tamanho)
{
    int i;
    
    for(i = 0; i < tamanho; i++)
        ler_livro(bib, i);
}

void main()
{
    struct livro biblioteca[5];
    
    ler_biblioteca(biblioteca, 5);
    mostrar_biblioteca(biblioteca, 5);
}
