#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    int width = 0;
    int height = 0;
    
    int x = dots[0][0];
    int y = dots[0][1];
    
    for(vector<int> dot : dots){
        if(x != dot[0]){
            width = abs(x - dot[0]);
        }
        
        if(y != dot[1]){
            height = abs(y - dot[1]);
        }
    }
    
    
    return width * height;
}