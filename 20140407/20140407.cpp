// 20140407.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
//기본적인 연산자에 대하여 함수가 각각 만들어짐
//but 메모리를 많이 잡아먹음..
//매개 변수의 자료형이나 리턴 값의 자료형태에 구애 받지 않고 사용 가능
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
	//char float 등 어떤 타입이든 가능함.
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

