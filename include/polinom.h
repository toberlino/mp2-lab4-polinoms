// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������

#include "monom.h"


class Polinom {
private:
	Monom *data;				//������ ������ �����
	Polinom *next;				//��������� �� ���������
	Polinom *head;				//��������� �� ������
public:
	Polinom();
	Polinom (const Polinom &p);
	~Polinom() {};

};


Polinom::Polinom() {
	/*head=new Polinom;
	head->next=head;*/
	next==NULL;
}

Polinom::Polinom(const Polinom &p){
	head=p.head;
	data=p.data;
	next=p.next;
}

