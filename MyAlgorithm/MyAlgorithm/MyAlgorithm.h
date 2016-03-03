// 2016年3月2日21:50:09 ~     Create by 陈磊 V1.0.0
//当前版本V1.0.0.4
// 于 ...  修改  ...

//My_Algorithm:包含一些高效的算法与数据结构（非STL）

/*警告：本头文件用C++14编写，请务必使用支持C++14的编译器进行编译。*/

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


//using namespace std;   //防止命名空间污染
//extern int size;

//bubsort:经典的冒泡排序  时间复杂度：O(n^2) 辅助空间：O(1)
template<typename T>
inline int bubsort(T a,int first,int last,bool(*f)(int a,int b))
{
	return 1;
}

template<class T>
class Qarr {
public:

	
	Qarr(int sizes);

	auto operator[](int x);//快速转到定义：  行

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
