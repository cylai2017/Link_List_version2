
#include <stdio.h>
#include <stdlib.h>
#include "ListNode.h"

int main() {
    
    struct Node *head = NULL;
    // establish a link list
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);
    
    // change the node's number
    change_number(head, 30, 35);
    
    // print the link list
    print(head);
    
    // total number of nodes in link list
    int num = number_of_nodes(head);
    printf("total nodes=%d\n", num);
    
    // search 
    node *search_point = search(head, 30);
    printf("search_num=%d\n", search_point->number);
    
    // Delete the link list
    head = free_linklist(head);
    
    printf("\n");
    
    return 0;
}
