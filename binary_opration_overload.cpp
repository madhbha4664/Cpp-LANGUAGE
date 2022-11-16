#include<iostream>
using namespace std;

class op_overload
{
	int m,r;
	
	public:
		
		void setValue(int g,int j)
		{
			m=g;
			r=j;
		}
		
		op_overload operator +(op_overload r1)
		{
		    op_overload p;
		    
	    	p.m =r1.m+m;
			p.r = r1.r+r;
			return p;
		}
		
		void display()
		{
			cout<<"Sum of First Two Operand Of Objects : "<<m<<endl;
		    cout<<"Sum of Second Two Operand Of Objects : "<<r<<endl;
		
		}
	
};

int main()
{

	op_overload ob1,ob2,ob3;
	ob1.setValue(31,7);
	ob2.setValue(22,24);

	ob3 = ob1+ob2;
	
	ob3.display();
	return 0;
}