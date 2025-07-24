#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu ()
{
	printf("**********************************\n");
	printf("********** 1.play ****************\n");
	printf("********** 0.quit ****************\n");
	printf("**********************************\n");

}

void game()
{
	int random_num = rand()%100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		switch (input)
		{
			case 1:
				game();
				break ;
			case 0:
				break;
			default:
				printf("选择错误，请重新输入!\n");
				break;

		}

	} while (input);

	return 0;
}
