#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> temp;
    int num,temp_num,count = 0;
    cin >> num;
    while (true) {
        if(!num) break;
        temp_num = num % 10;
        temp.push_back(temp_num);
        num = num / 10;
    }
    for(auto i : temp){
        count += i;
    }
    cout << count;
    system("pause");
    return 0;
}