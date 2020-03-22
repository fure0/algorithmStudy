#include <stdio.h>

int main(void) {

    int temp;
    int count[6];
    int array[30] = {
        1, 3, 2, 4, 4, 2, 5, 3, 1, 2,
        3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
        3, 1, 4, 3, 5, 1, 2, 1, 1, 1
    };
    for(int i=1; i <= 5; i++) {
        count[i] = 0;
    }
    for(int i=0; i < 30; i++) {
        count[array[i]]++;
    }
    for(int i=1; i<=5; i++){
        if(count[i] != 0){
            for(int j=0; j < count[i]; j++){
                printf("%d", i);
            }
        }
    }
    return 0;
}

/*
예시 데이터 갯수 30, 또한 데이터의 값이 1~5 인경우
범위 조건이 있는 경우에 한해서 굉장히 빠른 알고리즘
O(N)

*/