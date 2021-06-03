#include "CNgoiNha.h"



CNgoiNha::CNgoiNha()
{
}


CNgoiNha::~CNgoiNha()
{
}


void CNgoiNha::Nhap()
{
	cout << "Nhap lan luot so luong con cho, con meo, cho chuot hamster trong ngoi nha: ";
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++)
	{
		cout << "Nhap thong tin cho con cho thu " << i + 1 << ":\n";
		C[i].Nhap();
	}
	for (int i = 0; i < b; i++)
	{
		cout << "Nhap thong tin cho con meo thu " << i + 1 << ":\n";
		M[i].Nhap();
	}
	for (int i = 0; i < c; i++)
	{
		cout << "Nhap thong tin cho con chuot hamster thu " << i + 1 << ":\n";
		H[i].Nhap();
	}
}


void CNgoiNha::Xuat()
{
	for (int i = 0; i < a; i++)
	{
		cout << "Thong tin cho con cho thu " << i + 1 << ":\n";
		C[i].Xuat();
	}
	for (int i = 0; i < b; i++)
	{
		cout << "Thong tin cho con meo thu " << i + 1 << ":\n";
		M[i].Xuat();
	}
	for (int i = 0; i < c; i++)
	{
		cout << "Thong tin cho con chuot hamster thu " << i + 1 << ":\n";
		H[i].Xuat();
	}
}


float CNgoiNha::TongTien()
{
	float t = float(0);
	for (int i = 0; i < a; i++)
	{
		t += C[i].GetThucAn();
	}
	for (int i = 0; i < b; i++)
	{
		t += M[i].GetThucAn();
	}
	for (int i = 0; i < c; i++)
	{
		t += H[i].GetThucAn();
	}
	return t;
}