#include <iostream>
using namespace std;

int main(){

    int number;
	cout<<"enter 5 digit number=";
	cin>>number;
	
	int FirstDigit=number/10000;
	
	int secondLastDigit=(number/10)%10;
	
	cout<<endl<<"sum of first and second last digit="<<(FirstDigit+secondLastDigit);


return 0;

}