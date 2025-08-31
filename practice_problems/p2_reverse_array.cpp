#include <iostream>
#include <vector>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int len = 0;
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> temp = arr;
    for (int x : arr)
    {
        len++;
    }
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        arr[i] = temp[j];
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}