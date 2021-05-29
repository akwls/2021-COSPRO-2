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