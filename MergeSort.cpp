#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &A,int st,int end,int mid){
  vector<int> temp;
  int i = st;
  int j = mid+1;
  
  while (i<=mid && j<= end)
  {
    if(A[i]<A[j]){
      temp.push_back(A[i]);
      i++;
    }else{
      temp.push_back(A[j]);
      j++;
    }
  }
  while (i<=mid)
  {
    temp.push_back(A[i]);
      i++;
  }
  while (j<=end)
  {
    temp.push_back(A[j]);
      j++;
  }
  for (int index = 0; index < temp.size(); index++)
  {
    A[index+st] = temp[index];
  }
  
}

void mergeSort(vector<int> &A,int st,int end){
  
  if (st<end)
  {
    int mid = st + (end-st)/2;
    mergeSort(A,st,mid);
    mergeSort(A,mid+1,end);
    merge(A,st,end,mid);
  }
}

int main(){
vector<int> A = {55,33,15,110,3,11};
mergeSort(A,0,A.size()-1);
for(int val : A){
  cout<<val<<" ";
}
cout<<endl;
}




  