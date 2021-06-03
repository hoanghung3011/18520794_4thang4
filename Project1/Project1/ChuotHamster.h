#include "ThuocTinhChung.h"
#pragma once
class ChuotHamster
{
private:
	ThuocTinhChung info;
	int mauLong;
	float thucAn;
public:
	ChuotHamster();
	~ChuotHamster();
	void Nhap();
	void Xuat();
	void SetTen(char[]);
	void SetTuoi(int);
	void SetCanNang(int);
	//char* GetTen();
	int GetTuoi();
	int GetCanNang();
	int GetMauLong();
	float GetThucAn();
	void SetThucAn();
	void SetMauLong(int);
};