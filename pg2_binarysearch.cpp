#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cout<<"\n Enter the val of n = ";
	cin>>n;
	int a[n];
	cout<<"\n Enter array ele = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];	
	//bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\n sorted elements = \n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";	
	int key ;
	cout<<"\n Enter the search key = ";
	cin>>key;
	int low=0,mid,high=n-1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(a[mid]==key)
		{
			cout<<"\n Key found at "<<mid<<endl;
			break;
		}
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		else
			high = mid-1;
	}
	if(low>high)
		cout<<"\n Search key not found ";
}
	
	
	
