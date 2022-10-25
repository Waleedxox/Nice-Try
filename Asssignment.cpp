#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char choice;
	bool loop=1;
	while(loop)
	{
	cout<<"1st no"<<endl;
	cin>>num1;
	cout<<"2nd no"<<endl;
	cin>>num2;
	cout<<" Enter operator choice"<<endl;
	cin>>choice;
	if (choice=='+')
	cout<<num1<<'+'<<num2<<'='<<num1+num2<<endl;
	else
	if (choice=='-')
	cout<<num1<<'-'<<num2<<'='<<num1-num2<<endl;
	else
	if (choice=='*')
	cout<<num1<<'*'<<num2<<'='<<num1*num2<<endl;
	else
	if (choice=='/')
	cout<<num1<<'/'<<num2<<'='<<num1/num2<<endl;
	else
	if(choice=='%')
	cout<<num1<<'%'<<num2<<'%'<<num1%num2<<endl;
	else
	cout<<"Invalid input";
	break;
}
	return 0;
}
