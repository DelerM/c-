#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x,x1,x2,y,y1,y2, hipotenusa = 0;
	
	cout<<"Digite el valor del cateto x1: "; cin>>x1;
	cout<<"Digite el valor del cateto x2: "; cin>>x2;
	cout<<"Digite el valor del cateto y1: "; cin>>y1;
	cout<<"Digite el valor del cateto y2: "; cin>>y2;
	
	x = x2-x1;
	y = y2-y1;
	
	hipotenusa = sqrt(pow(x,2)+pow(y,2));
	
	
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	
	
	
	
	
	return 0;
}
