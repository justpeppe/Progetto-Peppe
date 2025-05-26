#include <stdio.h>

int main () {
    
    printf("Seleziona un\'azione:\n");
    printf("    1. Registra utente\n");
    printf("    2. Inserisci prestito\n");
    printf("    3. Modifica prestito\n");
    printf("    4. Elimina prestito\n");
    printf("    5. Visualizza lista utenti\n");
    printf("    6. Visualizza lista prestiti\n");
    printf("    7. Visualizza lista libri");

    
    // Menu1
    printf("\n\n");
    printf("Inserisci nome dell'utente da registrare: Giuseppe\n");
    printf("Inserisci cognome dell'utente da registrare: Trimarchi\n");
    printf("Inserisci numero di telefono dell'utente da registrare: 3423105041\n");
    printf("\nUtente registrato correttamente!");

    
    // Menu2
    printf("\n\n");
    printf("Inserisci nome dell'utente che richiede il prestito: Giuseppe\n");
    printf("Inserisci cognome dell'utente che richiede il prestito: Trimarchi\n");
    printf("E\' stato trovato un utente con questa corrispondenza!\n\n");
    printf("Inserisci titolo del libro che richiede: Harry Potter e il calice\n");
    printf("Non e\' stato trovato un libro con questa corrispondenza, riprovare!\n\n");
    printf("Inserisci titolo del libro che richiede: Harry Potter e il calice di fuoco\n");
    printf("E\' stato trovato un libro con questa corrispondenza, prestito registrato correttamente!\n");

    // Menu3
    printf("\n\n");
    printf("Inserisci nome dell'utente del prestito: Giuseppe\n");
    printf("Inserisci cognome dell'utente del prestito: Trimarchi\n");
    printf("Inserisci titolo del prestito: Harry Potter e il calice di fuoco\n");
    printf("E\' stato trovato un prestito con questa corrispondenza!\n\n");
    printf("Con che libro vuoi cambiare: Harry potter e l'ordine della fenice\n");
    printf("Prestito modificato correttamente!");

    // Menu4
    printf("\n\n");
    printf("Inserisci nome dell'utente del prestito: Giuseppe\n");
    printf("Inserisci cognome dell'utente del prestito: Trimarchi\n");
    printf("Inserisci titolo del prestito: Harry Potter e il calice di fuoco\n");
    printf("E\' stato trovato un prestito con questa corrispondenza!\n");
    printf("Prestito eliminato correttamente!");

    // Menu5
    printf("\n\n");
    printf("Ecco la lista utenti:\n");
    printf("Giuseppe Trimarchi 3423105041 Libri prestati: 1\n");
    printf("\nFine lista utenti");

    // Menu6
    printf("\n\n");
    printf("Ecco la lista dei prestiti:\n");
    printf("Utente: Giuseppe Trimarchi 3423105041\n");
    printf("Prestito: Harry potter e l'ordine della fenice\n");
    printf("\nFine lista prestiti");

    // Menu6
    printf("\n\n");
    printf("Ecco la lista dei libri:\n");
    printf("Harry potter e il calice di fuoco\n");
    printf("Harry potter e l'ordine della fenice (in prestito)\n");
    printf("\nFine lista libri");

    printf("\n\n");
    return 0;
}