#include<iostream>

using namespace std;


class overload
{
    int num;
    public:
    	void get(int r)
    	{
    		num=r;
		}
	    void operator --()
		{
			num--;
		}
    	void display()
    	{
    		cout<<num;
		} 	
};
int main()
{
	overload obj;
	obj.get(32);
	--obj;
	obj.display();
	return 0;
}