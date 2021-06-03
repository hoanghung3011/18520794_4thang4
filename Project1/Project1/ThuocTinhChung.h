#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class ThuocTinhChung
{
private:
	char ten[15];
	int tuoi;
	int canNang;
public:
	ThuocTinhChung();
	~ThuocTinhChung();
	void Nhap();
	void Xuat();
	void SetTen(char[]);
	void SetTuoi(int);
	void SetCanNang(int);
	//char* GetTen();
	int GetTuoi();
	int GetCanNang();
};

