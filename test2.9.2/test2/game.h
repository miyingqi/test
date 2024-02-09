#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define ROW 3
#define COL 3
void menu1();
void menu2();
void founction1();
void founction2();
char game1();
void game2();
void Initialize(char arr[ROW][COL],int cow,int col);
void prboard(char arr[ROW][COL],int cow,int col);
void playermove(char arr[ROW][COL],int row,int col);
void computermove(char arr[ROW][COL],int row,int col);
void playermove1(char arr[ROW][COL],int row,int col);
void playermove2(char arr[ROW][COL],int row,int col);
int full(char arr[ROW][COL],int row,int col);
char win1(char arr[ROW][COL],int row,int col);
void ret();
void swit();
void chong();
//char cong(char arr[ROW][COL],int x,int y);
void menu3();
void swit1();