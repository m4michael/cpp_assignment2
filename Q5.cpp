#include <iostream>
using namespace std;

int main(){
    int num1,first,second,third,sum;

    cout<<"enter three digit number=";
    cin>>num1;

    first=num1/100;
     num1=num1%100;

     second=num1/10;
     third=num1%10;
     sum=first+second+third;

     cout<<endl<<"sum of digits="<<sum;


     








    return 0;

}