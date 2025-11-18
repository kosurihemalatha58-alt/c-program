#include"header.h"
void Reverse_the_list(struct st*ptr)
{
      if(ptr!=0)
        {
                Reverse_the_list(ptr->next);
                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        }
}
