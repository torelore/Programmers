#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    int Max = -1000000;
    int Min = 1000000;
    
    int in = 0;
    
    while(cin >> in){
        Max = Max < in ? in : Max;
        Min = Min > in ? in : Min;
    }
    
    std::cout << Min << " " << Max;
    
    
    
    return 0;
}