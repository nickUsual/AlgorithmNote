/* #include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> myvec{ 3, 2, 5, 7, 3, 2 };
    vector<int> lbvec(myvec);
 
    sort(myvec.begin(), myvec.end(), cmp); // ��ʽ����
    cout << "predicate function:" << endl;
    for (int it : myvec)
        cout << it << ' ';
    cout << endl;
 
    sort(lbvec.begin(), lbvec.end(), [](int a, int b) -> bool { return a < b; });   // Lambda���ʽ
    cout << "lambda expression:" << endl;
    for (int it : lbvec)
        cout << it << ' ';

    system("pause");
    return 0;
} */
//Ĭ�ϰ���keyֵ�������� 
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
	cout<<"���Կ���map����Ĭ�ϰ���keyֵ��������"<<endl;
} */


//����ǿ������ת��
/* #include<bits/stdc++.h>
using namespace std;
using gg = long long;
int main(){
    string a = "123456";
    cout <<"a[1] = " << a[1] << endl;
    int b = 2;
    //char()ǿ������ת���ǽ�string�����е�����ת���ɶ�Ӧ��ascll���
    b += a[1] - '0';
    cout << "b = "<< b << endl;
    system("pause");
    return 0;
} */


//����vector�Ĳ�����
/* #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using std::vector;
int main()
{
    vector<vector<int>> arr;  //����Ҳ�ܹ�ֱ�Ӷ��������ĳߴ�
    //��ʼ��
    int row;
    int column;
    cout << "�����������������������";
    cin >> row >> column;
    //�����Ǹ���������洢�ռ�
    arr.resize(row);
    for (int i = 0; i < row; i++)
    {
        arr[i].resize(column);
    }
    //����Ԫ��
    cout << "����������Ԫ�أ�" << endl;
    for (int m = 0; m < row; m++)
    {
        for (int n = 0; n < column; n++)
        {
            cin >> arr[m][n]; //����cin���������һ��������
            //Ҳ�ܹ�������ķ�ʽֱ������
            //arr[m][n] = m+n //�ܹ�����m+n��Ҳ�ܹ�������������
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
    //p��һ��pair()���͵����֣���ʾ��λ��
    cout << (p.first - ai.begin() == ai.end() - p.second ? t : -1);
    system("pause");
    return 0;
}