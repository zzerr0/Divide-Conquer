#include<iostream>
using namespace std;
int main()
{
  int a[]={1, 12, 15, 26, 38}; 
  int b[]={2, 13, 17, 30, 45};
  int n=sizeof(a)/sizeof(a[0]);
  int N=n*2;
  int answer[N];
  int i=0; //for array 1
  int j=0; //for array 2
  int k=0; //for array 3


//two varibles for keeping the pointer if values in
//in two arryay while comparing them
 while (i < n && j < n)
    {
        if (a[i] < b[j])
        {
            answer[k] = a[i];
            i++;
        }
        else
        {
            answer[k] = b[j];
            j++;
        }
        k++;
    }
   
 
//these loops are usee to copy the left over elements
//into the array 
while (i < n)
    {
        answer[k] = a[i];
        i++;
        k++;
    }
while (j < n)
    {
        answer[k] = b[j];
        j++;
        k++;
    }
  
   
  
  for(int l=0;l<N;l++)
  {
    cout<<answer[l]<<" ";
  }
  cout<<endl;
  
  /*
    now find median of array 
    Median of a sorted array of size n is defined 
    as the middle element when n is odd and average 
    of middle two elements when n is even.
  */
    int median;
  int sofa = sizeof(answer)/sizeof(answer[0]);
  if(sofa%2==0)
  {
    median= (answer[sofa/2]+answer[(sofa/2)-1])/2;
  }
  else 
  median=answer[sofa/2];
  
  cout<<median<<" = median "<<endl;
  return 0;
}
