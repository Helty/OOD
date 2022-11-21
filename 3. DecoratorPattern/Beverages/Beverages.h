#pragma once

#include "IBeverage.h"

// ������� ���������� �������, ��������������� ��� ��������
class CBeverage : public IBeverage
{
public:
	CBeverage(const std::string& description)
		:m_description(description)
	{
	}

	std::string GetDescription() const override final
	{
		return m_description;
	}

protected:
	std::string m_description;
};

// ����
class CCoffee : public CBeverage
{
public:
	CCoffee(const std::string& description = "Coffee")
		:CBeverage(description)
	{
	}

	double GetCost() const override
	{
		return 60;
	}
};

// ������ ����
enum class CoffeSize
{
	Standart,
	Double
};

// ���������
class CCappuccino : public CCoffee
{
public:
	CCappuccino(CoffeSize size = CoffeSize::Standart)
		: CCoffee("Standart Cappuccino")
		, m_cost(80)
	{
		if (size == CoffeSize::Double)
		{
			m_description = "Double Cappuccino";
			m_cost = 120;
		}
	}

	double GetCost() const override
	{
		return m_cost;
	}

private:
	double m_cost;
};

// �����
class CLatte : public CCoffee
{
public:
	CLatte(CoffeSize size = CoffeSize::Standart)
		:CCoffee("Standart Latte")
		, m_cost(90)
	{
		if (size == CoffeSize::Double)
		{
			m_description = "Double Latte";
			m_cost = 130;
		}
	}

	double GetCost() const override
	{
		return m_cost;
	}

private:
	double m_cost;
};

// ���� ���
enum class TeaType
{
	Green,
	White,
	Black,
	Yellow
};

// ���
class CTea : public CBeverage
{
public:
	CTea(TeaType teaType = TeaType::Green)
		:CBeverage("Green Tea")
	{
		switch (teaType)
		{
		case TeaType::White:
			m_description = "White Tea";
			break;
		case TeaType::Black:
			m_description = "Black Tea";
			break;
		case TeaType::Yellow:
			m_description = "Yellow Tea";
			break;
		}
	}

	double GetCost() const override
	{
		return 30;
	}
};

// ������ ��������� ��������
enum class MilkshakeSize
{
	Small,
	Medium,
	Large

};

// �������� ��������
class CMilkshake : public CBeverage
{
public:
	CMilkshake(MilkshakeSize milkshakeSize = MilkshakeSize::Medium)
		: CBeverage("Medium Milkshake")
		, m_cost(60)
	{
		switch (milkshakeSize)
		{
		case MilkshakeSize::Small:
			m_description = "Small Milkshake";
			m_cost = 50;
			break;
		case MilkshakeSize::Large:
			m_description = "Large Milkshake";
			m_cost = 80;
			break;
		}
	}

	double GetCost() const override
	{
		return m_cost;
	}

private:
	double m_cost;
};
