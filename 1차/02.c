int solution(int price, char* grade) {
	int answer = 0;
	if(strcmp(grade, "S") == 0) answer = (double)price * 0.95;
	else if(strcmp(grade, "G") == 0) answer = (double)price * 0.9;
	else answer = (double)price * 0.85;
	return answer;
}
