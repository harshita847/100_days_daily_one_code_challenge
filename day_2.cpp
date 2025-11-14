#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// hacker rank question on array
int main()
{
/* Enter your code here. Read input from STDIN. Print output to STDOUT */

//  Print the N integers of the array in the reverse order, space-separated on a single line.
    int a[4] = {1, 4, 3, 2};
    for (int i = 3; 0 <= i; i--)
    {
        cout << a[i];
        cout << " ";
    }
    return 0;
}
