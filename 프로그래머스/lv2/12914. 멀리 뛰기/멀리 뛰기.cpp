#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long* memo = new long[2001];
    
    for(int i = 0; i < n + 1; i++){
        
        memo[1] = 1; 
        memo[2] = 2;
        
        for(int i = 3; i <= n; i++){
            memo[i] = (memo[i-1] + memo[i-2]) %1234567;
        }
    }
    
    return memo[n];
}
