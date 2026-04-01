#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

Biblioteca* criarBiblioteca(int capacidadeInicial) {
    Biblioteca *bib = (Biblioteca*) malloc(sizeof(Biblioteca));
    bib->livros = (Livro*) malloc(capacidadeInicial * sizeof(Livro));
    bib->quantidade = 0;
    bib->capacidade = capacidadeInicial;
    return bib;
}

void expandirBiblioteca(Biblioteca *bib) {
    bib->capacidade *= 2;
    bib->livros = (Livro*) realloc(bib->livros, bib->capacidade * sizeof(Livro));
}

void adicionarLivro(Biblioteca *bib, Livro livro) {
    if (bib->quantidade == bib->capacidade) {
        expandirBiblioteca(bib);
    }
    bib->livros[bib->quantidade] = livro;
    bib->quantidade++;
}

void listarLivros(Biblioteca *bib) {
    for (int i = 0; i < bib->quantidade; i++) {
        printf("ID: %d\n", bib->livros[i].id);
        printf("Título: %s\n", bib->livros[i].titulo);
        printf("Autor: %s\n", bib->livros[i].autor);
        printf("Gênero: %s\n", bib->livros[i].genero);
        printf("Ano de Publicação: %d\n", bib->livros[i].ano_de_publicacao);
        printf("Quantidade de Páginas: %d\n", bib->livros[i].quantidade_de_paginas);
        printf("Já Lido?: %s\n\n", bib->livros[i].ja_lido ? "Sim" : "Não");
    }
}

void liberarBiblioteca(Biblioteca *bib) {
    for (int i = 0; i < bib->quantidade; i++) {
        liberarLivro(&bib->livros[i]);
    }
    free(bib->livros);
    free(bib);
}
