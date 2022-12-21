#include <iostream>
#include <vector>
using namespace std;

int N;
int cnt1 = 0;
int cnt2 = 0;
vector<int> f;

int fib1(int n)
{
    if (n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    else return fib1(n - 1) + fib1(n - 2);
}

int fib2(int n)
{
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++){
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    cin >> N;
    f.resize(N+1, 1);
    fib1(N);
    fib2(N);

    cout << cnt1 << " " << cnt2 << endl;

    return 0;
}