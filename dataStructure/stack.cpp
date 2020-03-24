#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    stack<int> s;
    s.push(7);
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
}

/*
LIFO Last in Frist Out
後入先出
택배 상하차와 같다.
*/