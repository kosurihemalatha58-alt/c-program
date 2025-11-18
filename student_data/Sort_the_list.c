#include"header.h"
void Sort_the_list(struct st *ptr)
{
        int i,j;
        char op;
        int c=count(ptr);
        printf("\t\t\t\t\t-------------------------------------\n");
        printf("\t\t\t\t\t|                                   |\n");
        printf("\t\t\t\t\t|     N/n   : Sort with Name        |\n");
        printf("\t\t\t\t\t|    P/p : Sort with percentage     |\n");
        printf("\t\t\t\t\t|                                   |\n");
        printf("\t\t\t\t\t-------------------------------------\n");
        printf("enter your choice:");
        getchar();
        scanf("%c",&op);
        if((op=='p')||(op=='P'))
        {
                struct st **p=(struct st**)malloc(c*sizeof(struct st*));
                for(i=0;i<c;i++)
                {
                  p[i]=ptr;
                  ptr=ptr->next;
                }
                ST *temp;
                for(i=0;i<c;i++)
                {
                for(j=i+1;j<c;j++)
                {
                        if((p[i]->marks) > (p[j]->marks))
                        {
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;

                        }
                }
        }
                for(i=c-1;i>=0;i--)
                {
                        printf("%d %s %f",p[i]->roll,p[i]->name,p[i]->marks);
                           }

                free(p);
                p=NULL;
        }
        else if(op=='n'||op=='N')
        {
                struct st **p=(struct st**)malloc(c*sizeof(struct st*));

                for(i=0;i<c;i++)
                {
                        p[i]=ptr;
                        ptr=ptr->next;
                 }
                        ST *temp;
                for(i=0;i<c;i++)
                {
                for(j=i+1;j<c;j++)
                {
                              if(strcmp(p[i]->name,p[j]->name)>0)
                                {
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                                }
                        }
                }
                for(i=0;i<=c-1;i++)
                {
                        printf("%d %s %f",p[i]->roll,p[i]->name,p[i]->marks);
                }
        free(p);
        p=NULL;
        }
}
int count(struct st *ptr)
{
int c=0;
        while(ptr!=0)
	{
                           ++c;
                ptr=ptr->next;
        }
        return c;
}
