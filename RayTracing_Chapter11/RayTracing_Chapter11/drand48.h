#ifndef DRAND48H
#define DRAND48H

#include<random>

double drand48()
{
	std::random_device rand;     // �񌈒�I�ȗ���������𐶐�
	std::mt19937 mt(rand());     //  �����Z���k�E�c�C�X�^��32�r�b�g�ŁA�����͏����V�[�h�l
	std::uniform_real_distribution<> rand48(0.0, 1.0);    // [1.0, 2.0] �͈͂̈�l����
	return rand48(mt);
}

#endif