#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "system.h"

int main()
{
	int running = 1;
	while (running)
	{
		game_lobby();

		if (lobby_choice == 1)
		{
			game_init();
			game_start();
		}
		else if (lobby_choice == 2)
		{
			game_start();
		}
		else if (lobby_choice == 3)
		{
			printf("게임 종료");
			running = 0;
		}
	}

	return 0;
}