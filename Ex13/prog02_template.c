#include <stdio.h>
#include <stdlib.h>

#define BLACK '1'
#define WHITE '0'


char **pbm_alloc(int, int);
void   pbm_free(char **, int, int);
char **pbm_read(int *x, int *y);
void   pbm_write(char **, int, int);
void   pbm_square(char **, int, int, int, char);

int main() {
	char **pbm;
	int i;
	int ix, iy, d;

	/* 標準入力から入力された画像に合わせて領域を確保し、画素を読み込む */
	pbm = pbm_read(&ix, &iy);

	/* 正方形の半辺長を画像サイズに合わせて決める */
	if (ix>iy) d = iy / 2;
	else d = ix / 2;
	d--;
	
	/* 正方形を書く */
	pbm_square(pbm, ix, iy, d, BLACK);
	pbm_square(pbm, ix, iy, d/2, BLACK);

	/* 画像を書きだす */
	pbm_write(pbm, ix, iy);
	/* 画像領域の解放 */
	pbm_free(pbm, ix, iy);
	return 0;
}

char **pbm_alloc(int x, int y) {
	char **data;

	/* ２次元配列の作成 */



	return data;
}

void  pbm_free(char **pbm, int x, int y) {
	int i;
	for (i = 0; i<y; i++)
		free(pbm[i]);
	free(pbm);
}

void   pbm_write(char **pbm, int x, int y) {
	int i, j;
	/* 最初にP1とx,yの画素数を出力 */
	printf("P1\n");
	printf("%d %d\n", x, y);
	/* 実際のデータ出力 */
	for (i = 0; i < y; i++) {
		for (j = 0; j < x; j++) {
			printf("%c ", pbm[i][j]);
		}
		printf("\n");
	}
}

char **pbm_read(int *x, int *y) {
	char **data;



	return data;
}



/********************************************/
/* 画像に正方形を描画                       */
/* pbm, x, y: 画像データの配列と大きさ      */
/* d: 正方形の半辺長                        */
/* col: 描画色 (0 or 1)                     */
/********************************************/
void   pbm_square(char **pbm, int x, int y, int d, char col) {




}
