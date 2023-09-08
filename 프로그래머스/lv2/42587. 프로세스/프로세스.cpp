#include <vector>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> priorities, int location) {

    vector<int> sortedVec = priorities;
    sort(sortedVec.begin(), sortedVec.end());
    reverse(sortedVec.begin(), sortedVec.end());

    queue<int> sortedQueue;

    for (const int& num : sortedVec)
        sortedQueue.push(num);

    map<int, int> prMap;

    int prNum = 1;

    while (!sortedQueue.empty()) {
        for (int i = 0; i < priorities.size(); i++) {
            if (sortedQueue.empty())
                break;


            if (sortedQueue.front() == priorities[i]) {
                prMap[i] = prNum++;
                sortedQueue.pop();
            }
        }
    }

    return prMap[location];
}