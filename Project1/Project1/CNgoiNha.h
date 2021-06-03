#include "Cho.h"
#include "Meo.h"
#include "ChuotHamster.h"
#pragma once

class CNgoiNha
{
private:
	Cho C[100];
	Meo M[100];
	ChuotHamster H[100];
	int a, b, c;
public:
	CNgoiNha();
	~CNgoiNha();
	void Nhap();
	void Xuat();
	float TongTien();
};

