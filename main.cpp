#include <iostream>


using namespace std;
int main () 
{
	float A,B,C,V,S;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	cout<<"C=";
	cin>>C;
	V=A*B*C;
	S=A*B*2+A*C*2+B*C*2;
	cout<<"V(ABC)=(V=A*B*C)="<<V<<"        ";
	cout<<"Spp(ABC)=(S=A*B*2+A*C*2+B*C*2)="<<S;
	return 0;
}
