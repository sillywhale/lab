#include <iostream>
using namespace std;

struct node{
  char* data
  node* next;
  node* previous;

  node(char* v, node* next, node* prev){
    data = v;
    next = n;
    previous = prev;
  }
};

struct list{
  list(){
    head = nullptr;
    elems = 0;
  }

  ~list(){
    // TEXT
  }
  
  int size() {
    return elems;
  }

  bool empty(){
    return elems == 0;
  }

};

int main()
{
  list myList;
  return 0;
}
