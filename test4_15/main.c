#include"fgame.h"
int main()
{
	srand((unsigned int)time(NULL));
	int ar[h][l] = {0};
	board_init(ar);
	snake* op=sanke_init(ar);
	board_print(ar);
	Sleep(500); 
	int n = 100;
	while (n--)
	{
		move(ar, op);
		board_print(ar);
		Sleep(1000);
		system("cls");
	}
	
	return 0;
}