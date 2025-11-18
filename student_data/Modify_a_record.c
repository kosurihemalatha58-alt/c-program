#include"header.h"
void Modify_a_record(struct st **ptr)
{
        struct st *temp=*ptr;
        struct st *prev;
        int r1;
        float p;
        char s[100];
        char op,inner_op;
        printf("\t\t\t\t\t----------------------------------------------------\n");
        printf("\t\t\t\t\t|                                                  |\n");
        printf("\t\t\t\t\t|   Enter which record to search for modification  |\n");
        printf("\t\t\t\t\t|             R/r:  To search Rollno               |\n");
        printf("\t\t\t\t\t|             N/n:  To search Name                 |\n");
        printf("\t\t\t\t\t|             P/p:  Percentage based               |\n");
        printf("\t\t\t\t\t|                                                  |\n");
        printf("\t\t\t\t\t---------------------------------------------------- \n");
        printf("Enter the choice\n");
        getchar();
        scanf(" %c",&op);
        if(op=='r'||op=='R')
        {
         printf("enter the r1:");
         scanf("%d",&r1);
         while(temp!=NULL)
         {
                 if(r1==temp->roll)
                 {
                printf("\t\t\t\t\t-------------------------------------------------\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t|     Enter which record to modification        |\n");
                printf("\t\t\t\t\t|             N/n: To search Name               |\n");
                printf("\t\t\t\t\t|             P/p: Percentage based             |\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t-------------------------------------------------\n");
                printf("enter the choice\n");
                scanf(" %c",&inner_op);
               if(inner_op=='n'||inner_op=='N')
                 {
                         printf("enter the name:\n");
                               scanf("%s",temp->name);

                 }
               else if(inner_op=='p'||inner_op=='P')
                 {
                         printf("enter the mark:\n");
                         scanf("%f",&temp->marks);

                 }
               else
               {
                       printf("r1 is not found\n");
               }

         printf("%d %s %f",temp->roll,temp->name,temp->marks);
         return;
                 }
                 temp=temp->next;
         }

        }



        if(op=='n'||op=='N')
        {
        int n=-1;
        int count=0;
         printf("enter the s:");
         scanf("%s",s);
         ST *temp=*ptr;
         while(temp!=NULL)
         {
                 if(strcmp(s,temp->name)==0)
                 {
                       printf("%d %s %f",temp->roll,temp->name,temp->marks);
                         count++;
                 }
                 temp=temp->next;
         }
                 if(count==0)
                 {
                         printf("same is not found\n");
                         return;
                 }
                 if(count>1)
                 {
                printf("\t\t\t\t\t-------------------------------------------------\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t|     Enter which record to modification        |\n");
                printf("\t\t\t\t\t|             N/n: To search Name               |\n");
                printf("\t\t\t\t\t|             P/p: Percentage based             |\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t-------------------------------------------------\n");
                printf("Enter the modify number:\n");
                scanf("%d",&n);
                getchar();
                 }
                temp=*ptr;

                while(temp != NULL)
                {
                if(strcmp(s, temp->name) == 0 &&(count==1|| temp->roll == n))
                {
                printf("enter the choice\n");
                printf("N/n : Modify Name\n");
                printf("P/p : Modify Percentage\n");
                scanf(" %c",&inner_op);
               if(inner_op=='n'||inner_op=='N')
                 {
                         printf("enter the name:\n");
                             scanf("%s",temp->name);

                 }
               else if(inner_op=='p'||inner_op=='P')
                 {
                         printf("enter the mark:\n");
                         scanf("%f",&temp->marks);

                 }
               else
               {
                       printf("s is not found\n");
                       return;
               }

         printf("%d %s %f",temp->roll,temp->name,temp->marks);
         return;
                 }
                 temp=temp->next;

                }


        }



        if(op=='p'||op=='P')
        {
        int n=-1;
        int count=0;
         printf("enter the p:");
         scanf("%f",&p);
         ST *temp=*ptr;
         while(temp!=NULL)
         {
                               if(p==temp->marks)
                 {
                         printf("%d %s %f",temp->roll,temp->name,temp->marks);
                         count++;
                 }
                 temp=temp->next;
         }
                 if(count==0)
                 {
                         printf("same is not found\n");
                         return;
                 }
                 if(count>1)
                 {

                printf("\t\t\t\t\t-------------------------------------------------\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t|     Enter which record to modification        |\n");
                printf("\t\t\t\t\t|             N/n: To search Name               |\n");
                printf("\t\t\t\t\t|             P/p: Percentage based             |\n");
                printf("\t\t\t\t\t|                                               |\n");
                printf("\t\t\t\t\t-------------------------------------------------\n");

                printf("Enter the modify number:\n");
                scanf("%d",&n);
                getchar();
                 }
                temp=*ptr;

                while(temp != NULL)
                {
                if((p== temp->marks) &&(count==1|| temp->roll == n))
                {

                printf("enter the choice\n");
                printf("N/n : Modify Name\n");
                printf("P/p : Modify Percentage\n");

                scanf(" %c",&inner_op);
                                         if(inner_op=='n'||inner_op=='N')
                 {
                         printf("enter the name:\n");
                         scanf("%s",temp->name);

                 }
               else if(inner_op=='p'||inner_op=='P')
                 {
                         printf("enter the mark:\n");
                         scanf("%f",&temp->marks);

                 }
               else
               {
                       printf("p is not found\n");
               }

         printf("%d %s %f",temp->roll,temp->name,temp->marks);
         return;
                 }
                 temp=temp->next;
         }

}
}
