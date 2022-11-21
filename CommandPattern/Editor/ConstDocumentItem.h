#pragma once
#include "Item.h"

class CConstDocumentItem
{
public:
	CConstDocumentItem(Item const& item);
	// ���������� ��������� �� ����������� �����������, ���� nullptr,
	// ���� ������� �� �������� ������������
	std::shared_ptr<const IImage> GetImage() const;
	// ���������� ��������� �� ����������� ��������, ���� nullptr, ���� ������� �� �������� ����������
	std::shared_ptr<const IParagraph> GetParagraph() const;
	virtual ~CConstDocumentItem() = default;
};