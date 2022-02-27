#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> ai(N);
    for(int& i : ai){
        cin >> i;
    }
    sort(ai.begin(),ai.end());
    int t = ai[ai.size() / 2];
    auto p = equal_range(ai.begin(),ai.end(),t);
    cout << (p.first - ai.begin() == ai.end() - p.second ? t : -1);
    system("pause");
    return 0;
}