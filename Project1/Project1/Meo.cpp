#include "Meo.h"



Meo::Meo()
{
	loaiMeo[0] = '\0';
}


Meo::~Meo()
{
}


void Meo::Nhap()
{
	info.Nhap();
	cout << "Loai meo: ";
	cin.ignore();
	cin.getline(loaiMeo, 20);
	thucAn = (info.GetCanNang() - 1) * 0.04;
}


void Meo::Xuat()
{
	info.Xuat();
	cout << "Loai meo: " << loaiMeo << endl;
	cout << "Tien thuc an: " << thucAn << endl;
}


void Meo::SetTen(char s[])
{
	info.SetTen(s);
}


void Meo::SetTuoi(int x)
{
	info.SetTuoi(x);
}


void Meo::SetCanNang(int x)
{
	info.SetCanNang(x);
}


//char* Meo::GetTen()
//{
//	return info.GetTen();
//}


int Meo::GetTuoi()
{
	return info.GetTuoi();
}


int Meo::GetCanNang()
{
	return info.GetCanNang();
}


//char* Meo::GetLoaiMeo()
//{
//	char *p;
//	strcpy_s(p, 20, loaiMeo);
//	return p;
//}


float Meo::GetThucAn()
{
	return thucAn;
}


void Meo::SetLoaiMeo(char s[])
{
	strcpy_s(loaiMeo, 20, s);
}


void Meo::SetThucAn()
{
	thucAn = (info.GetCanNang() - 1) * 0.04;
}