#pragma once
#include "ConstDocumentItem.h"
#include "Item.h"

class CDocumentItem: public CConstDocumentItem
{
public:
	CDocumentItem(Item const& item);
	// ���������� ��������� �� �����������, ���� nullptr, ���� ������� �� �������� ������������
	std::shared_ptr<IImage> GetImage();
	// ���������� ��������� �� ��������, ���� nullptr, ���� ������� �� �������� ����������
	std::shared_ptr<IParagraph> GetParagraph();
};