#include <iostream>
#include <math.h>
using namespace std;
int isLeapYear(int n){
	if (n%100!=0){
		if ((n%4==0 && n%100!=0) || (n%400==0)){
			cout<<n<<" is a leap year"<<endl;
		}
		else
			cout<<n<<" is not a leap year"<<endl;
	}else{
		if (n%400!=0)
			cout<<n<<" is not a leap year"<<endl;
		else
			cout<<n<<" is a leap year"<<endl;
		}
}
int main(){
	int n;char x;
	do{
		cout<<"enter a year value: ";
		cin>>n;
		isLeapYear(n);
		cout<<"continue? (y/n): ";
		cin>>x;
	}
	while (x=='y');
	return 0;
}
