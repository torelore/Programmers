#include <string>
#include <vector>

using namespace std;

string Lower(string str){
    string lower;
    
    for(int i = 0; i < str.size(); i++){
        lower += tolower(str[i]);
    }
    
    return lower;
}

int solution(string myString, string pat) {
    myString = Lower(myString);
    pat = Lower(pat);
    
    
    if(myString.find(pat) == string::npos){
        return 0;
    }
    
    return 1;
}