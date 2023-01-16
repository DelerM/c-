#include<iostream>

using namespace std;

int main (){
	int producto,iva, precio_final; 
	cout<<"Coloque el precio de su producto: "; cin>>producto;
	iva = producto * 0.19;
	precio_final = producto + iva;
	cout<<"\nEl precio de su producto mas el iva es de: "<<precio_final; 
	

	
	
	
	
	return 0;
}
