// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов

#include "monom.h"


class Polinom {
private:
	Monom *data;				//данные одного звена
	Polinom *next;				//указатель на следующий
	Polinom *head;				//указатель но голову
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

