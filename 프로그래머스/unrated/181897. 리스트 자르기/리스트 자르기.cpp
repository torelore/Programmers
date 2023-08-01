#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    
    int a = 0;
    int b = 0;
    int c = 1;
    
    if(n == 1){
        a = 0;
        b = slicer[1];
    }
    else if(n == 2){
        a = slicer[0];
        b = num_list.size() - 1;
    }
    else if(n == 3){
        a = slicer[0];
        b = slicer[1];
    }
    else {
        a = slicer[0];
        b = slicer[1];
        c = slicer[2];
    }
    
    for(int i = a; i <= b; i += c){
        answer.push_back(num_list[i]);
    }
    
    
    return answer;
}