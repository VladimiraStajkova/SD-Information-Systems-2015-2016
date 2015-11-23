#ifndef LList_H
#define LList_H


struct Node {
	int inf;
	Node* next;
};

class LList {
private:
	Node* start;
	Node* end;
public:
	LList();
	~LList();
	
	void insertStart(int);
	void insertEnd(int);
	void insertAfter(Node*, int);
	void insertBefore(Node*, int);
	void insertBetween(Node* ,Node* , int);

	void remove(Node*);

	int endNode();
	int front();

	bool isEmpty()const;

	void print()const;
	Node* search(int);
};


#endif