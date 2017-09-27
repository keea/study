/*
* Boost Noncopyable
* @file		source.cpp
* @date     Wed Sep 27 16:36:45 2017
* @author   keea
*/

#include <iostream>
#include <assert.h>
#include <conio.h>

class Uncopyable {
protected:
	//파생된 클래스에 대해 생성과 소멸을 허용.
	Uncopyable() {};
	~Uncopyable() {};

private:
	Uncopyable(const Uncopyable&);
	Uncopyable& operator=(const Uncopyable&);
};

class K_Class : Uncopyable {
private:
	int m_i;

	//링크가 안됨.
	//K_Class(const K_Class&); //private으로 선언하고,
	//K_Class& operator=(const K_Class&); // 구현을 정의하지 않음.
public:
	K_Class(int i = 0) :m_i(i) {}

	//컴파일이나 링크할 때 에러가 남.
	/*K_Class(const K_Class & other) {
		assert(!"Do not use copy constructor.");
	}
	K_Class& operator=(const K_Class& other) {
		assert(!"Do not use copy assignment.");
		return *this;
	}*/
};


void main() {
	K_Class kc1;
	K_Class * pkc = new K_Class;

	/* 기본 클래스인 Uncopyable의 복사 생성자와 복사 대입 연산자는 private으로 선언되어 있으니,
	   상속받은 K_Class에서 쓸 수 없게 됨.	*/

	//K_Class kc2(kc1); //복사 생성자 호출
	//kc1 = *pkc; //복사 대입 연산자 호출
	_getch();
}