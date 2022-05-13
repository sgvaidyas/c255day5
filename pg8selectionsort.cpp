#include <iostream>
using namespace std;
int main() 
{
	int n, i, j, min,ind,temp;
	cout << "\n Enter the val of n = ";
	cin >> n;
	int a[n];
	cout << "\n Enter array ele = \n";
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	//selection
	for(i=0;i<n-1;i++)
	{
		min = a[i];
		ind = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min =a[j];
				ind = j;
			}
		}
		temp = a[i];
		a[i] = a[ind];
		a[ind]= temp;
	}	
	cout<<"\n SELECETION SORT \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
