int min(int a, int b){
    return a < b ? a : b;
}

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    int* left_counter = func_a(left_gloves, left_gloves_len);
    int* right_counter = func_a(right_gloves, right_gloves_len);
    int total = 0;
    for(int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}

int main() {
    int left_gloves[5] = {2, 1, 2, 2, 4};
    int left_gloves_len = 5;
    int right_gloves[6] = {1, 2, 2, 4, 4, 7};
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}