#include "../includes.h"

class Solution {
public:
    int wateringPlants(vector<int> &plants, int capacity) {
        int count = 0, maxCap = capacity;

        for (int i = 0; i != plants.size(); ++i) {
            if (capacity < plants[i]) {
                count += i * 2;
                capacity = maxCap;
            }

            if (capacity >= plants[i]) {
                ++count;
                capacity -= plants[i];
                continue;
            }
        }

        return count;
    }
};

int main() {
    Solution Solution;

    vector<int> plants = {2,2,3,3};
    int capacity = 5;

    cout << Solution.wateringPlants(plants, capacity);
}