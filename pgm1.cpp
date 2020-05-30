/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
*/

#include<iostream>
using namespace std;
int pow(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	
	int ans = pow(x,y-1);
	return x*ans;
}
int main()
{
	int x,y;
	cin>>x>>y;
	int ans = pow(x,y);
	cout<<ans;
}
