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
<<<<<<< HEAD
  T* tmpArr = new T[n];
  for (int i = 0; i < k; i++)
    tmpArr[i] = arr[i];
  for ( int  i = k; k < n-1; i++)
    tmpArr[i] = arr[i+1];
=======
#ifdef false
  T* tmpArr = new T[n-1];
  for (int i = 0; i < n; i++)
    if ( i == k)
      tmpArr[i] = arr[i+1];
    else
      tmpArr[i] = arr[i];
  n--;
>>>>>>> 8a5de902b05a70d3d65db233c510c27f563bef0b
  delete[] arr;
  n--;
  arr = tmpArr;
<<<<<<< HEAD
=======
  delete[] tmpArr;
#endif
  for (int i = k; i < n; i++)
    arr[i-1] = arr[i];
  n--;
>>>>>>> 8a5de902b05a70d3d65db233c510c27f563bef0b
  return arr;
}

int main()
{
  int n = 5;
  string* myList = create(n);
  int tmp = 0;
  for (int i = 0; i < n; i++){
<<<<<<< HEAD
    if ( (myList[i].front() == 'A' || myList[i].front() == 'a') 
    && (myList[i].back() == 'a')){
      tmp = i;
=======
    if ( myList[i].front() == 'A' && myList[i].back() == 'a'){
      for (int j = i; j < n; j++)
      myList[j-1] = myList[j];
      n--;
>>>>>>> 8a5de902b05a70d3d65db233c510c27f563bef0b
    }

  }
<<<<<<< HEAD
  myList = del(myList, n, tmp);
=======
  cout << endl;
>>>>>>> 8a5de902b05a70d3d65db233c510c27f563bef0b
  print(myList, n);

  delete[] myList;

  return 0;
}
