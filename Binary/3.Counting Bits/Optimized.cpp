#include <iostream>
#include <vector>
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                v[i] = v[i / 2] + 1;
            else
                v[i] = v[i / 2];
            //v[i]=v[i/2]+(i%2);
        }
        return v;
    }
};
using namespace std;
int main()
{

    return 0;
}