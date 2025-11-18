#include"header.h"
void print(struct st*ptr)
{
        printf("printing the data \n");
        while(ptr!=0)
        {
                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
} 
