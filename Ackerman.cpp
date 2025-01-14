#include <iostream>

using namespace std;

int ackerman( int m, int n );

int main(){
  int m,n;
  cout<<"Enter Value of m: ";
  cin>>m;
  cout<<"Enter value of n: ";
  cin>>n;

  
  cout<<"Ackerman value of m & n is: "<<ackerman(m,n)<<endl;

}


int ackerman(int m, int n){
  if(m==0){
    return n+1;
  }
  else if(m!=0 && n==0){
    return ackerman(m-1,1);
  }
  else if(m!=0 && n!=0){
    return ackerman(m-1,ackerman(m,n-1));
  }

}