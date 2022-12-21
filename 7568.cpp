#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N; // 2 ≤ N ≤ 50
int x, y; // 10 ≤ x, y ≤ 200
int i, j;
vector<pair<int,int>> people;
vector<int> ranks;

int main() {
    cin >> N ;
    for (i = 0 ; i < N ; i++){
        cin >> x >> y;
        people.push_back(make_pair(x, y));
        ranks.push_back(1);
    }

    for (i = 0; i < N-1; i++) {
        for(j = i+1; j < N; j++) {
            if ((people[i].first > people[j].first) && (people[i].second > people[j].second)) ranks[j]++;
            else if ((people[i].first < people[j].first) && (people[i].second < people[j].second)) ranks[i]++;
        }
    }
    
    for (i = 0; i < N; i++){
        cout << ranks[i] << " ";
    }
    cout << endl;
}