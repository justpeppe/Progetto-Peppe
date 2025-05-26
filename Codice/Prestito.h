// ADT Prestito
// Implementa il singolo prestito

// Prestito.h
#ifndef PRESTITO_H
#define PRESTITO_H
#include "Libro.h" // Il prestito fa riferimento a un libro

struct prestito {
    libro libro_prestato; // Riferimento al libro prestato
    int giorno;
    int mese;
    int anno;;
};

typedef struct prestito* prestito;

// Funzioni dell'interfaccia
int crea_prestito(prestito* nuovo_prestito, libro un_libro, int giorno, int mese, int anno);
int get_libro_prestato(prestito mio_prestito, libro* un_libro);
int get_data_prestito(prestito mio_prestito, int* giorno, int* mese, int* anno);
int set_data_prestito(prestito mio_prestito, int giorno, int mese, int anno);
int distruggi_prestito(prestito* mio_prestito);
void stampa_prestito(prestito mio_prestito);

#endif