#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    vector<string> vecStr;

    stringstream ss;
    ss.str(polynomial);
    string str;

    while (ss >> str) {
        vecStr.push_back(str);
    }

    int numSum = 0;
    int xSum = 0;

    for (int i = 0; i < vecStr.size(); i++) {
        if (i % 2 == 0) {
            if (vecStr[i].find('x') == string::npos) {
                numSum += stoi(vecStr[i]);
            }
            else {
                string tempStr;

                for (int j = 0; j < vecStr[i].size(); j++) {
                    if (vecStr[i][j] == 'x') {
                        break;
                    }

                    tempStr += vecStr[i][j];
                }

                if (tempStr == "") {
                    tempStr = "1";
                }

                xSum += stoi(tempStr);
            }
        }
    }
    
    
    string xStr = to_string(xSum) + "x";
    
    if(xSum == 1){
        xStr = "x";
    }
    
    string numStr = to_string(numSum);

    if (xSum == 0 && numSum == 0) {
        return "";
    }

    if (xSum == 0) {
        return numStr;
    }

    if (numSum == 0) {
        
        return xStr;
    }

    return xStr + " + " + numStr;
}