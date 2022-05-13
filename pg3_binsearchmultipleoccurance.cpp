#include <iostream>
using namespace std;
int main()
{
	int n,i,key;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements in order =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	//bubble-sort elements;
	bool rearrange = true;
	int temp;
	while (rearrange){
		rearrange = false;
		for (i=0; i<n-1; i++){
			if (a[i] > a[i + 1]){
				rearrange = true;
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	
	cout<<"\n Put in a key = \n";
	cin>>key;
	
	int left=0, right=n-1, mid;
	while (left < right){
		mid = left + (right - left)/2;
		if (a[mid] < key) left = mid + 1;
		else if (a[mid] > key) right = mid - 1;
		else {cout<<"\n The search key has been found at sorted index(s): "; break;}
	}
	if (a[mid] != key){cout<<"\n Key not found in array \n"; return 0;}
	
	left = mid;
	while (a[left] == key){left--;}
	right = mid;
	while (a[right] == key){right++;}
	
	for(i = left + 1; i < right; i++){cout<<i<<" ";}
}

