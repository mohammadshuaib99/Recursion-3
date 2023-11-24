#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int>& v, int array[], int n, int idx) {
    if (idx == n) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude the current element
    subArray(v, array, n, idx + 1);

    // Include the current element
    v.push_back(array[idx]);
    subArray(v, array, n, idx + 1);

    // Backtrack: remove the last element to explore other possibilities
    v.pop_back();
}

int main() {
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(int);
    vector<int> v;
    subArray(v, array, size, 0);
    return 0;
}
