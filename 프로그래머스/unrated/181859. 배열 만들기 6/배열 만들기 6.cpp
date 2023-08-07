#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for (int num : arr) {
        if (answer.empty()) {
            answer.push_back(num);
        }
        else {
            if (answer.back() == num) {
                answer.pop_back();
            }
            else {
                answer.push_back(num);
            }
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }

    
    
    return answer;
}