#include "list.h"

/**
* make_list - create a list or adds to the end of the list if it is not empty
* @head: head of the list
* @ data: data part
* Return: node
*/
node *make_list(node **head, int data)
{
    node *new, *tmp;
    new = (node *)malloc(sizeof(node));
    if (new == NULL)
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
        tmp = *head;
        while (tmp->next != *head)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
        new->next = *head;
    }
    return new;
}

