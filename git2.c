#include <stdio.h>
#include <string.h>

#define MAX_SENTENCES 11
#define MAX_LENGTH 100

int main() {
    char sentences[MAX_SENTENCES][MAX_LENGTH];
    int choice;

    printf("Enter 11 words or sentences:\n");
    for (int i = 0; i < MAX_SENTENCES; i++) {
        printf("Enter sentence %d: ", i + 1);
        fgets(sentences[i], MAX_LENGTH, stdin);
        // Remove newline character if present
        sentences[i][strcspn(sentences[i], "\n")] = '\0';
    }

    while (1) {
        printf("\nEnter a number between 1 and 11 to retrieve a sentence (0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting program.\n");
            break;
        } else if (choice < 1 || choice > MAX_SENTENCES) {
            printf("Invalid choice! Please enter a number between 1 and 11.\n");
        } else {
            printf("Sentence %d: %s\n", choice, sentences[choice - 1]);
        }
    }

    return 0;
}
