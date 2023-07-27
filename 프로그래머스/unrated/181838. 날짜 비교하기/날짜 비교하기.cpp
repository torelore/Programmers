#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    for(int i = 0; i < date1.size(); i++){
        if(date1[i] > date2[i]){
            return 0;
        }
        
        if(date1[i] == date2[i]){
            continue;
        }
        
        if(date1[i] < date2[i]){
            return 1;
        }
    }
    
    return 0;
}