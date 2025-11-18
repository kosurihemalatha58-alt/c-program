#include "header.h"

void Save(struct st *ptr)
{
    FILE *fp = fopen("data.txt", "w");  // use "a" if you want to append

    if (fp == NULL)
    {
        printf("Error: Could not open data.txt for writing.\n");
        return;
    }

    if (ptr == NULL)
    {
        printf("No records to save.\n");
        fclose(fp);
        return;
    }

    while (ptr != NULL)
    {
        fprintf(fp, "%d\t%s\t%f\n", ptr->roll, ptr->name, ptr->marks);
        ptr = ptr->next;
    }

    fclose(fp);
    printf("Data saved successfully!\n");
}


