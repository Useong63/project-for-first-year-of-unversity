#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "system.h"

int lobby_choice;

void game_lobby(void)
{
	for (int i = 0; i < 50; i++)		// 화면의 문장들을 지우기 위해 줄넘김
	{
		printf("\n");
	}
	printf("#####  #####  #####  #####  #####  #####      #####  #####\n");		// 게임 제목 출력
	printf("#      #      #      #   #  #   #  #            #    #   #\n");
	printf("#####  #####  #      #####  #####  #####        #    #   #\n");
	printf("#          #  #      #   #  #      #            #    #   #\n");
	printf("#####  #####  #####  #   #  #      #####        #    #####\n\n");

	printf("#####  #   #  #####  #   #  #####  #####\n");
	printf("#      #   #  #   #  #   #    #    #    \n");
	printf("#####  #   #  #####   # #     #    #####\n");
	printf("    #  #   #  # #     # #     #    #    \n");
	printf("#####  #####  #  #     #    #####  #####\n\n");

	printf("내가 뭘 할 수 있지..?\n");					// 로비 화면 선택지 출력
	printf("1. 새 게임\n");
	printf("2. 이어하기\n");
	printf("3. 게임 종료\n");
	printf("내가 지금 뭘 생각하고 있는거야..:\n");
	printf("나는 뭘 해야하지..?: ");
	scanf("%d", &lobby_choice);

	while (lobby_choice != 1 && lobby_choice != 2 && lobby_choice != 3)		// 잘못된 선택이면 다시 선택
	{
		game_lobby();
		printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
		printf("나는 뭘 해야하지..?: ");
		scanf("%d", &lobby_choice);
	}
}