#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N,M,tem_num ,m_temp;
    cin >> N >> M;

    vector<vector<int> > ai;
    ai.resize(N);
    for(int i = 0;i < N;i++){
        ai[i].resize(M);
    }

    for(int i = 0;i < N;i++){
        for(int j =0;j < M;j++){
            cin >> ai[i][j];
        }
    }
    for(int i = M-1;i >= 0;--i){
        for(int j=0;j < N;j++){
            cout << ai[j][i] << " ";
        }
        cout << "\n";
    }
    system("pause");
    getchar();
    return 0;
}