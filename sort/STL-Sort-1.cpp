#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    int a[10] = {9, 3, 5, 4, 1, 10 ,8, 6, 7, 2};
    sort(a ,a + 10, compare);
    for(int i = 0; i < 10; i ++){
        cout << a[i] << ' ';
    }
}

/*
기본적으로 sort내장 함수는 오름 차순이다.
인자에 함수를 재정의 해서 내림차순으로 만들 수 있다.
*/