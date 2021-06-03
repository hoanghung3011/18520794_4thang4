#include "ThuocTinhChung.h"
#pragma once
class Meo
{
private:
	ThuocTinhChung info;
	char loaiMeo[20];
	float thucAn;
public:
	Meo();
	~Meo();
	void Nhap();
	void Xuat();
	void SetTen(char[]);
	void SetTuoi(int);
	void SetCanNang(int);
	//char* GetTen();
	int GetTuoi();
	int GetCanNang();
	//char* GetLoaiMeo();
	float GetThucAn();
	void SetThucAn();
	void SetLoaiMeo(char[]);
};