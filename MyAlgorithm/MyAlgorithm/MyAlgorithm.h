// 2016年3月2日21:50:09 ~     Create by 陈磊 V1.0.0
// 于 ...  修改  ...

//My_Algorithm:包含一些高效的算法与数据结构（非STL）



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
