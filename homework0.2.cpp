#include <iostream>
#include <string>
using namespace std;
template<class T>
class listNode 
{public:
	listNode() { next = NULL; } //initializing
	T data; //value
	listNode*next;  // pointer to next node
};
listNode<string>* b;
template<class T>
class linkedList 
{private:
	int listlength;
	listNode<T>* node;   //temporary node
	listNode<T>* lastnode;  // last node
	listNode<T>* headnode;  //head node
public:
	linkedList();//
	int length(); //number of element
	void add(T x); //add a node from back
	void traversal(); //traverse all node and display their data
	bool isEmpty(); //determine whether the linked list is empty or not
	void Delete(T x); //delete a node whose data is x
	void insert(T x, listNode<T>* p); //Insert a node with data x after specified node p
	void insertHead(T x); //insert a node with data x from head
};
template<class T>
linkedList<T>::linkedList()
{	headnode = new listNode<T>;
	lastnode = headnode;
	int x;
	cout << "Please input the number of node you want to create :";
	cin >> x;
	for (int i = 0;i < x;i++)
	{	node = new listNode<T>;
		cout << "Please input the data :";
		cin >> (node->data);
		cout << endl;
		lastnode->next = node;
		lastnode = node;}
	b = headnode->next;}
template<class T>
int linkedList<T>::length()
{	int sum = 0;
	listNode<T>* temp = headnode;
	while ((temp->next) != NULL)
	{	sum = sum + 1;
		temp = temp->next;}
	return sum;}
template<class T>
void linkedList<T>::add(T x)
{	listNode<T>* node = new listNode<T>;
	node->data = x;
	lastnode->next = node;
	lastnode = node;}
template<class T>
void linkedList<T>::traversal()
{	listNode<T>* temp = (headnode->next);
	int n = 1;
	while (temp != NULL)
	{	cout << "No." << n << "data :" << temp->data << endl;
		temp = temp->next;
		n++;}}
template<class T>
bool linkedList<T>::isEmpty()
{	if (headnode->next == NULL)
		{return true;}
	else
		{return false;}}
template<class T>
void linkedList<T>::Delete(T x)
{	listNode<T>* p = (headnode->next);
	listNode<T>* q = headnode;
	while (p != NULL)
	{	if ((p->data) == x)
		{	q->next = p->next;
			delete p;
			cout << "Delete complete." << endl;
			break;}
		p = p->next;
		q = q->next;}}
template<class T>
void linkedList<T>::insert(T x, listNode<T>* p)
{   listNode<T>* node = new listNode<T>;
    node->data = x;
	node->next = p->next;
	p->next = node;
	listlength++;}
template<class T>
void linkedList<T>::insertHead(T x)
{	listNode<T>* temp = new listNode<T>;
	temp->data = x;
	temp->next = headnode->next;
	headnode->next = temp;}
int main()
{
	linkedList<string> A;
	string x;
	cout << "The list length is " << A.length() << "." << endl;
	cout << "\n" << "Display data:" << endl;
	A.traversal();
	cout << "Please input data what you want to add :";
	cin >> x;
	A.add(x);
	cout << "\n" << "Display data:" << endl;
	A.traversal();
	cout << "\n" << "Empty is " << A.isEmpty() << "." << endl;
	cout << "Please input data what you want to delete :";
	cin >> x;
	A.Delete(x);
	cout << "\n" << "Display data:" << endl;
	A.traversal();
	cout << "Please input data what you want to insert :";
	cin >> x;
	A.insert(x, b);
	cout << "\n" << "Display data:" << endl;
	A.traversal();
	cout << "Please input data what you want to insert of head :";
	cin >> x;
	A.insertHead(x);
	cout << "\n" << "Display data:" << endl;
	A.traversal();
	return 0;
}
