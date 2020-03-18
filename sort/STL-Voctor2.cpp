#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, 
             pair<string, pair<int, int> > b) {
    if(a.second.first == b.second.first) {
        return a.second.second > b.second.second;
    } else {
        return a.second.first > b.second.first;
    }

}

int main(void) {
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> >("김태연", make_pair(90, 19891121)));
    v.push_back(pair<string, pair<int, int> >("이후철", make_pair(92, 19891010)));
    v.push_back(pair<string, pair<int, int> >("박종훈", make_pair(90, 19890424)));
    v.push_back(pair<string, pair<int, int> >("정형근", make_pair(93, 19910204)));
    v.push_back(pair<string, pair<int, int> >("한성민", make_pair(97, 19890708)));

    sort(v.begin(), v.end(), compare);
    for(int i=0; i <v.size(); i++) {
        cout << v[i].first << ' ';
    }
    return 0;
}