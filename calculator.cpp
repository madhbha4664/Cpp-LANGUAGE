#include<iostream>
using namespace std;

class calculator
{
  int num1,num2,sum;
  public:
  
  void getsum(int a,int b)
      {
      	num1=a;
      	num2=b;
      	
      	sum=num1+num2;
      	cout<<"ADDITION IS => "<<sum<<endl;
      	
	  }	
	
	void getsub(int a,int b)
      {
      	num1=a;
      	num2=b;
      	
      	sum=num1-num2;
      	cout<<"SUBTRACTION IS => "<<sum<<endl;
      	
	  }	
	
	
	void getmulti(int a,int b)
      {
      	num1=a;
      	num2=b;
      	
      	sum=num1*num2;
      	cout<<"MULTIPLICATION IS => "<<sum<<endl;
      	
	  }	
	
	void getdivision(int a,int b)
      {
      	num1=a;
      	num2=b;
      	
      	sum=num1/num2;
      	cout<<"DIVISION IS = "<<sum<<endl;
      	
	  }	
	
	
	

};



int main()
{
	int m,r;

	cout<<"Enter Any Two Values : " <<endl;
	cin>>m>>r;
		
	calculator obj;
	obj.getsum(m,r);
	obj.getsub(m,r);
	obj.getmulti(m,r);
	obj.getdivision(m,r);	
	
	
	
}
