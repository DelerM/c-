#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float a,b, hipotenusa = 0;
	
	cout<<"Digite el valor del cateto a: "; cin>>a;
	cout<<"Digite el valor del cateto b: "; cin>>b;
	
	hipotenusa = sqrt(pow(a,2)+pow(b,2));
	
	
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	
	
	
	
	
	return 0;
}
