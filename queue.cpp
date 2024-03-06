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

struct Queue{
  node *head, *tail;
  int size;

  Queue(){
    head = nullptr;
    tail = nullptr;
    size = 0;
  }
  bool empty(){
    return size == 0;
  }

  void pushBack(string data){
    node* n = new node(data, nullptr);
    if ( head == nullptr){
      tail = head = new node(data, nullptr);
    }
    else{
      tail->next = n;
      tail = n;
    }
    size++;
  }

  void popFront(){
    if ( head == nullptr){
      cout << "Queue is empty\n";
    }
    else{
      node* tmp = head;
      head = head->next;
      delete tmp;
    }
    size--;
  }

  void erase(node* elem){
    node* tmp = elem->next;
    elem->next = tmp->next;
    delete tmp;
    if ( tail == tmp)
      tail = elem;
    size--;
  }
  node* getNode(int index){
    node* n = head;
    for (int i = 0; i < index ; i++){
      n = n->next;
    }
    return n;
  }
  
  void print(){
    node* elem = head;
    while ( elem != nullptr){
      cout << elem->val << ' ';
      elem = elem->next;
    }
    cout << endl;
  }

};

int main()
{
  Queue q;
  q.pushBack("Hello");
  q.pushBack("_");
  q.pushBack("world!");
  q.print();
  q.popFront();
  q.pushBack("next");
  q.popFront();
  q.print();

  return 0;
}
