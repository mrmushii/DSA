#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &A,int st, int end){
  int index = -1, pivot = A[end];
  for (int j = st; j < end; j++)
  {
    if(A[j]<=pivot){
      index++;
      swap(A[j],A[index]);
    }
  }
  index++;
  swap(A[end],A[index]);

  return index;
  
}

void quicksort(vector<int> &A,int st, int end){
  if(st<end){
   int pIndex = partition(A,st,  end);

   quicksort(A,st,pIndex-1);
   quicksort(A,pIndex+1,end);
  }
}

int main(){
vector<int> A ={1,5,3,2,4,9,7};
quicksort(A,0,A.size()-1);
for( int val : A){
  cout<<val<<" ";
}
cout<<endl;

}