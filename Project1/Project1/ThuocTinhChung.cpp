#include "ThuocTinhChung.h"



ThuocTinhChung::ThuocTinhChung()
{
	ten[0] = '\0';
	tuoi = 0;
	canNang = 0;
}


ThuocTinhChung::~ThuocTinhChung()
{
}


void ThuocTinhChung::Nhap()
{
	cout << "Ten con vat: ";
	cin.ignore();
	cin.getline(ten, 15);
	cout << "Tuoi: ";
	cin >> tuoi;
	cout << "Can nang: ";
	cin >> canNang;
}


void ThuocTinhChung::Xuat()
{
	cout << "Ten: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Can nang: " << canNang << endl;
}


void ThuocTinhChung::SetTen(char s[])
{
	strcpy_s(ten, 15, s);
}


void ThuocTinhChung::SetTuoi(int x)
{
	tuoi = x;
}


void ThuocTinhChung::SetCanNang(int x)
{
	canNang = x;
}


//char* ThuocTinhChung::GetTen()
//{
//	char *p;
//	strcpy_s(p, 15, ten);
//	return p;
//}


int ThuocTinhChung::GetTuoi()
{
	return tuoi;
}


int ThuocTinhChung::GetCanNang()
{
	return canNang;
}