#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;

void swap(string* a, size_t n){
  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n - 1 -i; j++){
      if (size(a[j]) > size(a[j+1])){
        string temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}
template <typename T>
void print(T* arr, size_t N){
  for (int i = 0; i < N; i++){
    cout << arr[i] << ' ';
  }
}
 
int main()
{
  string words;
  getline(cin, words);
  string temp;
  stringstream ss;
  ss << words;

  int count = 0;
  for (const auto& x : words){
    if (x == ' ') count++; 
  }
  count++;

  string* arr = new string[count];

  int  i = 0;
  while(ss >> temp)
  {
    if(isdigit(temp[0]))
    {
      arr[i] = temp;
      i++;
    }
  }
  swap(arr, i);
  print(arr, i);

  delete[] arr;
  return 0;
}