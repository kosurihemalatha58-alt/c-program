#include "header.h"

void Show_the_list(struct st *ptr)
{
    FILE *fp = fopen("data.txt", "r");
    int roll;
    char name[23];
    float marks;

    printf("printing the records\n");
    printf("| rollno | name | marks |\n");
    printf("--------------------------------\n");

    if (fp == NULL)
    {
        printf("Error: Could not open data.txt\n");
    }
    else
    {

        while (fscanf(fp, "%d %s %f", &roll, name, &marks) ==3)
        {
            printf("| %d\t| %s\t| %.2f |\n", roll, name, marks);
        }
        fclose(fp);
    }
    if (ptr != NULL)
    {
        printf("\nData in linked list (current session):\n");
        printf("--------------------------------\n");
        while (ptr != NULL)
        {
            printf("| %d\t| %s\t| %.2f |\n", ptr->roll, ptr->name, ptr->marks);
            ptr = ptr->next;
        }
    }

    printf("\n");
}


