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
    cout<<"������һ��С�ڵ���12��������";
    cin>>num;
    if(num>12)
        cout<<"���ݳ������㷶Χ"<<endl;
    else
    {
        product = factorial(num);
         cout<<num<<"!="<<product<<endl;
    }

}
int main()
{

    system("color f6");
    SetConsoleTitle("����׳�");
    fact newnum;
    char choice;
    bool flag;
    flag=1;
    while(flag)
    {
        //system("cls");
        cout<<"����׳˵ĺ�������"<<endl;
        newnum.startcalcu();
        cout<<endl<<"������ټ��㣬�밴N�������밴�����������������......"<<endl;
        choice = getchar();
        if(choice == 'N'||choice == 'n')
            flag = 0;
    }
    cout<<"�ɹ��˳�ϵͳ"<<endl;
    system("pause");
   exit(1);
   return 0;
}
