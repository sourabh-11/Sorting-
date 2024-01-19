#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{
	for(int i = 0;i<n-1;i++)
	{    int min_index = i;
		for(int j = i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j;
			}
		}
		 if (min_index != i) 
            swap(arr[min_index], arr[i]); 
	}
}
void printarr(int arr[], int n)
{ 
    for(int i =0;i<n;i++)
    {
	   cout<<arr[i]<<" ";
    }
	cout<<endl;
}
int main()
{
	int arr[]={5,6,3,8,4,9,1,2,7};
	int n  = sizeof(arr)/sizeof(arr[0]);
	cout<<"The array"<<endl;
	printarr(arr,n);
	sorting(arr,n);
	cout<<"After sorting the array"<<endl;
	printarr(arr,n);
	return 0;
}
