#include <iostream>
#include <vector>
using namespace std;

int maxHeight = 0;

void findMaxHeight(vector<int>& rods, size_t index, int sum1, int sum2) {
    if (index == rods.size()) {
        if (sum1 == sum2) {
            maxHeight = max(maxHeight, sum1);
        }
        return;
    }
    findMaxHeight(rods, index + 1, sum1 + rods[index], sum2);
    findMaxHeight(rods, index + 1, sum1, sum2 + rods[index]);
    findMaxHeight(rods, index + 1, sum1, sum2);
}

int main() {
    int n;
    cin >> n;
    vector<int> rods(n);
    for (int i = 0; i < n; i++) cin >> rods[i];
    findMaxHeight(rods, 0, 0, 0);
    cout << maxHeight << endl;
    return 0;
}
