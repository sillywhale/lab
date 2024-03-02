#include <iostream>
#include <string>
using namespace std;

template <typename T>
void print(T* arr,const int& n){
  for (int i = 0; i < n; i++)
    cout << arr[i] << '\n';
}

string* create(const int& n){
  string* vec2 = new string[n];
  for ( int i = 0; i < n; i++){
      getline(cin, vec2[i]);
  }
  return vec2;
  delete[] vec2;
}

template <typename T>
void deletion(T* arr, int& n, int k){
    for (int  i = k; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
}

int main()
{
  int n {4};
  string* myList = create(n);
  int tmp = 0;
  for (int i = 0; i < n; i++){
    if ( (myList[i].front() == 'A' || myList[i].front() == 'a') 
    && (myList[i].back() == 'a')){
      deletion(myList, n, i);
    }
  }
  cout << endl;
  print(myList, n);
  delete[] myList;

  return 0;
}