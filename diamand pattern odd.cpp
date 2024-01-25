#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int space = n-1;
    for(int i = 1;i<=n;i++)
    {
    	for(int j = 1;j<=space;j++)
    	{
    		cout<<" ";
		}
		for(int j = 1;j<=i;j++)
		{
			cout<<"* ";
			
		}
		cout<<endl;
		space--;
	}
	space = 0;
	for(int i = n;i>=1;i--)
	{
		for(int j = 0;j<space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
		space++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
