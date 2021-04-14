#include"stepin.h"
void gotoxy(int a,int b);
void menu();
void add();
void view();
void search();
void modify();
void deleterec();
struct student
{
    char name[20];
    char mobile[10];
    int sfid;
    char stream[20];
    char branch[20];
};
