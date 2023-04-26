#include <string>
#include <vector>

using namespace std;

int solution(int n) {   

	int PrevNum = 0;
	int NextNum = 1;

	int FNum = 0;

	for (int i = 0; i < n - 1; i++) {
		PrevNum %= 1234567;
		NextNum %= 1234567;

		FNum = PrevNum + NextNum;

		PrevNum = NextNum;
		NextNum = FNum;
	}


	return FNum % 1234567;
}