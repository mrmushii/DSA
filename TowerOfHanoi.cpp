#include <iostream>
using namespace std;
int i =0;
void hanoi(int n, char a, char b,char c){
  if(n!=0){
    hanoi(n-1,a,c,b);
    cout<<"remove disk "<<n<<" from "<<a<<" to "<<c<<" "<<endl;
    hanoi(n-1,b,a,c);
    i+=1;
  }
}

int main(){
  int n;
  char a,b,c;
  a='A',b='B',c='C';
  cout<<"Enter the number of disk: ";
  cin>>n;
  hanoi(n,a,b,c);
  cout<<endl;
  cout<<"Number of MOVE needed: "<<i<<endl;

}