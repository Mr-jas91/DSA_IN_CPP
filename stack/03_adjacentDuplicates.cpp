#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st1;
    string s = "abbaca";
    for (char c : s)
    {
        if (!st1.empty() && st1.top() == c)
        {
            st1.pop();
        }
        else
        {
            st1.push(c);
        }
    }
    stack<char> st2;
    string temp;
    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    while (!st2.empty())
    {
        temp += st2.top();
        st2.pop();
    }
    cout << "output is " << temp << endl;
    return 0;
}