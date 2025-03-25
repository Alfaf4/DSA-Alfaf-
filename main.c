#include <stdio.h>
#include <stdlib.h>


int main() {
    int N, X;

    // Asking for the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    char domesticAnimals[N][50];  // Array to store domestic animal names
    printf("Enter the names of domestic animals:\n");
    for (int i = 0; i < N; i++) {
        scanf("%s", domesticAnimals[i]);
    }

    // Asking for the number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    char wildAnimals[X][50];  // Array to store wild animal names
    printf("Enter the names of wild animals:\n");
    for (int i = 0; i < X; i++) {
        scanf("%s", wildAnimals[i]);
    }

    // Printing all entered animals
    printf("\nAll entered animals:\n");
    for (int i = 0; i < N; i++) {
        printf("%s ", domesticAnimals[i]);
    }
    for (int i = 0; i < X; i++) {
     printf("%s ", wildAnimals[i]);

}
    printf("\n");
    return 0;
}
