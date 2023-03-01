#include <iostream>
using namespace std;
main ()
{
int num =0 ;
cout <<"Ingrese el numero: ";
cin>>num;
if (num>0)
{
	cout << "\nññPositivo"<<endl;
	}	
	else{
		if(num==0)
		{
			cout<<"Neutro"<<endl;
		}
		else 
		{
			cout <<"Negativo"<<endl;
		}
	}
	system("pause");
}