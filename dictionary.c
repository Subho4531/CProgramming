#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** book() {
    char bookname[100], author[50];
    int price;
    printf("Enter the book name : ");
    scanf("%99s", bookname);
    printf("Enter the authors name : ");
    scanf("%49s", author);
    printf("Enter the price : ");

    if (scanf("%d", &price) != 1 || price < 0) {
        printf("Invalid Input\n");
        return NULL;
    }

    char **book = malloc(3 * sizeof(char*));
    if (!book) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    book[0] = malloc(strlen(bookname) + 1);
    book[1] = malloc(strlen(author) + 1);
    book[2] = malloc(20); // enough for price as string

    if (!book[0] || !book[1] || !book[2]) {
        printf("Memory allocation failed\n");
        if (book[0]) free(book[0]);
        if (book[1]) free(book[1]);
        if (book[2]) free(book[2]);
        free(book);
        return NULL;
    }

    strcpy(book[0], bookname);
    strcpy(book[1], author);
    snprintf(book[2], 20, "%d", price);

    return book;
}

int main() {
    char **details = book();
    if (details) {
        printf("Book Name: %s\n", details[0]);
        printf("Author: %s\n", details[1]);
        printf("Price: %s\n", details[2]);
        free(details[0]);
        free(details[1]);
        free(details[2]);
        free(details);
    }
    return 0;
}



