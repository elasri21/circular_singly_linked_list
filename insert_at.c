#include "list.h"

node *insert_at(node **head,int data,int pos)
{
    node *tmp, *new;
    int len, i = 1;
    new = (node *)malloc(sizeof(node));
    if (new ==NULL)
        return (NULL);
    new->data = data;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        new->next = *head;
    }
    else
    {
        len = len_list(*head);
        if (pos <= 0 || pos >len)
        {
            printf("Out of range\n");
            return (NULL);
        }
        if (pos == 1)
            return (insert_beg(head, data));
        tmp = *head;
        while (i < pos - 1)
        {
            i++;
            tmp = tmp->next;
        }
        new->next = tmp->next;
        tmp->next = new;
        tmp= new;
    }
    return (new);
}