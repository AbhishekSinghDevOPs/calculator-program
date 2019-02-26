#include<iostream>
using namespace std;
class func{
	int x,y;
	public:
	 func(int a, int b)
	 {
		 x=a;
		 y=b;
	 } 
	 int sum()
	 {
		 return (x+y);
	 }
	 int difference()
	 {
		 return (x-y);
	 }
	 int product()
	 {
		 return (x*y);
	 }
	 int quotient()
	 {
		 return (x\y);
	 }
};
int main()
{
	cout<<"Enter two numbers"<<endl;
	int x,y;
	cin>>x>>y;
	func obj(x,y);
	cout<<"THe sum of numbers are"<<sum()<<endl;
	cout<<"The difference of numbers are"<<difference()<<endl;
	cout<<"The product of numbers are"<<product()<<endl;
	cout<<"The quotient of numbers are"<<quotient()<<endl;
	return 0;
}	
