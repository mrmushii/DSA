#include <iostream>
#include<string.h>
#define max 50
int s[max];
int top = -1;
using namespace std;

void push(int elem){
  s[++top]=elem;
}

int pop(){
  return s[top--];
}

int main(){
  char postfx[50],ch;
  int opt1,opt2,i = 0,j =0;
  fgets(postfx,sizeof(postfx),stdin);
  size_t len = strlen(postfx);
    if (len > 0 && postfx[len - 1] == '\n') {
        postfx[len - 1] = '\0';
    }

  while ((ch = postfx[i++]) != '\0')
  {
    if(isdigit(ch)){
      push(ch -'0');
    }
    else{
      opt2 = pop();
      opt1 = pop();
      switch (ch)
      {
      case '+':
        push(opt1 + opt2);
        break;
      
      case '-':
        push(opt1 - opt2);
        break;
      
      case '*':
        push(opt1 * opt2);
        break;
      
      case '/':
        push(opt1 / opt2);
        break;
      }

    }
    
    for ( j = 0; j <= top; j++)
    {
      cout<<s[j];
    }
    
  }
  
  cout<<"given postfix: "<<postfx<<endl;
  cout<<"evaluated ans: "<<s[top]<<endl;



}