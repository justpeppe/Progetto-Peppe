// ADT Libri
// Implementa la collezione

#ifndef LIBRI_H
#define LIBRI_H

#include "Libro.h"

struct struttura_libri {
    libro l;
    struct struttura_libri* next;
};

typedef struct struttura_libri* libri;

int crea_libri(libri* lista_libri);

int inserisci_libro(libri* lista_libri, char titolo[], char nome_autore[], char cognome_autore[]);

libro cerca_libro(libri lista_libri, char titolo[]);

int modifica_libro(libri lista_libri, char titolo[], char nuovo_titolo[], char nuovo_nome_autore[], char nuovo_cognome_autore[]);

int elimina_libro(libri* lista_libri, char titolo[]);

int destroy_libri(libri* lista_libri);

void stampa_libri(libri lista_libri);

#endif
