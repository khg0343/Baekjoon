#include <iostream>
#include <vector>

using namespace std;

int N; // 3 ≤ N ≤ 100
int M; // 10 ≤ M ≤ 300,000
int i, j, k;
int cardNum;
int sumNum;
int maxNum = 0;
vector<int> card;

int main() {
    cin >> N >> M ;
    
    for (i = 0 ; i < N ; i++){
        cin >> cardNum;
        card.push_back(cardNum);
    }

    for (i = 0; i < N-2; i++){
        for (j = i+1; j < N-1; j++){
            for (k = j+1; k < N; k++){
                sumNum = card[i] + card[j] + card[k];
                if(sumNum > maxNum && sumNum < M) maxNum = sumNum;
                if(sumNum == M) {
                    i = N-2;
                    j = N-1;
                    k = N;
                    maxNum = M;
                }
            }
        }
    }

    cout << maxNum << endl;

}