#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    
    cin >> N >> M;
    
    vector<int> myVec;
    
    for(int i = 1; i <= N; i++){
        myVec.push_back(i);
    }
    
    int a, b;
    
    while(cin >> a >> b){
        reverse(myVec.begin() + a - 1, myVec.begin() + b);
    }
    
    for(int num : myVec){
        std::cout << num << " ";
    }
    
    return 0;
}