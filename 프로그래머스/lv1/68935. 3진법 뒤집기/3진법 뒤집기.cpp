#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string tStr;
    
    while(n > 0){
        tStr += to_string(n % 3);
        n /= 3;
    }
    
    for(int i = 0; i < tStr.size(); i++){
        answer += (tStr[i] - '0') * pow(3, tStr.size() - i - 1);
    }    
    
    return answer;
}