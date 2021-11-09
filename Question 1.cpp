#include <iostream>
#include <cmath>
using namespace std;
//137187 Asher Yisrael Kutswa
//CAT 1 - Question 1 

int main(){
	float radius, height, area, volume;
	cout<<"Welcome to the calculator for Area and Volume of Cylinders!!!\n";
	cout<<"\n";
	cout<<"Kindly input the height of the cylinder : ";
	cin>>height;
	cout<<"\n";
	cout<<"Kindly input the raidus of the cylinder : ";
	cin>>radius;
	cout<<"\n";
	area=(2*M_PI*radius*height)+(2*M_PI*radius+radius);
	cout<<"The area of the cylinder is : ";
	cout<<area;
	cout<<"\n";
	volume=M_PI*radius*radius*height;
	cout<<"The volume of the cylinder is : ";
	cout<<volume;	
	return 0;
}
