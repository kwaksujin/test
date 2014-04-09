#pragma once

class cShuffle
{
public:
	cShuffle(void);
	~cShuffle(void);

	//클래스 안에 탬플릿은 무조건 헤더파일에 구현
	//cpp에는 구현 할 수 없다.
	template<typename T1,typename T2>
	void Play(T1* pA, T2 ArrCnt);
	
};

template<typename T1,typename T2>
void cShuffle<T1, T2>::Play( T1* pA, T2 ArrCnt )
{

}