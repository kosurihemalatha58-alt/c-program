#include"header.h"
void Delete_all_the_records(struct st **ptr)
{

        FILE *fp=fopen("data.txt","w");
        free(*ptr);
        *ptr=NULL;
}
