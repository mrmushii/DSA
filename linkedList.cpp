#include<iostream>
using namespace std;

struct linkedList
{
  int data;
  linkedList* next;
};

void inserts(linkedList* &head,int val){
  linkedList* node = new linkedList();
  node->data = val;
  node->next = NULL;
  if (head == NULL)
  {
    head = node;
    return;
  }
  
  linkedList* temp = head;
  while (temp->next!=NULL)
  {
    temp = temp->next;
  }
  temp->next = node;
}

void display(linkedList* head){
  while (head!=NULL)
  {
    cout<<head->data<<" ->";
    head = head->next;
  }
  cout<<"NULL"<<endl;
}

int main(){
  linkedList* head = NULL;
  inserts(head,5);
  inserts(head,10);
  inserts(head,15);
  display(head);
  
}
