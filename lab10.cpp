#include <iostream>
#include <string>
using namespace std;

#define n 4

int main()
{
  string** vec2 = new string*[n];
  int i = 0, j = 0;
  for ( i; i < n; i++){
    vec2[i] = new string[n];
    for ( j; j < n; j++){
      getline(cin, vec2[i][j]);
    }
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << vec2[i][j] << ' ';
    }
    cout << endl;
  }

  for (int k = 0; k < n; k++)
    delete[] vec2[i];

  delete[] vec2;

  return 0;
}
