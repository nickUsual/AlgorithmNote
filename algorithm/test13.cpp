/*
求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。

要求输出的结果总宽度占10位，其中小数部分为8位。

程序中使用浮点型数据时，请定义为双精度double类型。

如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，如求x的绝对值，则为fabs(x).*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a = 2,PI_1 =1,PI_2 = 0;
    double i =1;
    while(fabs(PI_1 - PI_2) > 0.000001){
        PI_2 = PI_1;
        PI_1 += pow(-1,i) * (1/(2*i + 1));
        i++;
    }
    printf("PI=%10.8f\n",4*PI_2);
    getchar();
    return 0;
}