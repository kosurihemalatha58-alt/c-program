#include"header.h"
static int n=0;
void Add_new_record(struct st **ptr)
{

        struct st *temp=(struct st*)malloc(sizeof(struct st));
        printf("enter the name and mark\n");
        scanf(" %s %f",temp->name,&temp->marks);
        FILE *fp=fopen("delete.txt","r");
        if(fp==NULL)
        temp->roll=++n;
        else
        {
                fscanf(fp,"%d",&temp->roll);
        fclose(fp);
        remove("delete.txt");
        }
        if((*ptr==0)||(temp->roll < (*ptr)->roll))
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                ST *last=*ptr;
                while((last->next!=0)&&(temp->roll > last->next->roll))
                {
                        last=last->next;
                }
                temp->next=last->next;
                last->next=temp;
        }
}
