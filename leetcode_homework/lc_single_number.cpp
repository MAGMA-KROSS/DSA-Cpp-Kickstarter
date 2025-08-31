#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {2,1,4,1,2};
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i!=j && nums[i]==nums[j])
            {
                temp++;
            }
        }
        if (temp==0)
        {
           cout << nums[i];
        }
        
    }
}