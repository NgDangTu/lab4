#include <iostream>
#include <math.h>
using namespace std;
double babylonianRoot(double n){
    return sqrt(n);
}
int main(){
    double n;char a;
    do{
        cout<<"enter a value: ";
        cin>>n;
        cout<<"square root of "<<n<<" is "<<babylonianRoot(n)<<endl;
        cout<<"continue? (y/n): ";
        cin>>a;
    }
    while (a=='y');
    return 0;
}
