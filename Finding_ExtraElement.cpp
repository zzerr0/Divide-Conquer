#include<iostream>
using namespace std;
int main()
{
  int arr0[]={3,5,7,9,11,13};
  int arr1[]={3,5,7,11,13};
  int n=sizeof(arr1)/sizeof(arr1[0]);
  int l=0;
  int h=n-1;
  int index=n;
  while(l<=h)
  {  
    int mid=(l+(h-l)/2);   
    if(arr0[mid]==arr1[mid])
    {
    cout<<mid<<endl;
    l=mid+1;
    }
    else
   {
    //if elements are not equal then snow the index;
    index=mid;
    h=mid-1;
   }
 }
  cout<<index;
  return 0;
  }
