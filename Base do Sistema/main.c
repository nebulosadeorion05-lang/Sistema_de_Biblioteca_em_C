#include <stdio.h>
#include "biblioteca.h"

int main() {
    Biblioteca *minhaBiblioteca = criarBiblioteca(2);

    Livro livro1 = criarLivro(1, "1984", "George Orwell", "Distopia", 1949, 328, 1);
    Livro livro2 = criarLivro(2, "Duna", "Frank Herbert", "Ficção Científica", 1965, 412, 0);
    Livro livro3 = criarLivro(3, "Fahrenheit 451", "Ray Bradbury", "Distopia", 1953, 194, 1);
    Livro livro4 = criarLivro(4, "Admirável Mundo Novo", "Aldous Huxley", "Distopia", 1932, 311, 0);
    Livro livro5 = criarLivro(5, "O Guia do Mochileiro das Galáxias", "Douglas Adams", "Ficção Científica", 1979, 224, 1);
    Livro livro6 = criarLivro(6, "Eu, Robô", "Isaac Asimov", "Ficção Científica", 1950, 253, 0);
    Livro livro7 = criarLivro(7, "2001: Uma Odisseia no Espaço", "Arthur C. Clarke", "Ficção Científica", 1968, 297, 1);
    Livro livro8 = criarLivro(8, "Fundação", "Isaac Asimov", "Ficção Científica", 1951, 255, 0);
    Livro livro9 = criarLivro(9, "Frankenstein", "Mary Shelley", "Ficção Científica", 1818, 280, 1);
    Livro livro10 = criarLivro(10, "Neuromancer", "William Gibson", "Ficção Científica", 1984, 271, 1);

    adicionarLivro(minhaBiblioteca, livro1);
    adicionarLivro(minhaBiblioteca, livro2);
    adicionarLivro(minhaBiblioteca, livro3);
    adicionarLivro(minhaBiblioteca, livro4);
    adicionarLivro(minhaBiblioteca, livro5);
    adicionarLivro(minhaBiblioteca, livro6);
    adicionarLivro(minhaBiblioteca, livro7);
    adicionarLivro(minhaBiblioteca, livro8);
    adicionarLivro(minhaBiblioteca, livro9);
    adicionarLivro(minhaBiblioteca, livro10);

    printf("Catálogo da Biblioteca:\n\n");
    listarLivros(minhaBiblioteca);

    liberarBiblioteca(minhaBiblioteca);

    return 0;
}
