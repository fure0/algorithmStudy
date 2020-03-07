#include <stdio.h>

int main(void) {
    int i, j, temp;
    int array[10] = {1, 10, 5 ,8 ,7 ,6, 4, 3, 2, 9};
    for (i = 0; i < 10; i++) {
        for(j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 10; i ++) {
        printf("%d ", array[i]);
    }
    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10

=> 10 + 9 + 8 + 7 + ... + 1

=> N * (N + 1) / 2

컴퓨터에서는 N이 클수록 1더하기나 나누기는 큰 의미가 없기 때문에 생략한다.
=> O(N * N)

= O(N^2)

선택 정렬과 같은 시간 복잡도를 가지고 있지만,
선택정렬의 경우 가장 작은것을 골라 마지막에만 교체하지만, 
버블정렬 같은경우는 매번 교체를 해야 하기 때문에
선택정렬보다 실제론 비효율 적이다.

버블정렬는 정렬 알고리즘중 가장 느리다.
*/