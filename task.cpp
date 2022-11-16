#include<iostream>

using namespace std;

class father 
{
	protected :
	int money=1000;
	public:
		void display1()
		{
			cout<<"Father Have.....$1000"<<endl;
		}
		
};
class son : public father 
{
	public:
		void display2()
		{
			display1();
			int sum=0;
			sum=1000-650;
			cout<<"Father Give To Son = $"<<sum<<endl;
		}
		
};
class daughter : public father 
{
	public:
		void display3()
		{
			int sum1=0;
			sum1=1000-350;
			cout<<"Father Give To Daughter = $"<<sum1<<endl;
		}
	
};
int main()
{
	son obj;
	daughter obj1;
	obj.display2();
    obj1.display3();
   
	return 0;
}