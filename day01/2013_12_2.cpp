/* #include<bits/stdc++.h>
#define x 10
using namespace std;
using gg = long long;
int main(){
    string ai;
    gg count = 0;
    //n--属于先赋值后做减法，--n属于先做减法后赋值
    cin >> ai;
    gg count_ano = 0;
    for(int i = 0;i < 12;i++){
        if(ai[i] != '-'){
            count = count + (ai[i]-'0') *(i + 1-count_ano);
        }else{
            count_ano++;
        }
    }
    //没有注意到10的情况
    gg mod_num = count % 11;
    char mod_num_char;
    if(mod_num == 10){
        mod_num_char = 'x';
    }else{
        mod_num_char = mod_num + '0';
    }
    if(mod_num_char == ai[12]){
        cout << "Right";
    }else{
       ai[12] = mod_num_char;
    }
    cout << ai << endl;;
    system("pause");
    return 0;
} */

//以下为答案

#include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg num = 1;
    gg count = 0;
    string ai;
    cin >> ai;
    for(gg i =0;i < ai.size() - 1; ++i){
        if(isdigit(ai[i])) {
            //这里解决了‘-’带来的干扰
            count += (ai[i] - '0') * (num++);
        }
    }
    char final_num = (count % 11 == 10 )? 'X' : count % 11 + '0';
    if(final_num == ai.back()){
       cout << "Right\n" << endl;
    }else{
         ai.back() = final_num;
        cout << ai;
    }

    return 0;
}
