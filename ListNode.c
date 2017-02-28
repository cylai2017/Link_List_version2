
#include "ListNode.h"

void insert(node **head, int num){
    
    if(*head == NULL){
        node *newnode = (node *)malloc(sizeof(node));
        newnode->number = num;
        newnode->address = NULL;
        *head = newnode;
    }
    else {
        node *point = *head;
        while(point->address != NULL){
            point = point->address;
        }
        node *newnode = (node *)malloc(sizeof(node));
        newnode->number = num;
        newnode->address = NULL;
        point->address = newnode;
    }
}

void print(node *head){
    while(head != NULL){
        printf("number=%d, address=%p\n", head->number, head->address);
        printf("now address=%p, next address=%p\n", head, head->address);
        head = head->address;
    }
}

node *search(node *head, int num){
    while(head != NULL){
        
        if(head->number == num){
            return head;
        }
        
        head = head->address;
    }
    return NULL;
}

int number_of_nodes(node *head){
    int num = 0;
    while(head != NULL){
        num++;
        head = head->address;
    }
    return num;
}

void change_number(node *head, int old_number, int new_number){
    node *search_point = search(head, old_number);
    if(search_point == NULL){
        printf("fail!!");
    }
    else{
        search_point->number = new_number;
    }
}

void *free_linklist(node *head){
    node *point_alpha, *point_beta;
    point_alpha = point_beta = NULL;
    point_alpha = head;
    
    while(point_alpha != NULL){
        point_beta = point_alpha->address;
        point_alpha->address = point_beta->address;
        free(point_beta);
    }
    free(head);
    return NULL;
}
