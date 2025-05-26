// ADT Libro
// Implementa il singolo libro

// Libro.h
#ifndef LIBRO_H
#define LIBRO_H

struct libro {
    char titolo[100]; // Supponiamo un titolo lungo fino a 100 caratteri
    char nome_autore[30];
    char cognome_autore[30];
};

typedef struct libro* libro;

// Funzioni dell'interfaccia
int crea_libro(libro* nuovo_libro, char titolo[], char nome_autore[], char cognome_autore[]);
int get_titolo_libro(libro mio_libro, char titolo[]);
int get_nome_autore_libro(libro mio_libro, char nome_autore[]);
int get_cognome_autore_libro(libro mio_libro, char cognome_autore[]);
int set_titolo_libro(libro mio_libro, char titolo[]);
int set_nome_autore_libro(libro mio_libro, char nome_autore[]);
int set_cognome_autore_libro(libro mio_libro, char cognome_autore[]);
int distruggi_libro(libro* mio_libro);
void stampa_libro(libro mio_libro);

#endif