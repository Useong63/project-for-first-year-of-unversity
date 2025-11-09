#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "system.h"

int where_am_i = 1;

int did_look_around_1 = 0;

void game_init(void)
{
	where_am_i = 1;
	did_look_around_1 = 0;
}

void game_start(void)
{
	int ingame_choice;

	int playing = 1;
	while (playing)
	{
		if (where_am_i == 1)
		{
			if (did_look_around_1 == 0)
			{
				for (int i = 0; i < 50; i++)
				{
					printf("\n");
				}
				printf("감겨있는 눈을 살며시 뜨고 시야가 점차 밝아진다\n");
				Sleep(2000);
				printf("평소처럼 잠에서 깨는 상쾌한 기분이 아닌.. 어딘가 불편한 느낌에 눈을 뜬다\n");
				Sleep(2000);
				printf("나: ..?! 이게 뭐지? 움직일 수가 없잖아?\n");
				Sleep(2000);
				printf("어렴풋이 내 마지막 기억이 떠오른다\n");
				Sleep(2000);
				printf("늦은 밤에 집으로 돌아가는 길이었던건 기억이 나는데.. 납치 당한건가?\n");
				Sleep(2000);
				printf("\n내가 뭘 할 수 있지..?\n");
				printf("1. 둘러본다\n");
				printf("2. 로비로 이동\n");
				printf("내가 지금 뭘 생각하고 있는거야..:\n");
				printf("나는 뭘 해야하지..?: ");
				scanf("%d", &ingame_choice);

				while (ingame_choice != 1 && ingame_choice != 2)
				{
					for (int i = 0; i < 50; i++)
					{
						printf("\n");
					}
					printf("감겨있는 눈을 살며시 뜨고 시야가 점차 밝아진다\n");
					printf("평소처럼 잠에서 깨는 상쾌한 기분이 아닌.. 어딘가 불편한 느낌에 눈을 뜬다\n");
					printf("나: ..?! 이게 뭐지? 움직일 수가 없잖아?\n");
					printf("어렴풋이 내 마지막 기억이 떠오른다\n");
					printf("나: 늦은 밤에 집으로 돌아가는 길이었던건 기억이 나는데.. 납치 당한건가?\n");
					printf("\n내가 뭘 할 수 있지..?\n");
					printf("1. 둘러본다\n");
					printf("2. 로비로 이동\n");
					printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
					printf("나는 뭘 해야하지..?: ");
					scanf("%d", &ingame_choice);
				}

				if (ingame_choice == 1)
				{
					did_look_around_1 = 1;
				}
				else if (ingame_choice == 2)
				{
					playing = 0;
				}
			}
			else if (did_look_around_1 == 1)
			{
				for (int i = 0; i < 50; i++)
				{
					printf("\n");
				}
				printf("나: 정신 차리고.. 일단 주변을 둘러보자\n");
				Sleep(2000);
				printf("나: 여긴 창고..인건가\n");
				Sleep(2000);
				printf("나: 주변에서 인기척은 느껴지지 않아.. 나를 납치한 사람은 아무래도 자리를 비운것 같아\n");
				Sleep(2000);
				printf("나: 탈출하려면 지금이 기회야\n");
				Sleep(2000);
				printf("나: 그나저나 손발이 묶여 있어서 제대로 움직일 수가 없어\n");
				Sleep(2000);
				printf("나: 그래도 일어서서 주변을 수색할 수는 있겠어\n");
				Sleep(2000);
				printf("한 벽면에는 철창으로 막혀있는 창이 있다\n");
				Sleep(2000);
				printf("창고 구석에는 테이블이 놓여 있으며 그 위에는 공구상자로 보인는 상자가 올려져 있다\n");
				Sleep(2000);
				printf("다른 한 편에는 여러가지 물건들이 올라가 있는 선반이 있다\n");
				Sleep(2000);
				printf("각 벽면에 문이 있으며 총 두개의 문이 있다\n");
				Sleep(2000);
				printf("\n내가 뭘 할 수 있지..?\n");
				printf("1. 로비로 이동\n");
				printf("내가 지금 뭘 생각하고 있는거야..:\n");
				printf("나는 뭘 해야하지..?: ");
				scanf("%d", &ingame_choice);

				while (ingame_choice != 1)
				{
					for (int i = 0; i < 50; i++)
					{
						printf("\n");
					}
					printf("나: 정신 차리고.. 일단 주변을 둘러보자\n");
					printf("나: 여긴 창고..인건가\n");
					printf("나: 주변에서 인기척은 느껴지지 않아.. 나를 납치한 사람은 아무래도 자리를 비운것 같아\n");
					printf("나: 탈출하려면 지금이 기회야\n");
					printf("나: 그나저나 손발이 묶여 있어서 제대로 움직일 수가 없어\n");
					printf("나: 그래도 일어서서 주변을 수색할 수는 있겠어\n");
					printf("한 벽면에는 철창으로 막혀있는 창이 있다\n");
					printf("창고 구석에는 테이블이 놓여 있으며 그 위에는 공구상자로 보인는 상자가 올려져 있다\n");
					printf("다른 한 편에는 여러가지 물건들이 올라가 있는 선반이 있다\n");
					printf("각 벽면에 문이 있으며 총 두개의 문이 있다\n");
					printf("\n내가 뭘 할 수 있지..?\n");
					printf("1. 로비로 이동\n");
					printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
					printf("나는 뭘 해야하지..?: ");
					scanf("%d", &ingame_choice);
				}

				if (ingame_choice == 1)
				{
					playing = 0;
				}
			}
		}
	}
}