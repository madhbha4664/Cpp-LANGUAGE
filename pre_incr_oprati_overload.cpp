#include<iostream>

using namespace std;


class overload
{
    int num;
    public:
    	void get(int m)
    	{
    		num=m;
		}
	    void operator ++()
		{
			++num;
		}
    	void display()
    	{
    		cout<<num;
		}
    	
    	
};
int main()
{
	overload obj;
	obj.get(6);
	++obj;
	obj.display();
	return 0;
}