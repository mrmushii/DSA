#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1000001

char prime[MAX];

void primeGenerator(int n){
  int x = sqrt(n);
  prime[0]= prime[1] = 1;

  for(int i = 2;i<=x;i++){
    if(prime[i]==0){
      for (int j = i+i; j <=n; j+=i)
      {
        prime[j]=1;
      }
      
    }
  }
}

int main(){
  int n;
  cout<<"What should be the number"<<endl;
  cin>>n;
  primeGenerator(n);

  cout<<"Prime number upto "<<n << "are: ";
  for(int i=2;i<=n;i++){
    if(prime[i]==0){
      cout<<i<<" ";
    }
  }
  cout<<endl;

  return 0;
}

