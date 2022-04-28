/*
 * Header.h
 *
 *  Created on: Apr 28, 2022
 *      Author: Mohamed
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Struct.c"

typedef unsigned char uint8;

uint8 count = 0;

struct node
{
	uint8 Student_ID;
	uint8 Student_Year;
	uint8 Course_1_ID;
	uint8 Course_2_ID;
	uint8 Course_3_ID;
	uint8 Course_1_Grade;
	uint8 Course_2_Grade;
	uint8 Course_3_Grade;
	struct node *next;
	struct node *prev;
};
struct node *head;  //Head of the list
/***************PROTOTYPES***************/
bool SDB_IsFull(void);
bool SDB_GetUsedSize(void);
bool SDB_AddEntry(uint8, uint8, uint8*, uint8*);
bool SDB_ID_Exist(uint8);
bool SDB_ReadEntry(uint8, uint8*, uint8*, uint8*);
void SDB_GetIDList(uint8 *, uint8 *);
void SDB_DeleteEntry(uint8);

#endif /* HEADER_H_ */
