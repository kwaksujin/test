#pragma once

class cShuffle
{
public:
	cShuffle(void);
	~cShuffle(void);

	//Ŭ���� �ȿ� ���ø��� ������ ������Ͽ� ����
	//cpp���� ���� �� �� ����.
	template<typename T1,typename T2>
	void Play(T1* pA, T2 ArrCnt);
	
};

template<typename T1,typename T2>
void cShuffle<T1, T2>::Play( T1* pA, T2 ArrCnt )
{

}