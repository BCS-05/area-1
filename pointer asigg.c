#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200

// Function to write a paragraph to a file
void write_paragraph_to_file(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    char paragraph[MAX_LENGTH];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
}


void read_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void append_paragraph_to_file(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        exit(EXIT_FAILURE);
    }

    char paragraph[MAX_LENGTH];
    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
}

int main() {
    const char *filename = "output.txt";

    write_paragraph_to_file(filename);

    printf("\nContent of the file:\n");
    read_file_content(filename);

    append_paragraph_to_file(filename);

    printf("\nUpdated content of the file:\n");
    read_file_content(filename);

    return 0;
}
