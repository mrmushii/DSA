#include <iostream>

using namespace std;

int main(){
  int a[10]={2,1,24,32,12,52,14,22,10,5}, n=10,temp,ptr;

  for (int k = 1; k < n; k++)
  {
    temp = a[k];
    ptr = k-1;
    while (ptr >= 0 && temp < a[ptr])

    {
      a[ptr+1]=a[ptr];
      ptr-=1;
    }
    a[ptr+1] = temp;
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;


}