// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������

#include "monom.h"


class PNode {
private:
	Monom data;				//������ ������ �����
	PNode *next;				//��������� �� ���������
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


PList :: PList () //����������� �� ���������
{
	head = new PNode;
}
