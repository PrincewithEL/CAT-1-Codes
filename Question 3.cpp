#include <iostream>
using namespace std;
//137187 Asher Yisrael Kutswa
//CAT 1 - Question 3
int main(){
	char name[75];
	float gross, net, tp;
	gross = 10000;
	tp = gross*25/100;
	net = gross-tp;
	cout<<"Welcome to the tax payable to the government and net salary (amount after tax deductions)!!!\n";
	cout<<"Enter Employee Name : \n";
	cin>>name;
	cout<<"\n";
	cout<<"Tax Payable for "<<name<<" is : ";
	cout<<tp;
	cout<<"\n";
	cout<<"Net Salary for "<<name<<" is : ";
	cout<<net;
	cout<<"\n";
	return 0;
}
