#include "exam_english.h"
#include "utility.h"
#include <random>

using namespace std;

/*
* �p�P��̖����쐬����
*/
QuestionList CreateEnglishWordExam()
{
	const struct {
		const char* word; // �p�P��
		const char* reading; // �ǂ�
		const char* meaning; // �Ӗ�
		
	} data[] = {
		{ "state", "�X�e�[�g", "���" },
		{ "business", "�r�W�l�X", "���ƁA�d��" },
		{ "abstract", "�A�u�X�g���N�g", "���ۓI��" },
		{ "concrete", "�R���N���[�g", "��̓I��" },
		{ "digital", "�f�W�^��", "�����ŏ���`����" },
		{ "analogue", "�A�i���O", "�ގ����Ă���A�ގ���" },
		{ "exchange", "�G�N�X�`�F���W", "�����A���ցA�ב�" },
		{ "infrastructure", "�C���t���X�g���N�`��", "�����\���A��ՂƂȂ�{�݂�ݔ�" },
		{ "knowledge", "�i���b�W", "�m��" },
		{ "credit", "�N���W�b�g", "�M�p" },
		};
		
	constexpr int quizCount = 5;
	QuestionList questions;
	questions.reserve(quizCount);
	const vector<int> indices = CreateRandomIndices(size(data));
	random_device rd;

	// ���̎�ނ������_���ɑI��
	const int type = uniform_int_distribution<>(0, 3)(rd);
	switch (type) {
	case 0: // �Ӗ�����p�P��𓚂���


	for (int i = 0; i < quizCount; i++) {
		const auto & e = data[indices[i]];
		questions.push_back({
		"�u" + string(e.meaning) + "�v���Ӗ�����p�P��𓚂���",
		e.word });
			
	}
	
	break;

	case 1: // �u�ǂ݁v����p�P��𓚂���
		for (int i = 0; i < quizCount; i++) {
			const auto & e = data[indices[i]];
			questions.push_back({
			"�J�^�J�i�̓ǂ݁u" + string(e.reading) + "�v�ɑΉ�����p�P��𓚂���",
			e.word });
			
		}
	break;

	case 2: // �p�P�ꂩ��u�ǂ݁v�𓚂���
		for (int i = 0; i < quizCount; i++) {
			const auto & e = data[indices[i]];
			questions.push_back({
			string(e.word) + "�̓ǂ݂��J�^�J�i�œ�����",
			e.reading });
			
		}
	break;
	} // switch (type)

	return questions;
}