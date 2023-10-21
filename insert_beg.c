#include "list.h"

node *insert_beg(node **head, int data)
{
    node *new, *tmp;
    new = (node *)malloc(sizeof(node));
    if (new == NULL)
        return NULL;
    new->data = data;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        new->next = *head;
    }
    else
    {
        tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        new->next = *head;
        *head = new;
        tmp->next = *head;
    }
    return new;
}
