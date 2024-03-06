#include <iostream>
#include <string>

using namespace std;

struct node{
  string val;
  node* next;
  node* prev;
  
  node(string data, node* n, node* p){
    val = data;
    next = n;
    prev = p;
  }
};

class LinkList{
  node* head, *tail;
  int elems;
public:
   LinkList(){
     head = nullptr;
     tail = nullptr;
     elems = 0;
   }

   ~LinkList(){
     int i = 0;
     while(!empty()){
       erase(getNode(i));
       i++;
     }
   }
    int size(){
      return elems;
    }

    bool empty(){
      return elems == 0;
    }

    void push(string data){
      head = new node(data, head, nullptr);
      if ( tail == nullptr) 
        tail = head;
      elems++;
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

    void erase(node* elem){
      if (elem->prev == nullptr) {
        head = elem->next;
      } 
      else if (elem->next == nullptr) {
        tail = elem->prev;
      } 
      else {
        elem->prev->next = elem->next;
        elem->next->prev = elem->prev;
        delete elem;
      }
    }
    void printElem(int index){
      cout << getNode(index)->val;
    }
};

int main()
{
  LinkList myList;
  myList.push("Hello,");
  myList.push("world!");
  myList.push("new");
  myList.push("some");
  myList.push("another");
  myList.print();
  myList.erase(myList.getNode(0));
  myList.print();

  return 0;
}
