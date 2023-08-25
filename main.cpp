#include<queue>
#include<cstdlib>
#include<ctime>
#include<map>
#include<iostream>
#include <string>

using namespace std;

void PicturePrint(string PictureName);

int main() {
	queue<string>TheSave;
	map<string, int>val;
	srand(time(NULL));
	string name[200] = { "" };
	string first = "pic_";
	string last = ".jpg";
	for (int i = 0; i < 131; i++) {
		string S_Temp;
		S_Temp = to_string(i+1);
		name[i] += first + S_Temp + last;
	}
	while (1) {
		int any = rand() % 132;
		if (val[name[any]] == 1)continue;
		TheSave.push(name[any]);
		val[name[any]] = 1;
		PicturePrint(name[any]);
		if (TheSave.size() == 21) {
			val[TheSave.front()] = 0;
			TheSave.pop();
		}
	}
	return 0;
}