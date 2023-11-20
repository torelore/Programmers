#include <iostream>
#include <iomanip>
#include <unordered_map>

using namespace std;

unordered_map<string, float> gradeMap 
    = {{"A+", 4.5f}, {"A0", 4.f}, {"B+", 3.5f}, {"B0", 3.f}, 
    {"C+", 2.5f}, {"C0", 2.f}, {"D+", 1.5f}, {"D0", 1.f}, {"F", 0.f}};

int main(){
    float sum = 0;
    float scoreSum = 0;
    
    string sub;
    float score;
    string grade;
    
    while(cin >> sub >> score >> grade){
        if(grade[0] != 'P'){
            sum += score * gradeMap[grade];
            scoreSum += score;
        }
    }
    
    cout << fixed << setprecision(5) << (double)sum / (double) scoreSum;
    
    
    return 0;
}