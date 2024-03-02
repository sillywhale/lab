#include <iostream>
#include <string>
using namespace std;

void print(string* arr,const int& n){
  for (int i = 0;i < n; i++)
    cout << arr[i] << '\n';
}

string* create(const int& n){
  string* vec2 = new string[n];
  int i = 0, j = 0;
  for ( i; i < n; i++){
      getline(cin, vec2[i]);
  }

  return vec2;
  delete[] vec2;
}

template <typename T>
T* del(T* arr, int& n, const int& k ){
  T* tmpArr = new T[n];
  for (int i = 0; i < k; i++)
    tmpArr[i] = arr[i];
  for ( int  i = k; k < n-1; i++)
    tmpArr[i] = arr[i+1];
  delete[] arr;
  n--;
  arr = tmpArr;
  return arr;
}

int main()
{
  int n = 4;
  string* myList = create(n);
  int tmp = 0;
  for (int i = 0; i < n; i++){
    if ( (myList[i].front() == 'A' || myList[i].front() == 'a') 
    && (myList[i].back() == 'a')){
      tmp = i;
    }

  }
  myList = del(myList, n, tmp);
  print(myList, n);

  delete[] myList;

  return 0;
}
