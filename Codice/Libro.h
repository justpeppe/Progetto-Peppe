// ADT Libro
// Implementa il singolo libro

#ifndef LIBRO_H
#define LIBRO_H

struct struttura_libro {
    char titolo[100];
    char nome_autore[20];
    char cognome_autore[20];
    int prestato; // 0 = non prestato (false), se è in prestito lo setto ad 1 (true)
};

typedef struct struttura_libro* libro;

int crea_libro(libro* nuovo_libro, char titolo[], char nome_autore[], char cognome_autore[]);

int get_titolo(libro mio_libro, char titolo[]);
int get_nome_autore(libro mio_libro, char nome_autore[]);
int get_cognome_autore(libro mio_libro, char cognome_autore[]);
int get_prestato(libro mio_libro, int prestato);

int set_titolo(libro mio_libro, char titolo[]);
int set_nome_autore(libro mio_libro, char nome_autore[]);
int set_cognome_autore(libro mio_libro, char cognome_autore[]);
int set_prestato(libro mio_libro, int prestato);

int destroy_libro(libro* mio_libro);

int stampa_libro(libro mio_libro);

#endif