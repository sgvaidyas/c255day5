#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
void check_next(int a[],int mid ,int it,vector<int> &Keys) {
    if (a[mid] == a[mid + it]) {
        Keys.push_back(mid+it);
        check_next(a, mid + it, it ,Keys);
    }
}
int main()
{
    int n,i,j,temp;
    vector<int> Keys;
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
            Keys.push_back(mid);
            check_next(a,mid,1,Keys);
            check_next(a,mid,-1,Keys);
            sort(Keys.begin(),Keys.end());
            for (auto normalIterator = Keys.begin(); normalIterator != Keys.end(); ++normalIterator) {
                cout<<"\n Key found at "<<*normalIterator<<endl;

            }
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
