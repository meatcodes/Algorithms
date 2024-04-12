#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n, int *arr)
{
    for(int i=0; i<n; i++)
    {
        int min_value=arr[i];
        int min_index;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<min_value) 
            {
                min_value=arr[j];
                min_index=j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    selection_sort(n, arr);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}
