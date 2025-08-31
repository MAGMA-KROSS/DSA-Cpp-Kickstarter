#include <iostream>
#include <vector>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << "Enter size of the array" << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: " << flush;
        cin >> arr[i];
    }
    int max = 0;
    for (int x : arr)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << max;
    return 0;
}