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
#ifdef false
  T* tmpArr = new T[n-1];
  for (int i = 0; i < n; i++)
    if ( i == k)
      tmpArr[i] = arr[i+1];
    else
      tmpArr[i] = arr[i];
  n--;
  delete[] arr;
  arr = tmpArr;
  delete[] tmpArr;
#endif
  for (int i = k; i < n; i++)
    arr[i-1] = arr[i];
  n--;
  return arr;
}

int main()
{
  int n = 5;
  string* myList = create(n);
  //print(myList, n);

  for (int i = 0; i < n; i++){
    if ( myList[i].front() == 'A' && myList[i].back() == 'a'){
      for (int j = i; j < n; j++)
      myList[j-1] = myList[j];
      n--;
    }
  }
  cout << endl;
  print(myList, n);

  delete[] myList;

  return 0;
}