/* 실습. tic-tac-toe 게임 */

#include <stdio.h>
#include <stdlib.h>

void init_board(char board[][3]); // 보드 초기화
int get_player_move(int player, char board[][3]); 
void disp_board(char board[][3]); // 보드 출력

int main(void)
{
	char board[3][3]; // 2차원 문자 배열로 보드 표시함
	int quit = 0;

	init_board(board); // 보드를 초기화한다.
	do {
		disp_board(board); // 보드를 화면에 출력한다.
		quit = get_player_move(0, board); // 사용자의 입력을 받는다.
		if (quit == 1)
			break;
		disp_board(board);
		quit = get_player_move(1, board);
		if (quit == 1)
			break;
	} while (quit == 0);

	return 0;
}

void init_board(char board[][3])
{
	int x, y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
			board[x][y] = ' '; // 2차원 배열을 ' '로 초기화한다.
	}
}

int get_player_move(int player, char board[][3])
{
	int x, y, done = 0;
	while (done != 1) {
		printf("(x,y) 좌표(종료 -1,-1) : ");
		scanf_s("%d %d", &x, &y);
		
		if (x == -1 && y == -1)
			return 1; // 종료 조건

		if (board[x][y] == ' ')
			break; // 올바른 위치이면 반복 루프를 나간다.
		else
			printf("잘못된 위치입니다.\n");
	}

	if (player == 0)
		board[x][y] = 'X';
	else
		board[x][y] = 'O';

	return 0;
}

void disp_board(char board[][3])
{
	int i;
	for (i = 0; i < 3; i++) {
		printf("---|---|---\n");
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		printf("---|---|---\n");
	}
}