#include <string>
#include <vector>

using namespace std;


int answer = 0;

void dfs(vector<int> numbers, int idx, int target, int sum){
    if(idx == numbers.size()){
        if(target == sum)
            answer++;
        
        return;
    }
    
    dfs(numbers, idx +1, target, sum + numbers[idx]);
    dfs(numbers, idx +1, target, sum - numbers[idx]);
}


int solution(vector<int> numbers, int target) {    
    dfs(numbers, 0, target, 0);
    
    return answer;
}