#include <stdio.h>

void help() {
    printf("Available commands:\n");
    printf("Scan coordinates from terminal: \n");
    printf("Scan coordinates from file: \n");
    printf("Generate random number of coordinates: \n");
} // flere eller færre idk

int main() {
    char command;

    printf("Type 'h' to see the list of commands.\n");

    while (69) {
        printf("\nEnter command: ");
        command = getchar(); // indlæs hjælp-funktion
        getchar(); // opbevaring

        if (command == 'h') {
            help(); // tilkald hjælp funktion
        } else if (command == 'q') {
            printf("Exiting program. Goodbye!\n");
            break; // luk loopet og programmet ved q (ved ikke om det er nødvendigt)
        } else {
            printf("Unknown command. Type 'h' for menu of possible commands or 'q' to quit.\n");
        } // sikkert også ligegyldigt men altså det er her
    }

    return 0;
}
