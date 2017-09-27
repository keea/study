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
	//�Ļ��� Ŭ������ ���� ������ �Ҹ��� ���.
	Uncopyable() {};
	~Uncopyable() {};

private:
	Uncopyable(const Uncopyable&);
	Uncopyable& operator=(const Uncopyable&);
};

class K_Class : Uncopyable {
private:
	int m_i;

	//��ũ�� �ȵ�.
	//K_Class(const K_Class&); //private���� �����ϰ�,
	//K_Class& operator=(const K_Class&); // ������ �������� ����.
public:
	K_Class(int i = 0) :m_i(i) {}

	//�������̳� ��ũ�� �� ������ ��.
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

	/* �⺻ Ŭ������ Uncopyable�� ���� �����ڿ� ���� ���� �����ڴ� private���� ����Ǿ� ������,
	   ��ӹ��� K_Class���� �� �� ���� ��.	*/

	//K_Class kc2(kc1); //���� ������ ȣ��
	//kc1 = *pkc; //���� ���� ������ ȣ��
	_getch();
}