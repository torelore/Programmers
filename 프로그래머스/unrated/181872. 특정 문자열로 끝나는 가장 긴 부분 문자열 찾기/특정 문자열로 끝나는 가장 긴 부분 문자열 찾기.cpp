#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    size_t pos = myString.find_last_of(pat);
    
    
    return myString.substr(0, pos + 1);
}