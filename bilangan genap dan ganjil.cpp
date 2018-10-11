#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int x;
	cout<<"masukan bilangan : ";
	cin>>x;
	string message;
	message = x && x%2 == 0 ? "Bilangan Genap" : "Bilangan Ganjil" ;
	cout<<message;
	
	return 0;
}
