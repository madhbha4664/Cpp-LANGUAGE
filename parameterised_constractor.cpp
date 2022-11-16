#include<iostream>

using namespace std;

class XYZ
{
    int rollno;
    string name;
    public:
    	XYZ(int rollno,string name)
    	{
    		cout<<rollno<<endl<<name<<endl;
		}
	
};

int main()
{
	
	XYZ obj(07,"Madhav"),obj1(31,"How Are You");
	
	return 0;
}