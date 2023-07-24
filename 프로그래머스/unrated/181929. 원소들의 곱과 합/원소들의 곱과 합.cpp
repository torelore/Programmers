#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum = 0;
    int mult = 1;
    
    for(int num : num_list){
        sum += num;
        
        mult *= num;
    }
    
    sum = sum * sum;
    
    if(mult > sum){
        return 0;
    }
    
    return 1;
}