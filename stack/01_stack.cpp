#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s = "jasvant";
    // output is cba
    for (char c : s)
    {
        st.push(c);
    }
    // length of the string
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        s[i] = st.top();
        st.pop();
    }
    cout << "The reverse of the given string " << s << endl;
    return 0;
}