#pragma once
class Tamagochi
{
public:
	Tamagochi(int vida, double money);
	double getMoney();
	void setMoney(double dineroRecibido);

	void hablar();
	int m_Health;

private:
	double money;
	int vida;
};

