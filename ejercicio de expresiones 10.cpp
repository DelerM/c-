#include<iostream>
#include<math.h>



using namespace std;


int main(){
	
	float a,b,c, solucion_1 = 0, solucion_2 = 0;
	
	cout<<"digite el valor de a: ";  cin>>a;
	cout<<"digite el valor de b: ";  cin>>b;
	cout<<"digite el valor de c: ";  cin>>c;
	
	
	solucion_1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	solucion_2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	
	cout<<"\nLa solucion 1 es: "<<solucion_1<<endl;
	cout<<"\nLa solucion 2 es: "<<solucion_2<<endl;
	
	return 0;
}
