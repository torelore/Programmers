#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    string str = to_string(n);
    
    sort(str.begin(), str.end(), greater<int>());
    
    for(const char& cch : str){
        answer *= 10l;
        answer += cch - '0';
    }
    
    return answer;
}