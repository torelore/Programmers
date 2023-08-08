#include <string>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string, string> mapDB;

    for (vector<string> vec : db) {
        mapDB.insert(make_pair(vec[0], vec[1]));
    }

    string pw = "";

    if (mapDB.find(id_pw[0]) != mapDB.end())
        pw = mapDB.find(id_pw[0])->second;
    else
        return "fail";

    if (strcmp(id_pw[1].c_str(), pw.c_str()) == 0)
        return "login";

    return "wrong pw";
}