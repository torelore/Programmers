#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;

    map<int, int> rankMap;

    int idx = 0;

    for (int score : rank) {
        if (attendance[idx])
            rankMap.insert(make_pair(score, idx));


        idx++;
    }

    auto iter = rankMap.begin();

    return 10000 * iter++->second + 100 * iter++->second + iter->second;
}