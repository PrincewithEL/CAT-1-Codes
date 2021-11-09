#include <iostream>
using namespace std;
//137187 Asher Yisrael Kutswa
//CAT 1 - Question 2

double ftoc(double f){
		double c;
		c=5.0/9.0*(f-32.0);
		return c;
	}

int main (){
	cout<<"Welcome to the Farenheit to Celsius Temperature Converter!!!\n";
	double f;
	cout<<"Enter temperature in Farenheit (degrees) : \n";
	cin>>f;
	cout<<"\n";
	cout<<"Temperature in Celsius is : ";
	cout<<ftoc(f)<<endl;
	return 0;
	
}
