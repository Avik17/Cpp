#include <iostream>
using namespace std;
int bintodec(int n)
{
    int result = 0, x = 1, y;
    while (n > 0)
    {
        y = n % 10;
        result += x * y;
        x *= 2;
        n /= 10;
        /* code */
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << "Decimal converion of given binary code : " << bintodec(n);

    return 0;
}
