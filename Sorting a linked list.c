#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Log.h"
#pragma warning (disable:4996)

   typedef struct Item{
	   int num;
	   struct Item* next;
	   struct Item* prev;
}t_Item;

   t_Item* head = NULL;
   t_Item* tail = NULL;



   t_Item* ADD(int num)
   {
	   LogEvent("start to Add");
	   t_Item* theNumber;

	   theNumber = (t_Item*)malloc(sizeof(t_Item));
	   theNumber->num = num;
	   if (head == NULL)
	   {
		   head = theNumber;
		   tail = theNumber;
		   theNumber->next = NULL;
		   theNumber->prev = NULL;

	   }
	   else
	   {
		   
		   theNumber->prev = tail;
		   theNumber->next = NULL;
		   tail->next = theNumber;
		   tail=theNumber;
		  
	   }
	   LogEvent("End to Add");
   }

   void printList()
   {
	   LogEvent("start to print");
	   t_Item* print = head;
	   while (print != NULL)
	   {
		   printf("%d ", print->num);
		   print = print->next;

	   }
	   LogEvent("End to print");
   }


  t_Item* replace(t_Item* ptr)
   {
	  LogEvent("start replace");
	   if (ptr == NULL) {
		   LogError("didnt work!!");
	   }
	   else if (ptr == head && ptr->next == tail)
	   {
		   ptr->next = NULL;
		  ptr->prev = tail;
		  tail->prev = NULL;
		  tail->next = ptr;
		  tail = ptr;
		   head = ptr->prev;
	   }
	   else if (ptr->next == tail) {

		   ptr->prev->next = ptr->next;
		   ptr->next->prev = ptr->prev;
		   ptr->next->next = ptr;
		   ptr->prev = ptr->next;
		   ptr->next = NULL;

		   tail = ptr;
	   }
	   else if (ptr == head) {

		   ptr->prev = ptr->next;
		   ptr->next = ptr->next->next;
		   ptr->prev->next = ptr;
		   ptr->prev->prev = NULL;
		   ptr->next->prev = ptr;

		   head = ptr->prev;

	   }
	   else
	   {

		   ptr->prev->next = ptr->next;
		   ptr->next->prev = ptr->prev;
		   ptr->next->next->prev = ptr;
		   ptr->prev = ptr->next;
		   ptr->next = ptr->next->next;
		   ptr->prev->next = ptr;

	   }
	   LogEvent("End to replace");
   }
  void MemoryFree() {
	  LogEvent("start-Free");
	  t_Item* remover = head;
	  while (head != NULL)
	  {
		  remover = head;
		  head = head->next;
		  free(remover);
	  }
	  head = NULL;
	  LogEvent("End to Free");
  }

   void bubbleSort()
   {
	   LogEvent("start to bubble");
	   t_Item* Bubble = head;
	   int count=1;
	   while (count != 0)
	   {
		   count = 0;
		   Bubble = head;
		   while (Bubble != NULL)
		   {
			   if (Bubble->next == NULL)
			   {
				   //
			   }
			  else if (Bubble->num >Bubble->next->num )
			   {
				   replace(Bubble);
				 
				   count++;
				  
			   }
			   Bubble = Bubble->next;
			   
		   }
		   printf("\n");
		   printList();
	   }
	   printf("\n");
	   printList();
	   MemoryFree();
	   LogEvent("End to bubble");
   }

   void AddRandomItems(int count_num)
   {
	  
	 
		   int num;
		   srand(time(NULL));
		   for (int i = 0; i < count_num; i++)
		   {
			   num = rand()%1000000;
			   ADD(num);
			  
		   }
	 
		  
   }

   int main()
   {
	   Log_Init("BubbleSort.log");
	   LogEvent("start the project");
	  
	   AddRandomItems(10000);
	   bubbleSort();
	  

	   LogEvent("End the project");
	   return 0;
   }
