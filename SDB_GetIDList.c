#include"Header.h"

void SDB_GetIDList(uint8 *count, uint8 *list)
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        ptr = head;
        while(ptr != NULL)
        {
            *list = ptr->Student_ID;
            list++;
            ++*count;
            ptr = ptr->next;
        }
    }
}

