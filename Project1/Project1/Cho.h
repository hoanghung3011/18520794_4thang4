#include "ThuocTinhChung.h"
#pragma once
class Cho
{
private:
	ThuocTinhChung info;
	int chieuCao;
	int chieuDai;
	float thucAn;
public:
	Cho();
	~Cho();
	void Nhap();
	void Xuat();
	void SetTen(char[]);
	void SetTuoi(int);
	void SetCanNang(int);
	//char* GetTen();
	int GetTuoi();
	int GetCanNang();
	int GetChieuCao();
	int GetChieuDai();
	float GetThucAn();
	void SetThucAn();
	void SetChieuCao(int);
	void SetChieuDai(int);
};

