#include<iostream>
using namespace std;
#define max 5
int q[max];

void Qinsertion(int item);
void Qdelete();
int f = -1, r=-1;
int main(){
  
  while (1)
  {
    int choice,number;
    
    cout<<"1.Insert"<<endl;
    cout<<"2.Delete"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    switch (choice)
    {   
    case 1:
      cout<<"Enter Item: ";
      cin>>number;
      Qinsertion(number);
      break;
    
    case 2:
      
      Qdelete();
      break;
    
    case 3:
      return 0;
    
    
    }
  }
  
}

void Qinsertion(int item){
  if((f == r+1) || (f==0 && r== max-1)){
    cout<<"Overflow"<<endl;
  }
  else
  {
    if (f==-1)
    {
      f=r=0;
    }else
    {
      r = (r+1) %max;
      q[r]= item;
    }
    cout<<"Inserted element is: "<<item<<endl;
    cout<<"Front: "<<f<<" "<<"Rear: "<<r<<endl;
    
    
  }
  
}

void Qdelete(){
  int elem;
  if (f==-1)
  {
    cout<<"Underflow"<<endl;
  }
  else
  {
    elem = q[f];
    if (f==r)
    {
      f=r=-1;
    }else
    {
      f = (f+1) % max;
    }
    cout<<"Deleted element is: "<<elem<<endl;
    cout<<"Front: "<<f<<" "<<"Rear: "<<r<<endl;
    
    
  }
  
  
}