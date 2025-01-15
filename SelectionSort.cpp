#include<iostream>
using namespace std;

int k[11]= {2,1,24,32,12,52,14,22,10,5,8},n=10,m,loc;

void min(int x);

int main(){
  for (int i = 0; i <= n; i++)
  {
    min(i);
    int temp = k[i];
    k[i] = k[loc];
    k[loc] = temp;
  }
  for (int i = 0; i <= n; i++)
  {
    cout<<k[i]<<" ";
  }
  cout<<endl;
  

}

void min(int x){
  m = k[x];
  loc = x;
  for (int j = x+1; j <=n; j++)
  {
    if (m>k[j])
    {
      m = k[j];
      loc = j;
    }
    
  }
  

}