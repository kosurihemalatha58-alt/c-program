#include"header.h"
#include<stdlib.h>

void Delete_a_record(ST**ptr)
{

        ST *temp,*prev;
        temp=*ptr;
        char op;
        int n;
        char rename[100];
        printf("\t\t\t\t\t-----------------------------------\n");
        printf("\t\t\t\t\t|  R/r : Enter Rollno to Delete   |\n");
        printf("\t\t\t\t\t|   N/n : Enter Name to Delete    |\n");
        printf("\t\t\t\t\t-----------------------------------\n");

        printf("enter the choice\n");
        scanf(" %c",&op);
                if(op=='R'||op=='r')
                {
                                printf("Enter Rollno: \n");
                                scanf("%d",&n);
                                FILE *fp =fopen("delete.txt","w+");
                                fprintf(fp,"%d",n);
                                fclose(fp);
                        while(temp!=0)
                          {
                                if(temp->roll==n)
                                {
                                    if(temp==*ptr)
                                    *ptr=temp->next;
                                     else
                                     prev->next=temp->next;
                                    free(temp);
                                    return;
                                }
                                else
                                {
                                prev=temp;
                                temp=temp->next;
                                                 }
                        }
                }
                        else if(op=='N'||op=='n')
                        {
                                int count=0;
                                printf("Enter the name: \n");
                                scanf(" %s",rename);
                                ST *temp=*ptr;
                                while(temp!=0)
                                {
                                if(strcmp(temp->name,rename)==0)
                                {
                                        count++;
                                       printf("%d %s %f\n",temp->roll,temp->name,temp->marks);

                                }
                                temp=temp->next;
                                }
                                if(count==0)
                                {
                                        printf("same data is not there\n");
                                        return;
                                }
                                printf("Enter the delete roll number:\n");
                                scanf("%d",&n);

                                temp=*ptr;
                                prev=NULL;
                                while(temp!=0)
                                {
                                        if((strcmp(temp->name,rename)==0)&&(temp->roll==n))
                                        {
                                                if(temp==*ptr)
                                                  *ptr=temp->next;
                                                else
                                                   prev->next=temp->next;
                                                                           

                                                   free(temp);
                                                   return;
                                        }
                                        else
                                        {
                                       prev=temp;
                                       temp=temp->next;
                                        }
                                 }
                        }
                                else
                                {
                                        printf("invalid choice\n");
                                }
                        }
