#include<iostream>

using namespace std;

int main() {

    
	int n;
	cin>>n;

	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>=n-i;j--)
		{
			cout<<j;
		}
		for(int j=2*(n-i)+1;j>2;j--)
		{
			cout<<" ";
		}
		
	    for(int j=n-i;j<=n;j++)
		{
			if(j>0)
			{
			cout<<j;
			}
		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n;j>=n-i;j--)
		{
			cout<<j;
		}
		for(int j=2*(n-i)+1;j>2;j--)
		{
			cout<<" ";
		}
		
	    for(int j=n-i;j<=n;j++)
		{
			if(j>0)
			{
			cout<<j;
			}
		}
		cout<<endl;
	}
	return 0;
}