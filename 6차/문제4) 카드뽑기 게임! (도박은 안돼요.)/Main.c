#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(char* cards[][2], int cards_len) {
    int answer = 0;
    int count[3] = {0};
		for(int i=0; i<cards_len; i++) {
			answer += *(cards[i][1])-48;
			int j;
			for(j=0; *(cards[i][0]+j)!=NULL; j++) {
			}
			if(j == 3) count[0]++;
			else if(j == 5) count[1]++;
			else count[2]++;
		}
	int max = 1;
		for(int i=0; i<3; i++) {
			if(count[i] > max) max = count[i];
		}
	answer = answer * max;
	
    return answer;
}
int main() {
    char* cards1[][2] = {{"blue", "2"}, {"red", "5"}, {"black", "3"}};
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    char* cards2[][2] = {{"blue", "2"}, {"blue", "5"}, {"black", "3"}};
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}