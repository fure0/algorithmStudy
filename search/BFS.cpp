#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    c[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        printf("%d ", x);
        for(int i = 0; i < a[x].size(); i++) {
            int y = a[x][i];
            if(!c[y]) {
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main(void) {
    // link 1 and 2
    a[1].push_back(2);
    a[2].push_back(1);
    // link 1 and 3
    a[1].push_back(3);
    a[3].push_back(1);
    // link 2 and 3
    a[2].push_back(3);
    a[3].push_back(2);
    // link 2 and 4
    a[2].push_back(4);
    a[4].push_back(2);
    // link 2 and 5
    a[2].push_back(5);
    a[5].push_back(2);
    // link 3 and 6
    a[3].push_back(6);
    a[6].push_back(3);
    // link 3 and 7
    a[3].push_back(7);
    a[7].push_back(3);
    // link 4 and 5
    a[4].push_back(5);
    a[5].push_back(4);
    // link 6 and 7
    a[6].push_back(7);
    a[7].push_back(6);
    // BFS실행
    bfs(1);
    return 0;
}

/*
너비 우선 탐색(Breadth First Search, BFS) 탐색을 할 때 너비를 우선
최단 경로를 찾는다는 점에서 최단 길이 보장할 때 사용

BFS 자체로는 큰 의미는 없지만, 너비를 우선 탐색 한다는 특성을 다른 알고리즘에 이용하는 것이 핵심

*/