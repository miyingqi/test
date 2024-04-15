#include"fgame.h"
int di = 0;

//int node_add(node* list, int data)
//{
//	if (list == NULL)
//		return -1;
//	node* new_node = (node*)malloc(sizeof(node));
//	if (new_node == NULL)
//		return -1;
//	if (list->next == NULL)
//	{
//		list->next = new_node;
//		new_node->next = NULL;
//		new_node->data = data;
//	}
//	else
//	{
//		new_node->next = list->next;
//		list->next = new_node;
//		new_node->data = data;
//	}
//
//}
void move(int(*arr)[], snake* s_tmp)
{
	snake* tmp = (snake*)malloc(sizeof(snake));
	tmp->x = s_tmp->x;
	tmp->y = s_tmp->y;
	tmp->next = s_tmp;
	switch (direction())
	{
	case up:
		s_tmp->x += 1;
		break;
	case down:
		s_tmp->x -= 1;
			break;
	case  left:
		s_tmp->y -= 1;
		break;
	case right:
		s_tmp->y += 1;
		break;
	default:
		break;
	}
	if (di != 0)
	{
		while (s_tmp != 0)
		{
			s_tmp = s_tmp->next;
			if (s_tmp == NULL)
				break;
			snake* ttmp = (snake*)malloc(sizeof(snake));
			ttmp->x = s_tmp->x; ttmp->y = s_tmp->y;
			s_tmp->x = tmp->x; s_tmp->y = tmp->y;
			tmp->x = ttmp->x; tmp->y = ttmp->y;
		}
	}
	snake* tmpp = tmp->next;
	while (tmpp != NULL)
	{
		if (tmpp->flag == tou)
			*(*arr + tmpp->x * l + tmpp->y) = tou;
		else if (tmpp->flag == shen)
			*(*arr + tmpp->x * l + tmpp->y) = shen;
		else if (tmpp->flag == wei)
			*(*arr + tmpp->x * l + tmpp->y) = wei;
		tmpp = tmpp->next;
	}
}
snake* sanke_init(int (*arr)[])
{
	snake* header = (snake*)malloc(sizeof(snake));
	header->x = h / 2;
	header->y = l / 2;
	header->flag = tou;
	snake* shen1 = (snake*)malloc(sizeof(snake));
	header->next = shen1; shen1->flag = shen;
	shen1->x = header->x; shen1->y = header->y - 1;
	snake* shen2 = (snake*)malloc(sizeof(snake));
	shen1->next = shen2; shen2->flag = shen;
	shen2->x = shen1->x; shen2->y = shen1->y - 1;
	snake* wei0 = (snake*)malloc(sizeof(snake));
	shen2->next = wei0; wei0->flag = wei;
	wei0->x = shen2->x; wei0->y = shen2->y - 1;
	wei0->next = NULL;
	snake* tmp = header;
	while (tmp != NULL)
	{
		if (tmp->flag == tou)
			*(*arr + tmp->x * l + tmp->y) = tou;
		else if (tmp->flag == shen)
			*(*arr + tmp->x * l + tmp->y) = shen;
		else if (tmp->flag == wei)
			*(*arr + tmp->x * l + tmp->y) = wei;
		tmp = tmp->next;
	}
	return header;
}
void board_init(int(*arr)[])
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if(i==0||i==h-1||j==0||j==l-1)
				*(*arr + i * l + j) = wall;
			else
				*(*arr + i * l + j) = kong;
		}
	}
}
void board_print(int(*arr)[])
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			switch (*(*arr + i * l + j))
			{
			case wall:
				printf("*");
				break;
			case kong:
				printf(" ");
				break;
			case tou:
				printf("@");
				break;
			case shen:
				printf("#");
				break;
			case wei:
				printf(" ");
				break;
			}
		}
		printf("\n");
	}
}
int direction()
{
	
	if (!_kbhit())
	{
		return di;
	}
	else
	{
		int k1 = _getch();
		int k2 = _getch();
		switch (k2)
		{
		case up:
			di = up;
			break;
		case down:
			di = down;
			break;
		case left:
			di = left;
			break;
		case right:
			di = right;
			break;
		default:
			break;
		 }
	}
}