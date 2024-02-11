#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#define HANG 10
#define LIE 10
void chong();
void menu();
void founction();
void game();
void boom(char arr[HANG][LIE]);
void sao(char arr1[HANG][LIE],char arr2[HANG][LIE]);
int saomiao(char arr[HANG][LIE],int x,int y);
void inboard(char arr[HANG][LIE],int ,int lie);
void inboard1(char arr[HANG][LIE],int ,int lie);
void prboard(char arr[HANG][LIE],int hang,int lie);
void ret();
