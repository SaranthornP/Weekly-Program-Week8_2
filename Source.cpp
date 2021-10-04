#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int chess[8][8];
int check = 0;
void rook(int x, int y);
int main() {
	int a;
	scanf("%d", &a);
	int x[64];
	int y[64];
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	for (int i = 0; i < a; i++) {
		rook(x[i], y[i]);
	}
	 /*//chessboard
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%d ", chess[i][j]);
		}
		printf("\n");
	}*/
	int pawn = 64 - check;
	printf("%d", pawn);
	return 0;
}
void rook(int xt, int yt) {
	int x = xt - 1;
	int y = yt - 1;
	if (chess[x][y] == 0) {
		check += 1;
	}
	chess[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		if (chess[x][i] != 1) {
			chess[x][i] = 1;
			check += 1;
		}
		if (chess[i][y] != 1) {
			chess[i][y] = 1;
			check += 1;
		}
	}
}