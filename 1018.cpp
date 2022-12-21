#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, M; // 8 ≤ N, M ≤ 50
int i, j;
int n, m;
string color;
int cnt;
int result = 64;
vector<vector<int>> board;

int main()
{
    cin >> N >> M;
    board.assign(N, vector<int>(M, 0));
    for (i = 0; i < N; i++)
    {
        cin >> color;
        for (j = 0; j < M; j++)
        {
            if (color[j] == 'W'){
                board[i][j] = 0; // white
            }     
            else if (color[j] == 'B'){
                board[i][j] = 1; // black
            }
        } 
    }

    for (i = 0; i < N - 7; i++)
    {
        for (j = 0; j < M - 7; j++)
        {
            cnt = 0;
            for (n = 0; n < 8; n++)
            {
                for (m = 0; m < 8; m++)
                {
                    if (board[i + n][j + m] == (n + m) % 2)
                        cnt++;
                }
            }
            if (cnt > 64 - cnt) cnt = 64 - cnt;
            if (cnt < result) result = cnt;
        }
    }
    cout << result << endl;
}