#include "Cho.h"



Cho::Cho()
{
	chieuCao = 0;
	chieuDai = 0;
	thucAn = float(0);
}


Cho::~Cho()
{
}


void Cho::Nhap()
{
	info.Nhap();
	cout << "Chieu cao: ";
	cin >> chieuCao;
	cout << "Chieu dai: ";
	cin >> chieuDai;
	thucAn = (info.GetCanNang()) * 0.05;
}


void Cho::Xuat()
{
	info.Xuat();
	cout << "Chieu cao: " << chieuCao << endl;
	cout << "Chieu dai: " << chieuDai << endl;
	cout << "Tien thuc an: " << thucAn << endl;
}


void Cho::SetTen(char s[])
{
	info.SetTen(s);
}


void Cho::SetTuoi(int x)
{
	info.SetTuoi(x);
}


void Cho::SetCanNang(int x)
{
	info.SetCanNang(x);
}


//char* Cho::GetTen()
//{
//	return info.GetTen();
//}


int Cho::GetTuoi()
{
	return info.GetTuoi();
}


int Cho::GetCanNang()
{
	return info.GetCanNang();
}


int Cho::GetChieuCao()
{
	return chieuCao;
}


int Cho::GetChieuDai()
{
	return chieuDai;
}


float Cho::GetThucAn()
{
	return thucAn;
}


void Cho::SetChieuCao(int x)
{
	chieuCao = x;
}


void Cho::SetChieuDai(int x)
{
	chieuDai = x;
}


void Cho::SetThucAn()
{
	thucAn = (info.GetCanNang()) * 0.05;
}