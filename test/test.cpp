/* #include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> myvec{ 3, 2, 5, 7, 3, 2 };
    vector<int> lbvec(myvec);
 
    sort(myvec.begin(), myvec.end(), cmp); // 旧式做法
    cout << "predicate function:" << endl;
    for (int it : myvec)
        cout << it << ' ';
    cout << endl;
 
    sort(lbvec.begin(), lbvec.end(), [](int a, int b) -> bool { return a < b; });   // Lambda表达式
    cout << "lambda expression:" << endl;
    for (int it : lbvec)
        cout << it << ' ';

    system("pause");
    return 0;
} */
//默认按照key值升序排序 
/* #include<iostream>
#include<map>
using namespace std;
map<int,char>mp;
int main()
{
	map<int,char>::iterator it;
    mp[1]='c';
    mp[3]='b';
    mp[2]='d';
    mp[4]='a'; 
    for(it=mp.begin();it!=mp.end();it++)
    {
    	cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<"可以看到map容器默认按照key值升序排列"<<endl;
} */


//测试强制类型转换
/* #include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    string a = "123456";
    cout <<"a[1] = " << a[1] << endl;
    int b = 2;
    //char()强制类型转换是将string类型中的数字转换成对应的ascll码表
    b += a[1] - '0';
    cout << "b = "<< b << endl;
    system("pause");
    return 0;
} */


//测试vector的操作呢
/* #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using std::vector;
int main()
{
    vector<vector<int>> arr;  //这里也能够直接定义向量的尺寸
    //初始化
    int row;
    int column;
    cout << "请输入数组的行数和列数：";
    cin >> row >> column;
    //下面是给向量分配存储空间
    arr.resize(row);
    for (int i = 0; i < row; i++)
    {
        arr[i].resize(column);
    }
    //存入元素
    cout << "请输入数组元素：" << endl;
    for (int m = 0; m < row; m++)
    {
        for (int n = 0; n < column; n++)
        {
            cin >> arr[m][n]; //利用cin在命令框中一个个输入
            //也能够是下面的方式直接输入
            //arr[m][n] = m+n //能够等于m+n，也能够等于其余数字
        }
    }
    system("pause");
    return 0;
} */


#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    gg ni;
    cin >> ni;
    vector<gg> ai(ni);
    for (gg& i : ai) {
        cin >> i;
    }
    sort(ai.begin(), ai.end());
    gg t = ai[ai.size() / 2];
    auto p = equal_range(ai.begin(), ai.end(), t);
    //p是一个pair()类型的数字，表示的位置
    cout << (p.first - ai.begin() == ai.end() - p.second ? t : -1);
    system("pause");
    return 0;
}