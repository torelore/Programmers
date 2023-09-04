#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
	stack<char> st;

	for (const char& cch : s) {

		if (st.empty()) {
			st.push(cch);
		}
		else {
			if (st.top() == cch) {
				st.pop();
			}
			else {
				st.push(cch);
			}
		}
	}

	return st.empty() ? 1 : 0;
}