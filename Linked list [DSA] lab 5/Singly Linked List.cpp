#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node*next;

    Node(int k){
    val= k;
    next=nullptr;
    }
};
class List{
public:
    Node *start=nullptr;

    void ins(int k){
      Node*n=new Node(k);
      if(start==nullptr){
        start=n;
      }
      else{
        Node*p=start;
        while(p->next!=nullptr){
            p=p->next;
        }
        p->next=n;
      }
    }
 void insLast(int k){
   Node*n=new Node(k);
 if (start==nullptr){
    start=n;
 }
 else{
    n->next=start;
    start=n;
 }
 }
  void  traverse(){
  Node*p=start;
  while(p!=nullptr){
    cout<<p->val<<"\t";
    p=p->next;

  }
  cout<<endl;
  }
};
int main (){
  List t;
  t.ins(5);
  t.ins(10);
  t.ins(3);
  t.ins(15);
  t.traverse();
  t.insLast(9);
  t.traverse();
return 0;
}
