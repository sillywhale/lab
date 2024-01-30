#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int n = 15;
    int a[n];

    int s, max, num;

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 200 - 100;
        cout << a[i]<< ' ';
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max){
            max = a[i];
            s = 1;
            num  = i ;
        }
        else if (a[i] == max) {
            ++s;
        }
    }
    cout << endl;
    cout << max << ' ' << num + 1 << ' ' << s;

    return 0;
}




