#include"Header.h"

void SDB_DeleteEntry(uint8 ID)		//Delete Student Data given Student ID
{
    struct node *ptr, *temp, *temp2;
    ptr = head;
    uint8 counter = 1;
    while(ptr -> Student_ID != ID){
    ptr = ptr -> next;
    ++counter;
    }
    //DELETING FIRST NODE
    if(counter == 1)
    {
   	 head = head -> next;
    	 free(head->prev);
    	 head -> prev = NULL;
    	 count--;
    }
    //DELETING LAST NODE
    else if(ptr->next == NULL)
    {
        temp = head;
        while(temp->next != NULL)
      		temp = temp->next;
        temp2 = temp->prev;
        temp2->next = NULL;
        free(temp);
        count--;
    }
    //DELETING MIDDLE NODE
    else
    {
   	  temp = ptr;
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
        count--;
    }
}

