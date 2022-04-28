#include"Header.h"

bool SDB_AddEntry(uint8 id, uint8 year, uint8* subjects, uint8* grades) //Insert new data in the beginning of the list
{
		if(count < 10) count++;
		else return 0;
		struct node *ptr = (struct node*) malloc(sizeof(struct node));
		if(head==NULL)
		{
						 ptr->next = NULL;
						 ptr->prev=NULL;
						 ptr->Student_ID = id;
						 ptr->Student_Year = year;
						 ptr->Course_1_ID = *subjects;
						 subjects++;
						 ptr->Course_2_ID = *subjects;
						 subjects++;
						 ptr->Course_3_ID = *subjects;
						 subjects++;
						 ptr->Course_1_Grade = *grades;
						 grades++;
						 ptr->Course_2_Grade = *grades;
						 grades++;
						 ptr->Course_3_Grade = *grades;
						 grades++;
						 head=ptr;
		}
		else
		{
						  ptr->Student_ID = id;
						  ptr->Student_Year = year;
						  ptr->Course_1_ID = *subjects;
						  subjects++;
						  ptr->Course_2_ID = *subjects;
						  subjects++;
						  ptr->Course_3_ID = *subjects;
							subjects++;
						  ptr->Course_1_Grade = *grades;
						  grades++;
						  ptr->Course_2_Grade = *grades;
						  grades++;
						  ptr->Course_3_Grade = *grades;
						  grades++;
						  ptr->prev=NULL;
						  ptr->next = head;
						  head->prev=ptr;
						  head=ptr;
		}
		return 1;
}

