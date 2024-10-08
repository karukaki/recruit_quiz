#include<iostream>
#include<string>
using namespace std;

int main()
{
	//問題文と答えをまとめる構造体
	struct Question
	{
		string s;
		int a;
	};

	Question questions[] = {
		{"13x(-5)",13 * -5},
		{"(-21)/(-3)",-21 / -3},
		{"7-(4+2)/2",7 - (4 + 2) / 2},
	};
	cout << "[リクルート対策クイズ]\n";


	for (const auto& e : questions) {
		cout << e.s << "の答えは? \n";

		int answer;
		cin >> answer;

		if (answer == e.a) {
			cout << "正解 ! \n";
		}
		else {
			cout << "間違い ! 正解は" << e.a << "\n";
		}
	}	//for questions
}