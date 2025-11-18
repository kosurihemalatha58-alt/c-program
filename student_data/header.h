#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
        int roll;
        char name[20];
        float marks;
        struct st *next;
}ST;
void Add_new_record(struct st **);
void print(struct st *);
void Delete_a_record(ST**);
void Show_the_list(ST*);
void Reverse_the_list(ST*);
void Sort_the_list(ST*);
int count(struct st *);
void Modify_a_record(struct st **);
void Save(struct st *);
void Delete_all_the_records(struct st **);
