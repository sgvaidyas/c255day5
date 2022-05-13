/*
Linear search
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter the val of n = ";
	cin>>n;
	int a[n];
	cout<<"\n Enter array ele = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];	
	int key ;
	cout<<"\n Enter the search key = ";
	cin>>key;
	int flag=1;
	for(int i=0;i<n;i++)
	{
		if(a[i] == key)
		{
			flag =0;
			cout<<key<<" found at index="<<i<<" pos = "<<i+1<<endl;
		}
	}
	if(flag ==1)
		cout<<"\n Serach key not found";
}
