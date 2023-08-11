#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string str;
    
    if(s.size() % 2 == 0){
        str += s[s.size() / 2 - 1];
        str += s[s.size() / 2];
    }
    else{
        str += s[s.size() / 2];
    }
    
    return str;
}