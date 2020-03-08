#include <stdio.h>

int main(void) {
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i=0; i<9; i++) {
        j = i;
        while(j >= 0 && array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }
    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

/*
오름차순으로 정렬 하라는 문제에서
1 10 5 8 7 6 4 3 2 9

왼쪽과 비교하여, 적절한 위치에 넣는다.

왼쪽에 있는 수는 이미 정렬 되어있기 때문에, 모든 수를 비교를 안해도 된다.

필요한 만큼만 변경하기 때문에, 상대적으로 선택정렬과 버블 정렬보다 효율적이다.

그러나 시간 복잡도는 같다.
=> O(N * N)

= O(N^2)
*/