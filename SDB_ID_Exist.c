#include"Header.h"

bool SDB_ID_Exist(uint8 ID)
{
    struct node *ptr;
    uint8 item = ID,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty Student List\n");
    }
    else
    {
        while (ptr!=NULL)
        {
            if(ptr->Student_ID == item)
            {
                return 1;
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag==1)
        {
            return 0;
        }
    }return 0;
}

