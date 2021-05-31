#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(char* words[], int words_len) {
		int cnt = 0;
	  for(int i=0; i<words_len; i++) {
			if(strlen(words[i]) >=5) cnt += strlen(words[i]);
		}
    char* answer = (char*)malloc(cnt+1);
    for(int i=0; i<words_len; i++) {
			if(strlen(words[i]) >=5 ) strcat(answer, words[i]);
		}
	 if(answer[0] == NULL) strcpy(answer, "empty");
    return answer;
}
int main() {
    char* words1[5] = {"my", "favorite", "color", "is", "violet"};
    int words_len1 = 5;
    char* ret1 = solution(words1, words_len1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);
    
    char* words2[3] = {"yes", "i", "am"};
    int words_len2 = 3;
    char* ret2 = solution(words2, words_len2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}