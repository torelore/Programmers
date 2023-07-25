#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    if(myString.size() < pat.size())
        return 0;
    
    string pat2 = "";
    
    for(int i = 0 ; i < pat.size(); i++){
        if(pat[i] == 'A'){
            pat[i] = 'B';
        }
        else {
            pat[i] = 'A';
        }
    }
    
    if(myString.find(pat) == string::npos)
        return 0;
    
    return 1;
}