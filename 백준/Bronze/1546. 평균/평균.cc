#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int T;
    
    cin >> T;
    
    vector<int> myVec;
    
    int in = 0;
    while(cin >> in){
        myVec.push_back(in);
    }
    
    int Max = *max_element(myVec.begin(), myVec.end());
    
    double Sum = 0;
    
    for(int num : myVec){
        Sum += ((double) num / (double) Max * 100);
    }
    
    cout << fixed << setprecision(10) << Sum / (double) myVec.size();
    
    

    return 0;
}