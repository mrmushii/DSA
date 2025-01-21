#include <iostream>
#define Max 5

using namespace std;
int stack[Max];


int push(int &top, int data);
int pop(int &top,int &data);

int main(){
  int data, option, reply;
  int top = -1;

  do
  {
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>option;
  switch (option){
    case 1:
    cout << "\nEnter a value: ";
    cin >> data;
    reply = push(top, data);
    if(reply ==-1){
      cout<<"Overflow"<<endl;
      break;
      
    }
    else{
      cout<<"Value successfully added to the stack"<<endl;
      break;
    }
    case 2:
    reply = pop(top, data);
    if(reply ==-1){
      cout<<"Underflow"<<endl;
      break;
    }
    else{
      cout<<"Value successfully poped from the stack"<<endl;
      break;
    }
    case 3:
      return 0;

  }
  } while (1);
  return 0;

}

int push (int &top, int data){
  if(top == Max-1){
    return -1;
  }
  else
  {
    top+=1;
    stack[top] = data;
    return 1;
  }
  
}

int pop(int &top, int &data ){
  if(top==-1){
    return -1;

  }
  else
  {
    data = stack[top];
    top-=1;
    return 1;
  }
  
}
