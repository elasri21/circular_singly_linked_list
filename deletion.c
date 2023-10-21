#include "list.h"

void delete_beg(node **head)
{
    node *tmp, *tail;
    if (*head == NULL)
    {
        printf("the list is empty\n");
        return;
    }
    if ((*head)->next == *head)
        free(*head);
    else
    {
        tmp = *head;
        tail = *head;
        do
        {
            tail = tail->next;
        } while (tail->next != *head);
        *head = (*head)->next;
        tail->next = *head;
        free(tmp);
    }
}

void delete_end(node **head)
{
    node *tmp, *tail;
    if (*head == NULL)
    {
        printf("the list is empty\n");
        return;
    }
    if ((*head)->next == *head)
        free(*head);
    else
    {
        tmp = *head;
        do
        {
            tail = tmp;
            tmp = tmp->next;
        } while (tmp->next != *head);
        tail->next = *head;
        free(tmp);
    }
}

void delete_at(node **head, int pos)
{
    int i = 1;
    node *curr, *next;
    if (*head == NULL)
        return;
    if (pos < 1 || pos > len_list(*head))
        return;
    if (pos == 1)
        delete_beg(head);
    else if (pos == len_list(*head))
        delete_end(head);
    else
    {
        next = *head;
        while (i < pos)
        {
            curr = next;
            next = next->next;
            i++;
        }
        curr->next = next->next;
        free(next);
    }
}


