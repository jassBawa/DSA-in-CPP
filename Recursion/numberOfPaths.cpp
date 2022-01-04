#include <iostream>
using namespace std;

int numberOfPaths(int m, int n)
{
    if (m == 0 && n == 0)
        return 0;
    if (m == 1 || n == 1)
        return 1;
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
}

int main()
{
    cout << numberOfPaths(3, 3) << endl;
    return 0;
}