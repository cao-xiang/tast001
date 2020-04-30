
#ifndef _SLIST_H_
#define _SLIST_H_
#include <iostream>
using namespace std;
template<typename T>
struct Node
{
	T m_Data;
	Node<T> * m_pNext;
	Node()
	{
		m_pNext = NULL;
	}
};
template<typename T>
class CSList
{
public:
	CSList();
	~CSList();
	//Î²²å·¨
	bool AppendNode(T Data);
	//É¾³ý
	bool DelNode(T Key);
	//ÐÞ¸Ä
	bool ModNode(T Key, T New);
	//²éÕÒ
	bool FindNode(T Key);
	//ÄæÐò
	bool Reverse();
	//´òÓ¡
	void Print();
	//Ïú»Ù
	void Clear();
private:
	Node<T> * m_pFirst;
};
template<typename T>
CSList<T>::CSList()
{
	m_pFirst = NULL;
}
template<typename T>
CSList<T>::~CSList()
{
	Node<T> * pCurNode = NULL;
	pCurNode = m_pFirst;
	while (pCurNode)
	{
		m_pFirst = m_pFirst->m_pNext;
		delete pCurNode;
		pCurNode = m_pFirst;
	}
}
//Î²²å·¨
template<typename T>
bool CSList<T>::AppendNode(T Data)
{
	Node<T> * pNewNode = new Node<T>;
	Node<T> * pCurNode = NULL;
	if (!pNewNode)
		return false;
	pNewNode->m_Data = Data;
	pNewNode->m_pNext = NULL;
	if (!m_pFirst)
	{
		m_pFirst = pNewNode;
		return true;
	}
	pCurNode = m_pFirst;
	while (pCurNode->m_pNext)
	{
		pCurNode = pCurNode->m_pNext;
	}
	pCurNode->m_pNext = pNewNode;
	return true;
}
//É¾³ý
template<typename T>
bool CSList<T>::DelNode(T Key)
{
	Node<T> * pPrevNode = NULL;
	Node<T> * pCurNode = NULL;
	if (!m_pFirst)
		return false;
	if (m_pFirst->m_Data == Key)
	{
		pCurNode = m_pFirst;
		m_pFirst = m_pFirst->m_pNext;
		delete pCurNode;
		pCurNode = NULL;
		return true;
	}
	pPrevNode = m_pFirst;
	pCurNode = m_pFirst->m_pNext;
	while (pCurNode->m_Data)
	{
		if (pCurNode->m_Data == Key)
		{
			pPrevNode->m_pNext = pCurNode->m_pNext;
			delete pCurNode;
			return true;
		}
		pPrevNode = pCurNode;
		pCurNode = pCurNode->m_pNext;
	}
	return false;
}
//ÐÞ¸Ä
template<typename T>
bool CSList<T>::ModNode(T Key, T New)
{
	Node<T> * pCurNode = NULL;
	if (!m_pFirst)
		return false;
	pCurNode = m_pFirst;
	while (pCurNode)
	{
		if (pCurNode->m_Data == Key)
		{
			pCurNode->m_Data = New;
			return true;
		}
		pCurNode = pCurNode->m_pNext;
	}
	return false;
}
//²éÕÒ
template<typename T>
bool CSList<T>::FindNode(T Key)
{
	Node<T> * pCurNode = NULL;
	if (!m_pFirst)
		return false;
	pCurNode = m_pFirst;
	while (pCurNode)
	{
		if (pCurNode->m_Data == Key)
			return true;
		pCurNode = pCurNode->m_pNext;
	}
	return false;
}
//ÄæÐò
template<typename T>
bool CSList<T>::Reverse()
{
	Node<T> * pPrevNode = NULL;
	Node<T> * pCurNode = m_pFirst;
	Node<T> * pNext = NULL;
	while (pCurNode)
	{
		pNext = pCurNode->m_pNext;
		pCurNode->m_pNext = pPrevNode;
		pPrevNode = pCurNode;
		pCurNode = pNext;
	}
	m_pFirst = pPrevNode;
	return true;
}

template<typename T>
void CSList<T>::Print()
{
	Node<T> * pCurNode = m_pFirst;
	while (pCurNode)
	{
		cout << pCurNode->m_Data << "\t";
		pCurNode = pCurNode->m_pNext;
	}
	cout << endl;
}
template<typename T>
void CSList<T>::Clear()
{
	Node<T> * pCurNode = NULL;
	pCurNode = m_pFirst;
	while (pCurNode)
	{
		m_pFirst = m_pFirst->m_pNext;
		delete pCurNode;
		pCurNode = m_pFirst;
	}
}
#endif
#define CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  

int main()
{
	CSList<int> IntList;
	IntList.AppendNode(1);
	IntList.AppendNode(7);
	IntList.AppendNode(4);
	IntList.AppendNode(2);
	IntList.AppendNode(8);
	IntList.AppendNode(5);
	IntList.AppendNode(9);
	IntList.AppendNode(6);
	IntList.AppendNode(3);
	IntList.Print();
	IntList.Reverse();
	IntList.Print();
	IntList.DelNode(3);
	IntList.DelNode(1);
	IntList.DelNode(2);
	IntList.Print();
	if (IntList.FindNode(6) == true)
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}
	if (IntList.FindNode(7) == true)
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}
	if (IntList.FindNode(5) == true)
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}
	if (IntList.FindNode(100) == true)
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}
	IntList.ModNode(6, 66);
	IntList.ModNode(7, 77);
	IntList.ModNode(5, 55);
	IntList.Print();
	IntList.Clear();
	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}
