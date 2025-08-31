#include <iostream>
using namespace std;
int main()
{
    int x = 121;
    int sep = x;
    int temp = 0;
    while (x > 0)
    {
        temp = temp * 10 + (x % 10);
        x = (x - (x % 10)) / 10;
    }
    if (sep == temp)
    {
        cout << "true";
    }
    else
    {
        cout << "false"<< x << temp;
    }

    return 0;
}