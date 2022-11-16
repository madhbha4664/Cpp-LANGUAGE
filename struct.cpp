#include<iostream>
using namespace std;

struct school
{
	int rollno;
	string name;
 	
	void getrollno(int rno)
	{
		rollno = rno;
		
		cout<<"Roll no Is = "<<rollno<<endl;
    }
		
	void  getname(string sname)	
    {
    	name = sname;
    	cout<<"Name Is = "<<name<<endl;
	}


};
	
	int main()
{
		struct school r;
	  
		r.getrollno(31);
		r.getname("madhav");
		
		
		
}
	
	
	
	
	
	
















































































