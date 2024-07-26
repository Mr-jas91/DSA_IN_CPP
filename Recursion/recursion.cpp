#include <iostream>
using namespace std;
void printFac(int n, int result)
{
    // base condition
    if (n == 1)
    {
        cout << result << endl;
        return;
    }
    // task
    result = result * n;
    
    // recursion

    printFac(n - 1, result);
}
int main()
{
    int n = 5, fact = 1;
    printFac(n, fact);
    return 0;
}