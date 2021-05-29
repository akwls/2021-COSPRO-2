int solution(int N, int M) {
    int answer = 0;
    for(int i = N; i<=M; i++) {
			if(i%2 == 0) {
				answer += i * i;
			}
		}
    return answer;
}