#pragma once
#include "Staff.h"
class Salesman :
	public Staff
{
public:
	Salesman(string, string, string, string);
	~Salesman();
private:
	int volume;		// ���۶�
	float percent;	// ��ɶ��
public:
	void setVolume(int v); // ���õ���
	void setPercent(float p);// ������ɶ��
	
	void setMoney(int volume, float percent);  // �������۶�����
	int getMoney();		 // ��ù���
};

