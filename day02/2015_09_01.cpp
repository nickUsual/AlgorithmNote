#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,tem_num,count = 0;
     cin >> N;
    vector<int> ai(N);
    bool flag = true;
    cin >>ai[0];
    for(int i =0;i < N;){
        while(true){
            if (++i >= N) break;
             cin >> ai[i];
            if(ai[i -1] != ai[i]){
                count++;
               break;   
            }
        }
    }
    cout << count + 1;
    system("pause");
    return 0;
}