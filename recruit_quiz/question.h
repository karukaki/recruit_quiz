#pragma once

#include<string>
#include<vector>

//�w�b�_�[�t�@�C����using���g��Ȃ���������

//��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	std::string q;
	std::string a;
};
//���̔z�������킷�^
using QuestionList = std::vector<Question>;