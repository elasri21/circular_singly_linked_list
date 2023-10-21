#include "list.h"

int len_list(node *head)
{
    node *tmp;
    int length = 0;
    if (head == NULL)
        return (0);
    tmp = head;
    do
    {
        length++;
        tmp = tmp->next;
    } while (tmp != head);
    return (length);
}