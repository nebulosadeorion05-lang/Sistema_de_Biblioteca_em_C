#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

Livro criarLivro(int id, int ano_de_publicacao, int quantidade_de_paginas, int ja_lido, char *titulo, char *autor, char *genero) {
    Livro book;

    book.id = id;
    book.titulo = (char*) malloc(strlen(titulo) + 1);
    strcpy(book.titulo, titulo);
    book.autor = (char*) malloc(strlen(autor) + 1);
    strcpy(book.autor, autor);
    book.genero = (char*) malloc(strlen(genero) + 1);
    strcpy(book.genero, genero);
    book.ano_de_publicacao = ano_de_publicacao;
    book.quantidade_de_paginas = quantidade_de_paginas;
    book.ja_lido = ja_lido;

    return book;
}

void liberarLivro(Livro *book) {
    free(book->titulo);
    free(book->autor);
    free(book->genero);
}
