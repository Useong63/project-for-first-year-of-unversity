#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include "system.h"
#define delay 20

int where_am_i = 1;

int did_look_around_1 = 0;
int am_i_free_1 = 0;
int looking_window_unfree_1 = 0;
int looking_table_unfree_1 = 0;
int looking_shelf_unfree_1 = 0;
int looking_door_unfree_1 = 0;
int first_1 = 1;
int table_interaction_1 = 0;
int again_table_1 = 0;

void game_init(void)
{
	where_am_i = 1;					// 상황 변수 초기화

	did_look_around_1 = 0;
	am_i_free_1 = 0;
	looking_window_unfree_1 = 0;
	looking_table_unfree_1 = 0;
	looking_shelf_unfree_1 = 0;
	looking_door_unfree_1 = 0;
	first_1 = 1;
	table_interaction_1 = 0;
	again_table_1 = 0;
}

void game_start(void)
{
	int ingame_choice;		// 선택지마다 무엇을 섵낵했는지 확인하기 위한 변수

	int playing = 1;
	while (playing)
	{
		if (where_am_i == 1)		// 첫 번째 방에서
		{
			if (did_look_around_1 == 0)		// 주변을 둘러보지 않았다면 그에 맞는 상황 출력
			{
				for (int i = 0; i < 50; i++)
				{
					printf("\n");
				}
				printf("감겨있는 눈을 살며시 뜨고 시야가 점차 밝아진다\n");
				Sleep(delay);
				printf("평소처럼 잠에서 깨는 상쾌한 기분이 아닌.. 어딘가 불편한 느낌에 눈을 뜬다\n");
				Sleep(delay);
				printf("나: ..?! 이게 뭐지? 움직일 수가 없잖아?\n");
				Sleep(delay);
				printf("어렴풋이 내 마지막 기억이 떠오른다\n");
				Sleep(delay);
				printf("늦은 밤에 집으로 돌아가는 길이었던건 기억이 나는데.. 납치 당한건가?\n");
				Sleep(delay);
				printf("\n내가 뭘 할 수 있지..?\n");
				printf("1. 둘러본다\n");
				printf("2. 로비로 이동\n");
				printf("내가 지금 뭘 생각하고 있는거야..: 여기서 빠져 나가야 해!\n");
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
				if (am_i_free_1 == 0)
				{
					if (looking_window_unfree_1 == 0 && looking_table_unfree_1 == 0 && looking_shelf_unfree_1 == 0 && looking_door_unfree_1 == 0)
					{
						for (int i = 0; i < 50; i++)
						{
							printf("\n");
						}
						if (first_1 == 1)
						{
							printf("나: 정신 차리고.. 일단 주변을 둘러보자\n");
							Sleep(delay);
							printf("나: 여긴 창고..인건가\n");
							Sleep(delay);
							printf("나: 주변에서 인기척은 느껴지지 않아.. 나를 납치한 사람은 아무래도 자리를 비운것 같아\n");
							Sleep(delay);
							printf("나: 탈출하려면 지금이 기회야\n");
							Sleep(delay);
							printf("나: 그나저나 손발이 묶여 있어서 제대로 움직일 수가 없어\n");
							Sleep(delay);
							printf("나: 그래도 일어서서 주변을 수색할 수는 있겠어\n");
							Sleep(delay);
						}
						printf("한 벽면에는 철창으로 막혀있는 창이 있다\n");
						Sleep(delay);
						printf("창고 구석에는 테이블이 있다\n");
						Sleep(delay);
						printf("다른 한 편에는 여러가지 물건들이 올라가 있는 선반이 있다\n");
						Sleep(delay);
						printf("벽면에 문이 있다\n");
						Sleep(delay);
						printf("\n내가 뭘 할 수 있지..?\n");
						printf("1. 철창을 확인한다\n");
						printf("2. 테이블을 확인한다\n");
						printf("3. 선반을 확인한다\n");
						printf("4. 문을 확인한다\n");
						printf("5. 로비로 이동\n");
						printf("내가 지금 뭘 생각하고 있는거야..: 무엇을 확인해 볼까\n");
						printf("나는 뭘 해야하지..?: ");
						scanf("%d", &ingame_choice);

						while (ingame_choice != 1 && ingame_choice != 2 && ingame_choice != 3 && ingame_choice != 4 && ingame_choice != 5)
						{
							for (int i = 0; i < 50; i++)
							{
								printf("\n");
							}
							if (first_1 == 1)
							{
								printf("나: 정신 차리고.. 일단 주변을 둘러보자\n");
								printf("나: 여긴 창고..인건가\n");
								printf("나: 주변에서 인기척은 느껴지지 않아.. 나를 납치한 사람은 아무래도 자리를 비운것 같아\n");
								printf("나: 탈출하려면 지금이 기회야\n");
								printf("나: 그나저나 손발이 묶여 있어서 제대로 움직일 수가 없어\n");
								printf("나: 그래도 일어서서 주변을 수색할 수는 있겠어\n");
							}
							printf("한 벽면에는 철창으로 막혀있는 창이 있다\n");
							printf("창고 구석에는 테이블이 있다\n");
							printf("다른 한 편에는 여러가지 물건들이 올라가 있는 선반이 있다\n");
							printf("벽면에 문이 있다\n");
							printf("\n내가 뭘 할 수 있지..?\n");
							printf("1. 철창을 확인한다\n");
							printf("2. 테이블을 확인한다\n");
							printf("3. 선반을 확인한다\n");
							printf("4. 문을 확인한다\n");
							printf("5. 로비로 이동\n");
							printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
							printf("나는 뭘 해야하지..?: ");
							scanf("%d", &ingame_choice);
						}

						if (ingame_choice == 1)
						{
							looking_window_unfree_1 = 1;
						}
						else if (ingame_choice == 2)
						{
							looking_table_unfree_1 = 1;
						}
						else if (ingame_choice == 3)
						{
							looking_shelf_unfree_1 = 1;
						}
						else if (ingame_choice == 4)
						{
							looking_door_unfree_1 = 1;
						}
						else if (ingame_choice == 5)
						{
							playing = 0;
						}
					}
					if (looking_window_unfree_1 == 1)
					{
						for (int i = 0; i < 50; i++)
						{
							printf("\n");
						}
						printf("나: 창문을 살펴보자\n");
						Sleep(delay);
						printf("나: 철창으로 막혀있어 보기엔 단단하게 고정되어 있는 것 같아\n");
						Sleep(delay);
						printf("나: 지금은 손 이 묶여 있어서 뭘 할 수도 없어\n");
						Sleep(delay);
						printf("\n내가 뭘 할 수 있지..?\n");
						printf("1. 돌아가기\n");
						printf("2. 로비로 이동\n");
						printf("내가 지금 뭘 생각하고 있는거야..: 나중에 다시 오자\n");
						printf("나는 뭘 해야하지..?: ");
						scanf("%d", &ingame_choice);

						while (ingame_choice != 1 && ingame_choice != 2)
						{
							for (int i = 0; i < 50; i++)
							{
								printf("\n");
							}
							printf("나: 창문을 살펴보자\n");
							printf("나: 철창으로 막혀있어 보기엔 단단하게 고정되어 있는 것 같아\n");
							printf("나: 지금은 손 이 묶여 있어서 뭘 할 수도 없어\n");
							printf("\n내가 뭘 할 수 있지..?\n");
							printf("1. 돌아가기\n");
							printf("2. 로비로 이동\n");
							printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
							printf("나는 뭘 해야하지..?: ");
							scanf("%d", &ingame_choice);
						}

						if (ingame_choice == 1)
						{
							looking_window_unfree_1 = 0;
							first_1 = 0;
						}
						else if (ingame_choice == 2)
						{
							playing = 0;
						}
					}
					if (looking_table_unfree_1 == 1)
					{
						if (table_interaction_1 == 0)
						{
							for (int i = 0; i < 50; i++)
							{
								printf("\n");
							}
							printf("테이블 위에는 공구 상자가 놓여있다\n");
							Sleep(delay);
							printf("나: 몸으로 밀쳐서 떨어뜨리면 공구 상자 안에 있는 물건을 꺼낼 수 있을거야\n");
							Sleep(delay);
							printf("\n내가 뭘 할 수 있지..?\n");
							printf("1. 돌아가기\n");
							printf("2. 공구 상자를 떨어뜨린다\n");
							printf("3. 로비로 이동\n");
							printf("내가 지금 뭘 생각하고 있는거야..: 제발 이 안에 지긋지긋한 밧줄을 풀 수 있는 것이 있기를\n");
							printf("나는 뭘 해야하지..?: ");
							scanf("%d", &ingame_choice);

							while (ingame_choice != 1 && ingame_choice != 2 && ingame_choice != 3)
							{
								for (int i = 0; i < 50; i++)
								{
									printf("\n");
								}
								printf("테이블 위에는 공구 상자가 놓여있다\n");
								printf("나: 몸으로 밀쳐서 떨어뜨리면 공구 상자 안에 있는 물건을 꺼낼 수 있을거야\n");
								printf("\n내가 뭘 할 수 있지..?\n");
								printf("1. 돌아가기\n");
								printf("2. 공구 상자를 떨어뜨린다\n");
								printf("3. 로비로 이동\n");
								printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
								printf("나는 뭘 해야하지..?: ");
								scanf("%d", &ingame_choice);
							}

							if (ingame_choice == 1)
							{
								looking_table_unfree_1 = 0;
								first_1 = 0;
							}
							else if (ingame_choice == 2)
							{
								for (int i = 0; i < 50; i++)
								{
									printf("\n");
								}
								if (again_table_1 = 0)
								{
									printf("[쿠당탕!]\n");
									Sleep(delay);
									printf("나: 좋아, 밧줄을 풀 수 있는 물건이 있는지 찾아보자\n");
									Sleep(delay);
									printf("???: 이게 무슨 소리야!\n");
									Sleep(delay);
									printf("누군가 있다!\n");
									Sleep(delay);
									printf("나를 납치한 범인일지 모른다\n");
									Sleep(delay);
									printf("서둘러 원래 있던 자리로 돌아가 아직 기절해 있는 척한다\n");
									Sleep(delay);
									printf("???: 이 녀석이 낸 소리인가?\n");
									Sleep(delay);
									printf("???: 흠.. 아직 쓰러져 있는데..\n");
									Sleep(delay);
									printf("???: 뭐야 공구 상자가 떨어진 거였잖아\n");
									Sleep(delay);
									printf("범인이 문을 잠그고 돌아갔다\n");
									Sleep(delay);
									printf("나: 돌아 갔나? 다음부터는 소리에 좀심해야겠어\n");
									Sleep(delay);
								}
								printf("테이블 아래에는 공구상자와 내용물이 어질러져 있다\n");
								printf("\n내가 뭘 할 수 있지..?\n");
								printf("1. 공구 상자의 내용물을 확인한다\n");
								printf("2. 로비로 이동\n");
								printf("내가 지금 뭘 생각하고 있는거야..: 일단 공구 상자 안에 뭐가 있었는지부터 볼까\n");
								printf("나는 뭘 해야하지..?: ");
								scanf("%d", &ingame_choice);

								while (ingame_choice != 1 && ingame_choice != 2)
								{
									for (int i = 0; i < 50; i++)
									{
										printf("\n");
									}
									if (again_table_1 == 0)
									{
										printf("[쿠당탕!]\n");
										printf("나: 좋아, 밧줄을 풀 수 있는 물건이 있는지 찾아보자\n");
										printf("???: 이게 무슨 소리야!\n");
										printf("누군가 있다!\n");
										printf("나를 납치한 범인일지 모른다\n");
										printf("서둘러 원래 있던 자리로 돌아가 아직 기절해 있는 척한다\n");
										printf("???: 이 녀석이 낸 소리인가?\n");
										printf("???: 흠.. 아직 쓰러져 있는데..\n");
										printf("???: 뭐야 공구 상자가 떨어진 거였잖아\n");
										printf("범인이 문을 잠그고 돌아갔다\n");
										printf("나: 돌아 갔나? 다음부터는 소리에 좀심해야겠어\n");
									}
									printf("테이블 아래에는 공구상자와 내용물이 어질러져 있다\n");
									printf("\n내가 뭘 할 수 있지..?\n");
									printf("1. 공구 상자의 내용물을 확인한다\n");
									printf("2. 로비로 이동\n");
									printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아..\n");
									printf("나는 뭘 해야하지..?: ");
									scanf("%d", &ingame_choice);
								}

								if (ingame_choice == 1)
								{
									table_interaction_1 = 1;
								}
								else if (ingame_choice == 2)
								{
									playing = 0;
								}
							}
							else if (ingame_choice == 3)
							{
								playing = 0;
							}
						}
						else if (table_interaction_1 == 1)
						{
							for (int i = 0; i < 50; i++)
							{
								printf("\n");
							}
							printf("나: 망치, 드라이버, 집게.. 쓸만한게 없을까?\n");
							Sleep(delay);
							printf("나: 니퍼? 이거라면 밧줄을 자를 수 있을거야\n");
							Sleep(delay);
							printf("\n내가 뭘 할 수 있지..?\n");
							printf("1. 돌아가기\n");
							printf("2. 니퍼를 이용해 밧줄 끊기\n");
							printf("3. 로비로 이동\n");
							printf("내가 지금 뭘 생각하고 있는거야..: 한 손으로 잘 잡고 어떻게 비벼보면..\n");
							printf("나는 뭘 해야하지..?: ");
							scanf("%d", &ingame_choice);

							while (ingame_choice != 1 && ingame_choice != 2 && ingame_choice != 3)
							{
								for (int i = 0; i < 50; i++)
								{
									printf("\n");
								}
								printf("나: 망치, 드라이버, 집게.. 쓸만한게 없을까?\n");
								printf("나: 니퍼? 이거라면 밧줄을 자를 수 있을거야\n");
								printf("\n내가 뭘 할 수 있지..?\n");
								printf("1. 돌아가기\n");
								printf("2. 니퍼를 이용해 밧줄 끊기\n");
								printf("3. 로비로 이동\n");
								printf("내가 지금 뭘 생각하고 있는거야..: 다른 생각은 나지 않아\n");
								printf("나는 뭘 해야하지..?: ");
								scanf("%d", &ingame_choice);
							}

							if (ingame_choice == 1)
							{
								looking_table_unfree_1 = 0;
								again_table_1 = 1;
							}
							else if (ingame_choice == 2)
							{
								looking_table_unfree_1 = 0;
								am_i_free_1 = 1;
							}
							else if (ingame_choice == 3)
							{
								playing = 0;
							}
						}
					}
					if (looking_shelf_unfree_1 == 1)
					{

					}
				}
				else if (am_i_free_1 == 1)
				{

				}
			}
		}
	}
}