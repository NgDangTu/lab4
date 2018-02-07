#include <iostream>
#include <math.h>
using namespace std;
int isLeapYear(int y){
	if (y%100!=0){
		if ((y%4==0 && y%100!=0) || (y%400==0)){
		    cout<<"days in month: 29"<<endl;
		}
		else
		    cout<<"days in month: 28"<<endl;
	}else{
		if (y%400!=0)
			cout<<"days in month: 28"<<endl;
		else
			cout<<"days in month: 29"<<endl;
		}
}
int last_day(int m,int y){
    switch(m){
        case 1: case 3:case 5:case 7:case 8: case 10: case 12:
            cout<<"days in month: 31"<<endl;
            break;
        case 4:case 6:case 9:case 11:
            cout<<"days in month: 30"<<endl;
            break;
        case 2:
            isLeapYear(y);
    }
    return m;
}
int main(){
    int m,y;char a;
    do{
        cout<<"enter month and year: ";
        cin>>m>>y;
        last_day(m,y);
        cout<<"continue? (y/n): ";
        cin>>a;
    }
    while (a=='y');
    return 0;
}
