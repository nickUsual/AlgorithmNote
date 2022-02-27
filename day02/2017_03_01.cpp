/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin >> N >> K;
    vector<int> ai(N);
    for(int& i :ai ){
        cin >> i;
    }
    int count =0,temp_num;
    int j,i;
    int vec_size = ai.size();
    temp_num = 0;
    for( i =0;i < vec_size;){
        for( j = i;j < vec_size; j++){
            temp_num += ai[j];
            if(temp_num >= K){
                count++;
                j++;
                temp_num = 0;
                break;
            }
        }
        if(temp_num != 0){
            count ++;
            break;
        }
        i = j;
    }
    cout << count;
    system("pause");
    return 0;
}
 */
//简单一点的解法
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,temp_num = 0,count= 0,num;
    cin >> N >> K;
    for(int i = 0;i < N;i++){
        cin >> num;
        temp_num += num;
        if(i == N-1 || temp_num >= K){
            temp_num = 0;
            count++;
        } 
    }
    cout << count;
    system("pause");
    return 0;
}