// 2016��3��2��21:50:09 ~     Create by ���� V1.0.0
// �� ...  �޸�  ...

//My_Algorithm:����һЩ��Ч���㷨�����ݽṹ����STL��



#pragma once

#ifndef _ALGI_
#define _ALGI_

#include <algorithm>
#include <list>
#include <vector>
#include <process.h>
#include <set>
#include <map>

template<class T>
class Qarr {
public:


	Qarr(int size, int negative):negative(negative) {  }


	T& operator[](int x);
private:
	int negative;






};






#endif
