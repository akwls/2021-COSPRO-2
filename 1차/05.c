int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len - 1;
    while(left <= right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}