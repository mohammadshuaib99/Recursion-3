#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int array[], int n, int idx, vector<int>& ans, int k)
{
    if (idx == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
     if(ans.size()+(n-idx)<k) return;
    // Exclude the current element
    printSubsequence(array, n, idx + 1, ans, k);

    // Include the current element
    ans.push_back(array[idx]);
    printSubsequence(array, n, idx + 1, ans, k);

    // Backtrack: remove the last element to explore other possibilities
    ans.pop_back();
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    vector<int> v;
    int k = 3;
    printSubsequence(array, size, 0, v, k);
    return 0;
}
