#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<windows.h>
using namespace std;
class fact{
public:
    fact();
    ~fact();
    long int factorial(long int num);
    void startcalcu(void);
protected:
    long int num;
};
fact::fact()
{
}
fact::~fact()
{
}
long int fact::factorial(long int num)
{

    if(num<=1)
        return 1;
    else
        return (num*factorial(num-1));
}
void fact::startcalcu(void)
{
    long int product;
    cout<<"请输入一个小于等于12的整数：";
    cin>>num;
    if(num>12)
        cout<<"数据超出计算范围"<<endl;
    else
    {
        product = factorial(num);
         cout<<num<<"!="<<product<<endl;
    }

}
int main()
{

    system("color f6");
    SetConsoleTitle("计算阶乘");
    fact newnum;
    char choice;
    bool flag;
    flag=1;
    while(flag)
    {
        //system("cls");
        cout<<"计算阶乘的函数程序："<<endl;
        newnum.startcalcu();
        cout<<endl<<"如果不再计算，请按N，否则请按其他任意键继续计算......"<<endl;
        choice = getchar();
        if(choice == 'N'||choice == 'n')
            flag = 0;
    }
    cout<<"成功退出系统"<<endl;
    system("pause");
   exit(1);
   return 0;
}
