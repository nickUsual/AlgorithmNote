#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,max_num,min_num;
    cin >> N;
    vector<int> bi(N);
    cin >> bi[0];
    max_num = bi[0];
    min_num = bi[0];
    for(int i =1;i < N;i++){
        cin >> bi[i];
        max_num += bi[i];
        if(bi[i] > bi[i-1]){
            min_num += bi[i];
        }
    }
    cout << max_num << endl << min_num;
    system("pause");
    return 0;
}