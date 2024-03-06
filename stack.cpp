#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

class node{

public:
  node* next;
  int val;
  node(int data, node* n){
    val = data;
    next = n;
  }
};

class Stack{
public:
  node* head;
  int size;

  Stack(){
    head == nullptr;
    size = 0;
  }

  bool empty(){
    return head == nullptr;
  }

  void push(int data){
    head = new node(data, head);
    size++;
  }

  void pop(){
    if ( head == nullptr)
      cout << "Stack is empty" << endl;
    else{
      node* tmp = head;
      head = head->next;
      delete tmp;
    }
    size--;
  }

  int top(){
    return head->val;
  }

  void print(Stack tempStack){
    int tmp = size;
    if ( head == nullptr)
      cout << "Stack is empty";
    else{
      for ( int i = 0; i < tmp; i++){
        cout << top() << ' ';
        tempStack.push(top());
        pop();
      }
    }
  }

};

int main(){
  srand(time(NULL));
  Stack myStack, tempStack;
  int stackSize;
  cout << "Input stack size \n";
  cin >> stackSize;
  for (int i = 0; i < stackSize; i++){
    int tmp = rand() % 10;
    cout << tmp << ' ';
    myStack.push(tmp);
  }
  myStack.pop();
  cout << endl;
  myStack.print(tempStack);

  return 0;
}
