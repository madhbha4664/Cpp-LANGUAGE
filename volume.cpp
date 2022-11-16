#include<iostream>

using namespace std;

int main()
{
	int m,r;
	float vol;
	cout<<"Enter Radius :\n";
	cin>>m;
	cout<<"Enter Height :\n";
	cin>>r;
	vol=3.14*m*m*r;
	cout<<"Volume = "<<vol;

	return 0;
}