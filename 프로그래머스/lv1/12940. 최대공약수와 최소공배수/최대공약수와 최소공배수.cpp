#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    int min = std::min(n, m);
    int max = std::max(n, m);
    
    for(int i = min; i >= 1; i--){
        if(m % i == 0 && n % i == 0){
            answer.push_back(i);
            break;
        }
    }
    
    for(int i = max;; i++){
        if(i % m == 0 && i % n == 0){
            answer.push_back(i);
            break;
        }
    }
    
    return answer;
}