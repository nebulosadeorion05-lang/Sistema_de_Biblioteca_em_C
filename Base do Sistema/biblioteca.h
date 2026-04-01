#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "livro.h"

typedef struct {
    Livro *livros;
    int quantidade;
    int capacidade;
} Biblioteca;

Biblioteca* criarBiblioteca(int capacidadeInicial);
void adicionarLivro(Biblioteca *bib, Livro livro);
void listarLivros(Biblioteca *bib);
void expandirBiblioteca(Biblioteca *bib);
void liberarBiblioteca(Biblioteca *bib);

#endif
