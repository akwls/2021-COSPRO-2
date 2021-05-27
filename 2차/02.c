char* solution(int arr[], int arr_len) {
    int count_three = func_c(arr, arr_len);
    int count_five = func_a(arr, arr_len);
    char* answer = func_b(count_three, count_five);
    return answer;
}