#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<pair<int, string> > v;
    v.push_back(pair<int, string>(90, "이후철"));
    v.push_back(pair<int, string>(85, "김태연"));
    v.push_back(pair<int, string>(95, "정형근"));
    v.push_back(pair<int, string>(94, "박종훈"));
    v.push_back(pair<int, string>(93, "은영수"));

    sort(v.begin(), v.end());
    for (int i=0; i< v.size(); i++) {
        cout << v[i].second << ' ';
    }
    return 0;
}