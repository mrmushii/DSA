#include<iostream>
using namespace std;

int main(){
  int a[10] = {8,1,5,8,10,62,3,9,2,10},n=10;

  for (int i = 0; i <n-1 ; i++)
  {
    for(int j = 0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        // int temp = a[j];
        // a[j] = a[j+1];
        // a[j+1] = temp;
        swap(a[j],a[j+1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  


}