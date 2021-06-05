#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
		int check[6][6] = {0};
  	for(int i=1; i<5; i++) {
			for(int j=1; j<5; j++) {
					check[i][j] = height[i-1][j-1];
			}
		}
	for(int i=1; i<5; i++) {
		for(int j=1; j<5; j++) {
			if(check[i][j] > check[i-1][j] && check[i][j] > check[i+1][j] && check[i][j] > check[i][j-1] && check[i][j] > check[i][j+1]) count++;
		}
	}
    return count;
}

int main() {
    int height[4][4] = {{3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9}};
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}