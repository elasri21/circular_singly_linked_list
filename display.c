#include "list.h"
void display(node *head)
{
    node *tmp;
    if (head == NULL)
        printf("Empty list\n");
    else
    {
        tmp = head;
        do
        {
            printf("%d -> ", tmp->data);
            tmp = tmp->next;
        } while (tmp->next != head);
        printf("%d\n", tmp->data);
        
    }
}