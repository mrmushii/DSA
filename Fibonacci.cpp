#include <iostream>

using namespace std;
int fibonacci ( int n);
int main(){
  int n,fibo;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=0;i<=n;i++){
    fibo = fibonacci(i);
    cout<< fibo <<" ";
  }
  cout<<endl;
  return 0;
}
int fibonacci(int n){
  if(n==0 || n== 1)
    return n;
  else
    return fibonacci(n-2) + fibonacci(n-1);
}