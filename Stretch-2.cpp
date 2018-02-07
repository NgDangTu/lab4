#include <iostream>
using namespace std;
void isLeapYear(int d,int m,int y){
	if (y%100!=0){
		if ((y%4==0 && y%100!=0) || (y%400==0)){
			if (d==29){
				d=1; m+=1;
			}else d+=1;
		}else{
			if (d==28){
				d=1; m+=1;
			}else	d+=1;
		}
		cout<<"next day is: "<<m<<" "<<d<<" "<<y<<endl;	
	}else{
		if (y%400!=0){
			if (d==28){
				d=1; m+=1;
			}else	d+=1;
		}else{
			if (d==29){
				d=1; m+=1;
			}else d+=1;
		}
		cout<<"next day is: "<<m<<" "<<d<<" "<<y<<endl;
	}
}
int last_day(int d,int m,int y){
	switch(m){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if (m==12 && d==31){
				d=1; m=1; y+=1;
			}else{
				if (d==31){
					d=1; m+=1;
				}else
					d+=1;
			}
			cout<<"next day is: "<<m<<" "<<d<<" "<<y<<endl;
			break;
		
		case 4:case 6:case 9:case 11:
			if (d==30){
				d=1; m+=1;
			}else{
				d+=1;
			}
			cout<<"next day is: "<<m<<" "<<d<<" "<<y<<endl;
			break;
		case 2:
			isLeapYear(d,m,y);
			break;
	}
	return m,d,y;
}
int main(){
	int m,d,y;char x;
	do{
		cout<<"enter a date as mm dd yyyy: ";
		cin>>m>>d>>y;
		last_day(d,m,y);
		cout<<"continue? (y/n): ";
		cin>>x;
	}
	while (x=='y');
	return 0;
}
