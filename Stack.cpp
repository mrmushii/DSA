#include <iostream>

using namespace std;
void push(int x,int m,int top,int stack){
  if(top = m-1){
    cout<<"Overflow"<<endl;
    return;
  }
  top+=1;
  int stack[top] = x;
}

int main(){
  int top = 2;
  int m = 6;
  int stack[m] = {23,10,5};
  push(12,m,top,stack);
}