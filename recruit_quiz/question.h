#pragma once

#include<string>
#include<vector>

//ヘッダーファイルはusingを使わない方がいい

//問題文と答えをまとめる構造体
struct Question
{
	std::string q;
	std::string a;
};
//問題の配列をあらわす型
using QuestionList = std::vector<Question>;