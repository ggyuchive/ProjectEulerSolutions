#include <bits/stdc++.h>
using namespace std;

string getLine(int problemNumber, bool add_line, int line_count = 1)
{
    string route = "./input/input_" + to_string(problemNumber) + ".txt";
    ifstream file(route);
    string s;
    while (line_count--) {
        string t;
        getline(file, t);
        s += t;
        if (add_line)
            s.push_back('\n');
    }
    return s;
}
