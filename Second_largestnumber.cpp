#include<iostream>
using namespace std;
int main()
{
    int i,j,n,arr[100],temp=0;
    cout<<"Number of array element"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorting descending  order"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            continue;
         cout<<"Second largest number is= "<<arr[i+1];
         break;
    }

    return 0;
}

