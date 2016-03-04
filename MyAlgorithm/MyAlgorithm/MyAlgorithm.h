// 2016年3月2日21:50:09 ~     Create by 陈磊 V1.0.0
//当前版本V1.0.0.28
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
#include <time.h>

algname_begin


//using namespace std;   //防止命名空间污染
//extern int size;

//bubsort:经典的冒泡排序  时间复杂度：O(n^2) 辅助空间：O(1)
template<typename T>
inline void bubsort(T a,int first,int last,bool(*f)(long a,long b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
		if (!(*f)(a[i],a[j]))
		{
			swap(a[i], a[j]);
		}
}

template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(int a, int b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}

template<typename T>
inline void bubsort(T a, int first, int last, bool(*f)(double a, double b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
			if (!(*f)(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
}

template<typename T>
inline void bubsort(T a, int first, int last, bool(*f)(float a, float b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
			if (!(*f)(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
}

template<typename T>
inline void bubsort(T a, int first, int last, bool(*f)(char a, char b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
			if (!(*f)(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
}

template<typename T>
inline void bubsort(T a, int first, int last, bool(*f)(long long a, long long b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
			if (!(*f)(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
}

template<typename T>
inline void bubsort(T a, int first, int last, bool(*f)(int a, int b))
{
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
			if (!(*f)(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
}


template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(long a, long b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}


template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(long long a, long long b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}

template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(float a, float b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}

template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(double a, double b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}

template<typename T>
inline void selsort(T a, int first, int last, bool(*f)(char a, char b))
{
	for (int i = first;i < last;i++)
	{
		int lowindex = i;
		for (int j = last;j > i;j--)
		{
			if ((*f)(a[j], a[lowindex]))
			{
				lowindex = j;
			}
		}
		swap(a[i], a[lowindex]);
	}
}

//template<typename T,typename X>
//inline void selsort(T a, int first, int last, bool(*f)(Qarr<X> a, Qarr<X> b))
//{
//	for (int i = first;i < last;i++)
//	{
//		int lowindex = i;
//		for (int j = last;j > i;j--)
//		{
//			if ((*f)(a[j], a[lowindex]))
//			{
//				lowindex = j;
//			}
//		}
//		swap(a[i], a[lowindex]);
//	}
//}

template<class T>
class Qarr {
public:

	
	Qarr(int start1 = 0,int end1 = 1000);

	~Qarr()
	{
		delete p;
	}


	void Modify(int num, int location);

	
	auto operator[](int x);//快速转到定义：  行

private:
	int start;
	int end;
	T* p;
	int offset;



};





template<class T>
inline Qarr<T>::Qarr(int start1 = 0,int end1 = 1000)
{
	p = new int[end1 - start1 + 1];
	start = start1;
	end = end1;
	offset = start - 0;
}



template<class T>
inline auto Qarr<T>::operator[](int x)
{
	if (x > end || x < start)
	{
		srand(time(NULL));
		return rand()*(rand()%1000);
	}
	return p[x - offset];
}


template<class T>
inline void Qarr<T>::Modify(int num, int location)
{
	p[location - offset] = num;
}

algname_end

#endif
