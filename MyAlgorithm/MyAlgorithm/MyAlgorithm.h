// 2016��3��2��21:50:09 ~     Create by ���� V1.0.0
// �� ...  �޸�  ...

//My_Algorithm:����һЩ��Ч���㷨�����ݽṹ����STL��

/*���棺��ͷ�ļ���C++14��д�������ʹ��֧��C++14�ı��������б��롣*/

#pragma once

#ifndef _ALGI_
#define _ALGI_




#define algname_begin  namespace calg{

#define algname_end };


#include <algorithm>
#include <list>
#include <vector>
#include <process.h>
#include <set>
#include <map>
#include <iostream>
#include <array>


algname_begin


//using namespace std;   //��ֹ�����ռ���Ⱦ
//extern int size;

//bubsort:�����ð������  ʱ�临�Ӷȣ�O(n^2) �����ռ䣺O(1)
template<class It>
inline void bubsort(It first,It last)
{

}

template<class T>
class Qarr {
public:

	
	Qarr(int sizes);

	auto operator[](int x);//����ת�����壺  ��

private:
	
	int size;
	T* p;
	



};





template<class T>
inline Qarr<T>::Qarr(int sizes)
{
	
	p = new int[sizes];
	size = sizes;
	
}

template<class T>
inline auto Qarr<T>::operator[](int x)
{
	if (x > size - 1)
	{
		std::cout << "Error: An array subscript crossing the line\n";// << std::endl;
		return p[-1];
	}
	return p[x];
}



algname_end


#endif
