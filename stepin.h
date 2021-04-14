/**
 * @file stepin.h
 * @author vinayak katigar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STEPIN_H__
#define __STEPIN_H__

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

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


#endif