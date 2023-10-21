#include "list.h"

int main()
{
    node *head;
    head = NULL;
    make_list(&head, 1);
    make_list(&head, 3);
    insert_beg(&head, 0);
    insert_at(&head, 2, 3);
    insert_after(&head, 4, 4);
    printf("length: %d\n", len_list(head));
    display(head);
    delete_beg(&head);
    printf("length: %d\n", len_list(head));
    display(head);
    delete_end(&head);
    printf("length: %d\n", len_list(head));
    display(head);
    delete_at(&head, 10);
    printf("length: %d\n", len_list(head));
    display(head);
    free_list(head);
    return (0);
}