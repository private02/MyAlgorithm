// 2016��3��2��21:50:09 ~     Create by ���� V1.0.0

// �� ...  �޸�  ...

//My_Algorithm:����һЩ��Ч���㷨�����ݽṹ����STL��


/*���棺��ͷ�ļ���C++14��д�������ʹ��֧��C++14�ı��������б��롣*/

/*��Ϣ�����뻷����VS2015*/

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

//bubsort:�����ð������  ʱ�临�Ӷȣ�O(n^2) �����ռ䣺O(1)
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

//selsort:�����ѡ������  ʱ�临�Ӷȣ�O(n^2) �����ռ䣺O(1)
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

/*ʹ�����µ��������ּ���ʱ����Ҫ��֤��������Ѿ��ź���*/
/*���ڽ���*/
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
/*��������*/
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




/*Qarr��֧�ָ�ʽ�����Ŀ��ٲ���*/


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


	auto operator[](int x);//����ת�����壺  ��

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

/*����������ṹ*/
template<typename E>
class BinNode {
public:
	BinNode(){} //���캯��

	virtual ~BinNode(){} //��������

	virtual E& element() = 0; //���ص�ǰ������

	virtual void SetElement(const E&) = 0;//���õ�ǰ������

	virtual BinNode* left() = 0;//����������

	virtual void SetLeft(BinNode*) = 0;//����������

	virtual BinNode* right() = 0;//����������

	virtual void Setright(BinNode*) = 0;//����������

	virtual bool isLeaf() = 0;//����˽ڵ���Ҷ�ӷ���true���������false
};


/*������ָ��ʵ��*/
template<typename key,typename E>
class BSTNode : public BinNode<E>
{
public:

private:
	Key k; 
	E it; 
	BSTNode* lc;//������
	BSTNode* rc;//������
};

/*���������*/

algname_end

#endif
