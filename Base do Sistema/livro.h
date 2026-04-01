#ifndef LIVRO_H
#define LIVRO_H

typedef {
    int id, ano_de_publicacao, quantidade_de_paginas, ja_lido;
    char *titulo, *autor, *genero;
} Livro;

Livro criarLivro(int id, int ano_de_publicacao, int quantidade_de_paginas, int ja_lido, char *titulo, char *autor, char *genero);
void liberarLivro(Livro *book);

#endif
