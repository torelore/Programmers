#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int Answer = 0;

    sort(people.begin(), people.end(), greater<int>());

    int idx = 0;

    while (true) {
        int sum = people[idx] + people.back();

        if(sum <= limit){
            people.pop_back();
        }
        
        Answer++;
        idx++;
        
        if(idx >= people.size())
            break;
    }
    
    return Answer;
}