#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

Livro criarLivro(int id, int ano_de_publicacao, int quantidade_de_paginas, int ja_lido, char *titulo, char *autor, char *genero) {
    Livro livro;

    livro.id = id;
    livro.titulo = (char*) malloc(strlen(titulo) + 1);
    strcpy(livro.titulo, titulo);
    livro.autor = (char*) malloc(strlen(autor) + 1);
    strcpy(livro.autor, autor);
    livro.genero = (char*) malloc(strlen(genero) + 1);
    strcpy(livro.genero, genero);
    livro.ano_de_publicacao = ano_de_publicacao;
    livro.quantidade_de_paginas = quantidade_de_paginas;
    livro.ja_lido = ja_lido;

    return livro;
}

void liberarLivro(Livro *livro) {
    free(livro->titulo);
    free(livro->autor);
    free(livro->genero);
}
