#include <iostream>
#include <vector>
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> num = {3,2,4};
    int target = 6;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i; j < num.size(); j++)
        {
            if (num[i] + num[j] == target)
            {
                cout << "[" << i << "," << j << "]";
            }
        }
        
    }
    return 0;
}