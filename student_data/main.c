#include<stdio.h>
#include"header.h"
int main()
{
        struct st *hptr=0;

        char choice,op,o;
                while(1)
                {
                printf("\t\t\t\t\t---------------------------------------------\n");
                printf("\t\t\t\t\t|     ****STUDENT RECORD MENU ****          |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         A/a :  Add New Record             |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         D/d : Delete A Record             |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         S/s : Show the List               |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         M/m : Modify A record             |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         V/v : Save                        |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         E/e : Exit                        |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|       T/t   : Sort the List               |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         L/l : Delete All the Records      |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t|         R/r : Reverse the List            |\n");
                printf("\t\t\t\t\t|                                           |\n");
                printf("\t\t\t\t\t---------------------------------------------\n");


                printf("enter the choice\n");
                scanf(" %c",&choice);
                switch(choice)
                {
                        case 'A':
                        case 'a':
                                        

                                     do{
                                      Add_new_record(&hptr);
                                      printf("do u want to store(y/Y)?\n");
                                      scanf(" %c",&op);
                                       }while(op=='y' || op == 'Y');
                                       break;
                         case 'D':
                        case 'd':
                                    Delete_a_record(&hptr);
                                    break;
                        case 'S':
                        case 's':
                                    Show_the_list(hptr);
                                    print(hptr);
                                    break;
                        case 'R':
                        case 'r':
                                    Reverse_the_list(hptr);
                                    break;
                        case 'T':
                        case 't':
                                    Sort_the_list(hptr);
                                    break;

                        case 'M':
                        case 'm':
                                    Modify_a_record(&hptr);
                                    break;


                        case 'V':
                        case 'v':
                                    Save(hptr);
                                    break;

                        case 'L':
                        case 'l':
                                    Delete_all_the_records(&hptr);
                                                                 
                        case 'E':
                        case 'e':
                                    printf("\t\t\t\t\t----------------------------------------\n");
                                    printf("\t\t\t\t\t|                                      |\n");
                                    printf("\t\t\t\t\t|    S/s      : Save and Exit          |\n");
                                    printf("\t\t\t\t\t|    E/e      : Exit Without Saving    |\n");
                                    printf("\t\t\t\t\t|                                      |\n");
                                    printf("\t\t\t\t\t----------------------------------------\n");
                                    printf("Enter the choice :");
                                    scanf(" %c",&o);
                                    if(o=='S'||o=='s')
                                    {
                                      Save(hptr);
                                      printf("saved successfully\n");
                                      return 0;
                                    }
                                    else if(o=='E'||o=='e')
                                    {
                                     return 0;
                                    }
                                    else
                                      {
                                       printf("enter the correct option\n");
                                      }
                                     break;
                        default:
                                    printf("invalid choice \n");
                                    break;
                }
                }
}
