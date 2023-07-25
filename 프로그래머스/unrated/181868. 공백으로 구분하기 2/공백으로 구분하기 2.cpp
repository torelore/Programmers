#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string str;
    
    stringstream stream;
    
    stream.str(my_string);
    
    while(stream >> str){
        answer.push_back(str);
    }
    
    
    return answer;
}