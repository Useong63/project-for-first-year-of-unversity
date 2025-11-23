#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "system.h"
#define delay 20

int over_choice;

void game_over()
{
	for (int i = 0; i < 50; i++)		// 화면의 문장들을 지우기 위해 줄넘김
	{
		printf("\n");
	}
	printf("#####  #####  #   #  #####         #####  #   #  #####  #####\n");		// 게임 제목 출력
	printf("#      #   #  ## ##  #             #   #  #   #  #      #   #\n");
	printf("# ###  #####  ## ##  #####         #   #   # #   #####  #####\n");
	printf("#   #  #   #  # # #  #             #   #   # #   #      # #  \n");
	printf("#####  #   #  # # #  #####         #####    #    #####  #  # \n\n");

	printf("내가 뭘 할 수 있지..?\n");					// 게임 오버 화면 선택지 출력
	printf("1. 로비로 이동\n");
	printf("내가 지금 뭘 생각하고 있는거야..:\n");
	printf("나는 뭘 해야하지..?: ");
	scanf("%d", &over_choice);

	while (lobby_choice != 1)		// 잘못된 선택이면 다시 선택
	{
		game_over();
		printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
		printf("나는 뭘 해야하지..?: ");
		scanf("%d", &over_choice);
	}
}