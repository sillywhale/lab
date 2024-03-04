#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    ifstream in("f1.txt");
    ofstream out("f2.txt");
    string line, firstWord, word;

    while (getline(in, line))
    {
        stringstream ss(line);
        bool hasEquals = false;
        ss >> firstWord;
        while (ss >> word)
        {
            if (word==firstWord)
            {
                hasEquals=true;
                break;
            }
        }
        if (hasEquals) 
            out << line << endl;
    }

    string consonants = "bcdfghjklmnpqrstvwxz";
    int consCount=0;
    for(auto c : line)
        for( auto c2 : consonants)
            if (c == c2)
                consCount++;

    cout << consCount;
    in.close();
    out.close();
    return 0;
}
