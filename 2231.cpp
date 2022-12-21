#include <iostream>
#include <vector>

using namespace std;

int N; // 1 ≤ N ≤ 1,000,000
int i, num, sum;
int result = 0;

int main() {
    cin >> N ;
    for (i = 1; i < N; i++){
        num = i;
        sum = num;
        while(num){
            sum += num%10;
            num /= 10;
        }
        if(sum == N) {
            result = i;
            break;
        }
    }
    cout << result << endl;
}