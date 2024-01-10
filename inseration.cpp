#include<iostream>
using namespace std;
void inseratiom(int arr[],int n)
{
	for(int i = 1;i< n;i++)
	{
		int key  = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]  = arr[j];
			j = j-1;
			
		}
		arr[j+1] = key;
	}
}
void printarr(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={7,4,8,9,5,3,1,2,6};
	int len  = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before The Array"<<endl;
	printarr(arr,len);
	inseratiom(arr,len);
	cout<<endl;
	cout<<"After Sorting the Array"<<endl;
	printarr(arr,len);
	
	return 0;
}
