//RANDOMIZED BINARY SEARCH 
/*
  
  We are given a sorted array A[] of n elements. We need to find if x is present in A or not.In binary search we always used middle element, here we will randomly pick one element in given range.

In Binary Search we had

middle = (start + end)/2
In Randomized binary search we do following
Generate a random number t
Since range of number in which we want a random
number is [start, end]
Hence we do, t = t % (end-start+1)
Then, t = start + t;
Hence t is a random number between start and end
  
*/
  
#include<iostream>
#include<ctime>
using namespace std; 
int getrand(int x /* starting */, int y /* end */)
{
  srand(time(NULL));
  return (x+rand()%(y-0+1));
  // if l=0 & r= 5 therefore y-0+x will always give 
  // y+1 hence results of this function will be
  // from 0 to < y+1
}

int rbinary(int arr[], int l, int r, int x)
{
  if(r>=l)
  {
    int mid = getrand(l, r);
  
  if(arr[mid]==x)
     return mid;
     
   if(arr[mid]>x)
   return rbinary(arr, l, mid-1, x);
   
   else
  
   return rbinary(arr, mid+1, r, x);
  }
  else
  return -1;
}
int main()
{
  int arr[]={10, 20, 30, 40, 50, 60};
  int l=0;
  int n=sizeof(arr)/sizeof(arr[0]);
  int r=n-1;
  int x=40;
  int result = rbinary(arr, l, r, x);
  if(result==-1)
    cout<<"\nElement not found "<<endl;
  else
  cout<<"\nElement found at location "<<result<<endl;
  return 0;
}
