#pragma once
#include "Staff.h"

class HighManager : public Staff{
public:
	HighManager(string, string,string, string);
	~HighManager();

	int getMoney();
	void setMoney(int basem, int jobm, int bonus, int divident);

	void setDividend(int); // ���÷ֺ�
	int getDividend();	   // ��÷ֺ�

private:
	int dividend;		   // �߲������Ա�ķֺ�
};