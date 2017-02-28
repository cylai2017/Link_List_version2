
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node *address;
};

typedef struct Node node;

void insert(node **head, int num);

void print(node *head);

node *search(node *head, int num);

int number_of_nodes(node *head);

void change_number(node *head, int old_number, int new_number);

void *free_linklist(node *head);
