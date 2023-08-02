#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int factor = 2;
    
    while(factor <= n){
        if(n % factor == 0){
            if(find(answer.begin(), answer.end(), factor) == answer.end())
                answer.push_back(factor);
            
            n /= factor;
        }
        else{
            factor++;
        }
    }
    
    
    return answer;
}