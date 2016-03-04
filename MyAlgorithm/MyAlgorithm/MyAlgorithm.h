// 2016年3月2日21:50:09 ~     Create by 陈磊 V1.0.0

// 于 ...  修改  ...

//My_Algorithm:包含一些高效的算法与数据结构（非STL）


/*警告：本头文件用C++14编写，请务必使用支持C++14的编译器进行编译。*/

/*消息：理想环境：VS2015*/

#pragma once

#ifndef _ALGI_
#define _ALGI_

#pragma warning(disable: 4244)


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

//extern int size;

//bubsort:经典的冒泡排序  时间复杂度：O(n^2) 辅助空间：O(1)
template<typename T>
inline void bubsort(T a,int first,int last,bool(*f)(long a,long b))
{
	cout << "Sort Start" << endl;
	for (int i = first;i < last;i++)
		for (int j = last;j > i;j--)
		if (!(*f)(a[i],a[j]))
		{
			swap(a[i], a[j]);
		}
	cout << "Sort end" << endl;
}

//selsort:经典的选择排序  时间复杂度：O(n^2) 辅助空间：O(1)
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

/*使用如下的两个二分检索时，需要保证这个序列已经排好序。*/
/*对于降序：*/
template<class T,typename X>
auto desbinary(T a, int first, int last, X x)
{
	int l = first;
	int r = last;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (x < a[mid])
			r = mid - 1;
		if (x == a[mid])
			return mid;
		if (x > a[mid])
			l = mid + 1;
	}
	srand(time(NULL));
	int returnnum = rand()*(rand() % 10)*(rand() % 131313);
	while (returnnum <= 10000)
	{
		returnnum = rand()*(rand() % 10)*(rand() % 131313);
	}
	return returnnum;
}
/*对于升序：*/
template<class T,typename X>
auto ascbinary(T a, int first, int last, X x)
{
	int l = first;
	int r = last;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (x > a[mid])
			r = mid - 1;
		if (x == a[mid])
			return mid;
		if (x < a[mid])
			l = mid + 1;
	}
	srand(time(NULL));
	int returnnum = rand()*(rand() % 10)*(rand() % 131313);
	while (returnnum <= 10000)
	{
		returnnum = rand()*(rand() % 10)*(rand() % 131313);
	}
	return returnnum;
}




/*Qarr：支持各式各样的快速操作*/


template<class T>
class Qarr {
public:

	
	Qarr(int start1 = 0,int end1 = 1000);

	~Qarr()
	{
	
	}


	void Modify(int num, int location);

	void insert(int num, int location);


	void deleteQ(int location);


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
	p = new T[end1 - start1 + 1];
	start = start1;
	end = end1;
	offset = start - 0;
}



template<class T>
inline void Qarr<T>::deleteQ(int location)
{
	location = location - offset;
	T* p1 = new T[end - start];
	end--;

	for (int i = 0;i < location;i++)
	{
		p1[i] = p[i];
	}

	for (int i = location;i < end - start + 1;i++)
	{
		p1[i] = p[i + 1];
	}

	p = new T[end - start + 1];
	
	for (int i = 0;i < end - start + 1;i++)
	{
		p[i] = p1[i];
	}
	delete p1;
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

template<class T>
inline void Qarr<T>::insert(int num, int location)
{
	//p = nullptr;
	location = location - offset;
	T* p1 = new T[end - start + 2];
	end++;
	for (int i = 0;i < location;i++)
	{
		p1[i] = p[i];
	}

	for (int i = location;i < end - start + 1;i++)
	{
		if (i == location)
		{
			p1[i] = num;
		}
		else {
			p1[i] = p[i - 1];
		}
	}

	p = new T[end - start + 1];
	for (int i = 0;i < end - start + 1;i++)
	{
		p[i] = p1[i];
	}

	delete p1;

}

/*二叉树抽象结构*/
template<typename E>
class BinNode {
public:
	BinNode(){} //构造函数

	virtual ~BinNode(){} //析构函数

	virtual E& element() = 0; //返回当前结点的数

	virtual void SetElement(const E&) = 0;//设置当前结点的数

	virtual BinNode* left() = 0;//返回左子树

	virtual void SetLeft(BinNode*) = 0;//设置左子树

	virtual BinNode* right() = 0;//返回右子树

	virtual void Setright(BinNode*) = 0;//设置右子树

	virtual bool isLeaf() = 0;//如果此节点是叶子返回true，否则就是false
};


/*二叉树指针实现*/
template<typename key,typename E>
class BSTNode : public BinNode<E>
{
public:

private:
	Key k; 
	E it; 
	BSTNode* lc;//左子树
	BSTNode* rc;//右子树
};

/*二叉检索树*/

algname_end

#endif
