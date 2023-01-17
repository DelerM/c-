#include<iostream>

using namespace std;
int main(){
	
	float a,b,c,d,e, promedio = 0;
	
	cout<<"Digite la nota del primer estudiante: "; cin>>a;
	cout<<"Digite la nota del segundo estudiante: "; cin>>b;
	cout<<"Digite la nota del tercer estudiante: "; cin>>c;
	cout<<"Digite la nota del cuarto estudiante: "; cin>>d;
	cout<<"Digite la cantidad de estudiantes: "; cin>>e;
	
	promedio = (a+b+c+d)/(e);
	
	cout<<"\nLa nota final media de los estudiantes es: "<<promedio<<endl;
	
	
	
	
	return 0;
}
