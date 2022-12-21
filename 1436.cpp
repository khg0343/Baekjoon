#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N; // 1 ≤ N ≤ 10,000
int result;
string num;
int cnt = 0;

int main() {
    cin >> N ;

    for (int i = 0; i < 10000000; i++){
        num = to_string(i);
        if (num.find("666") != string::npos)
            cnt++;
        if (cnt == N) {
            result = i;
            break;
        }
    }

    cout << result << endl;
}

