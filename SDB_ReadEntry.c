#include"Header.h"

bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades)
{
    struct node *ptr;
    uint8 i = 0, flag;
    ptr = head;
    if(ptr == NULL)
    {
        return 0;
    }
    else
    {
        while (ptr!=NULL)
        {
            if(ptr->Student_ID == id)
            {
						*year     = ptr->Student_Year;
						*subjects = ptr->Course_1_ID;
						subjects++;
						*grades   = ptr->Course_1_Grade;
						grades++;
						*subjects = ptr->Course_2_ID;
						subjects++;
						*grades   = ptr->Course_2_Grade;
						grades++;
						*subjects = ptr->Course_3_ID;
						subjects++;
						*grades   = ptr->Course_3_Grade;
						grades++;
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
