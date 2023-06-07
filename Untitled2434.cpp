#include <iostream>
using namespace std;

int main()
{
int num1,num2,num3,num4;

cout<<" ingrese los  4 numeros "<<endl;
cout<<endl;

cout<<"ponga un numero :"<<endl;
cin>>num1;
cout<<endl;

cout<<"ponga un numero :"<<endl;
cin>>num2;
cout<<endl;

cout<<"ponga un numero :"<<endl;
cin>>num3;
cout<<endl;

cout<<"ponga un numero :"<<endl;
cin>>num4;
cout<<endl;

if((num1==num2)&&(num1==num3)&&(num1==num4))
	{	
	cout<<"son todas iguales"<<endl;
	}
else
	{
	if((num1==num2)&&(num1==num3)||(num1==num2)&&(num1==num4)||(num1==num3)&&(num1==num4)||(num2==num3)&&(num3==num4)||(num2==num3)&&(num2==num4))
 			{
			cout<<"son 3 iguales"<<endl;
			}
	else
	 	{	
   		if((num1==num2)||(num1==num3)||(num1==num4))
			{
 			cout<<"son 2 iguales"<<endl;
 			}
		}
	}


return 0;

}
