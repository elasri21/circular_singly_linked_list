#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *make_list(node **head, int data);
void display(node *head);
node *insert_beg(node **head, int data);
int len_list(node *head);
node *insert_at(node **head,int data,int pos);
void free_list(node *head);
node *insert_after(node **head,int data,int pos);
void delete_beg(node **head);
void delete_end(node **head);
void delete_at(node **head, int pos);
#endif