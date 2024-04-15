#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#define kong 0
#define wall 1
#define tou 2
#define shen 3
#define wei 4
#define up 80
#define down 72
#define left 75
#define right 77
#define h 30
#define l 60
typedef struct snake
{
	int x;
	int	y;
	int flag;
	struct snake* next;
}snake;
snake* sanke_init(int* (arr)[]);
void move(int(*arr)[], snake* s_tmp);

//node* list_init(void);
//void list_print(node* list);
//int node_add(node* list, int data);
//void list_print(node* list);
void board_init(int(*arr)[]);
void board_print(int(*arr)[]);
int direction(void);
;
;
;
;
;
;
;


