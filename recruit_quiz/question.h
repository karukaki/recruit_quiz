#pragma once

#include<string>
#include<vector>

//�w�b�_�[�t�@�C����using���g��Ȃ���������

//��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	std::string q;
	std::string a;
	std::vector<std::string> b; // ����(��������ꍇ)
};
//���̔z�������킷�^
using QuestionList = std::vector<Question>;