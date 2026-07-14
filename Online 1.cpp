#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>arr,int k)
{
    int mini,pos;
    for(int i=0;i<k-1;i++)
    {
      mini=arr[i];
      pos=i;
      for(int j=i+1;j<k;j++)
      {
          if(arr[j]<mini)
          {
              mini=arr[j];
              pos=j;
          }
      }
      swap(arr[pos],arr[i]);
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){

    vector<int>arr;
    int n,x;
    cout<<"Enter the size of the array ";
    cin>>n;
    cout<<"Enter the array ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    SelectionSort(arr,n);

}
