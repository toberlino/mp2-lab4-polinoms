// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов

#include "monom.h"


class PNode {
private:
	Monom data;				//данные одного звена
	PNode *next;				//указатель на следующий
public:
	PNode();
	~PNode();
	PNode (const PNode &p);
	PNode(Monom m, PNode* n);
};


PNode::PNode() {
	data;                             //
	next=NULL;
}

PNode::~PNode(){};

PNode::PNode(const PNode &p)
{
	data=p.data;
	next=p.next;
}

PNode::PNode(Monom m,PNode* n)
{
	data=m;
	next=n;
};



class PList {
private:
	PNode *head;
public:
	PList();
	~PList();
	PList(const PList &p);
};


PList :: PList () //конструктор по умолчанию
{
	head = new PNode;
}
