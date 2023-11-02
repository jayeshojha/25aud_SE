#include<iostream>
using namespace std;
class overloading
{
	public:
		void addition(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void substraction(int a,int b)
		{
			cout<<a-b<<endl;
		}
		void muliplication(int a,int b)
		{
			cout<<a*b<<endl;
		}
		void division(float a,float b)
		{
			cout<<a/b<<endl;
		}
		
};
main()
{
	overloading obj;
	
	obj.addition(3,4);
	obj.substraction(5,4);
	obj.muliplication(20,23);
	obj.division(2.3,5.1);
}
