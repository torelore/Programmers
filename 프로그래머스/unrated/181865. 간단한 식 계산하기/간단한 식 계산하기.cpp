#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    vector<string> vecBi;
    
    string str = "";
    
    for(int i = 0; i < binomial.size(); i++){
        str += binomial[i];
        
        if(binomial[i] == ' '){
            vecBi.push_back(str);
            str = "";
        }
    }
    
    vecBi.push_back(str);
    
    int num1 = stoi(vecBi[0]);
    int num2 = stoi(vecBi[2]);
    
    if (vecBi[1][0] == '+') {
        answer = num1 + num2;
    }
    else if(vecBi[1][0] == '-'){
        answer = num1 - num2;
    }
    else{
        answer = num1 * num2;
    }
    
    return answer;
}