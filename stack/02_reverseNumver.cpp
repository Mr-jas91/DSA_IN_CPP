#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n = 347;
    while (n != 0)
    {
        int digit = n % 10;
        st.push(digit);
        n /= 10;
    }
    int reverse = 0;
    int multiplier = 1;
    while (!st.empty())
    {
        int digit = st.top();
        st.pop();
        reverse += (digit * multiplier);
        multiplier *= 10;
    }
    cout << "the revers number is " << reverse << endl;
    return 0;
}
