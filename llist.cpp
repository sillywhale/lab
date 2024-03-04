#include <iostream>
#include <string>

using namespace std;

struct node{
  string val;
  node* next;
  
  node(string data, node* n){
    val = data;
    next = n;
  }
};

class LinkList{
  node* head;
  int elems;
public:
   LinkList(){
     head = nullptr;
     elems = 0;
   }

   ~LinkList(){
     while(!empty()){
       pop();
     }
   }
    int size(){
      return elems;
    }

    bool empty(){
      return elems == 0;
    }

    void push(string data){
      head = new node(data, head); 
      elems++;
    }

    void pop(){
      node* tmp = head->next;
      delete head;
      head = tmp;
      elems--;
    }

    void print(){
      for(node* n = head; n ; n = n->next){
        cout << n->val << ' ';
      }
      cout << endl;
    }

    string &operator [] (int index){
      return getNode(index)->val;
    }

    node* getNode(int index){
      node* n = head;
      for (int i = 0; i < index ; i++){
        n = n->next;
      }
      return n;
    }

    void insert(node* elem, string data){
      elem->next = new node(data, elem->next);
      elems++;
    }

    void eraseAfter(node* elem){
      node* tmp = elem->next;
      elem->next = tmp->next;
      delete tmp;
      elems--;
    }
};

int main()
{
  LinkList myList;
  myList.push("Hello");
  myList.push(" ");
  myList.push("world!");
  
  myList.print();

  myList.insert(myList.getNode(1), " new ");
  myList.eraseAfter(myList.getNode(2));
  myList.print();

  return 0;
}