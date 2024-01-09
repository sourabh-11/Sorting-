#include<iostream>
using namespace std;

void soring(int arr[],int n)
{
	for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++)
		 {
         
            if (arr[j] > arr[j + 1])
			 {
                swap(arr[j], arr[j + 1]);
             }
        }
    }
}


void printarr(int arr[],int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[] ={7,3,6,5,8,2,3,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sorting the Array "<<endl;
	printarr(arr,len);
	soring(arr,len);
	cout<<"After sorting the Array"<<endl;
	printarr(arr,len);
	return 0;
}
