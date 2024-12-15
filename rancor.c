// Indlæs hvor mange koordinater du vil have
//if statement, som kører mængden af gange du har indlæst
// srand der opretter tilfældige koordinater hver gang if statement kører
// Gem som array (struct)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define struct instead of arrays :p
typedef struct {
    int x;
    int y;
} Coordinate;

void generate_coordinates(int num_coordinates, Coordinate coordinates[]) {
    // Seed to create random coordinates every time
    srand(time(NULL));

    // Generate random coordinates
    for (int i = 0; i < num_coordinates; i++) {
        coordinates[i].x = rand() % 100; // Random number between 0-99
        coordinates[i].y = rand() % 100;
    }
}

int main() {
    int num_coordinates;
    printf("Enter the number of coordinates to generate: ");
    scanf("%d", &num_coordinates);

    // Storage
    Coordinate coordinates[num_coordinates];

    // Call function
    generate_coordinates(num_coordinates, coordinates);

    // Print because it is but a test function
    printf("Generated coordinates:\n");
    for (int i = 0; i < num_coordinates; i++) {
        printf("Coordinate %d: (%d, %d)\n", i + 1, coordinates[i].x, coordinates[i].y);
    }

    return 0;
}


