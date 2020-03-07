#include <stdio.h>

int main(void) {
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i< 10; i++) {
        min = 9999;
        //一番小さな数を前に
        for (j = i; j < 10; j++) {
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        //swap
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(i = 0; i < 10; i++) {
        printf("%d" , array[i]);
    }
    return 0;
}


/*

1 2 3 4 5 6 7 8 9 10

등차수열
10 + 9 + 8 + ... + 1

=> 10 * (10 + 1) / 2 = 55

=> N * (N +1) / 2

컴퓨터에서는 N이 클수록 1더하기나 나누기는 큰 의미가 없기 때문에 생략한다.
=> O(N * N)
*/