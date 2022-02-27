#include<bits/stdc++.h>
#include<hash_map>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,tem_num =0,num1,num2;
    cin >> n;
    while(n--){
        cin >> num1 >> num2;
        tem_num += num1 * num2;
    }
    cout << max(0,tem_num);
    getchar();
    system("pause");
    return 0;
}