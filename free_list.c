#include "list.h"

void free_list(node *head)
{
    int len = 0;
    node *tmp;
    if (head == NULL)
        return;
    else
    {
        tmp = head;
        do
        {
        len++;
        tmp = tmp->next;
        } while (tmp != head);
        tmp = head;
        while (len > 0)
        {
            head = head->next;
            free(tmp);
            tmp = head;
            len--;
        }
    }
}