// 20140407.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "cShuffle.h"
/*
void sum(int a, int b)
{
	cout << a + b << endl;
}
void swap(int& a, int& b)
{
	int Temp;

	Temp = a;
	a = b;
	b = Temp;
}
*/

template<typename T1, typename T2>
//�⺻���� �����ڿ� ���Ͽ� �Լ��� ���� �������
//but �޸𸮸� ���� ��Ƹ���..
//�Ű� ������ �ڷ����̳� ���� ���� �ڷ����¿� ���� ���� �ʰ� ��� ����
void sum(T1 a, T2 b)
{
	cout << a + b << endl;
}
template<typename T>
void swap(T& a, T& b)
{
	T Temp;
	Temp = a;
	a = b;
	b = Temp;
}
template<typename T1,typename T2>
void Shuffle(T1* pA, T2 ArrCnt)
{
	srand((unsigned int)time (NULL));
	int Dest, Sour;

	for(int i = 0; i < ArrCnt; ++i)
	{
		int Dest = rand()% ArrCnt;
		int Sour = rand()% ArrCnt;

		T1 Temp = pA[Dest];
		pA[Dest] = pA[Sour];
		pA[Sour] = Temp;
		
	}
}

int _tmain(int argc, _TCHAR* argv[])
{

	int Num[5] = {1,2,3,4,5};
	Shuffle(Num,5);
	for (int i = 0; i<5; ++i)
	{
		cout << Num[i] << endl;
	}
	//char float �� � Ÿ���̵� ������.
	//float A;
	//int B;
	//
	//A = 0.123;
	//B = 20;

	//sum(A,B);
	////swap(A,B);
	//cout << A << "\t" << B << endl;
	return 0;
}

