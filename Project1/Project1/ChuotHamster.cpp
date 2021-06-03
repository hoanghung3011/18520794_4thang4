#include "ChuotHamster.h"



ChuotHamster::ChuotHamster()
{
}


ChuotHamster::~ChuotHamster()
{
}


void ChuotHamster::Nhap()
{
	info.Nhap();
	cout << "Mau long: ";
	do
	{
		cin >> mauLong;
	} while (mauLong < 0 || mauLong>3);
	if (mauLong == 0 || mauLong == 2)
		thucAn = (info.GetCanNang() + info.GetTuoi()) * 0.02;
	else
		thucAn = (info.GetCanNang()) * 0.025;
}


void ChuotHamster::Xuat()
{
	info.Xuat();
	cout << "Mau long: " << mauLong << endl;
	cout << "Tien thuc an: " << thucAn << endl;
}


void ChuotHamster::SetTen(char s[])
{
	info.SetTen(s);
}


void ChuotHamster::SetTuoi(int x)
{
	info.SetTuoi(x);
}


void ChuotHamster::SetCanNang(int x)
{
	info.SetCanNang(x);
}


//char* ChuotHamster::GetTen()
//{
//	return info.GetTen();
//}


int ChuotHamster::GetTuoi()
{
	return info.GetTuoi();
}


int ChuotHamster::GetCanNang()
{
	return info.GetCanNang();
}


int ChuotHamster::GetMauLong()
{
	return mauLong;
}


float ChuotHamster::GetThucAn()
{
	return thucAn;
}


void ChuotHamster::SetMauLong(int x)
{
	mauLong = x;
}


void ChuotHamster::SetThucAn()
{
	if (mauLong == 0 || mauLong == 2)
		thucAn = (info.GetCanNang() + info.GetTuoi()) * 0.02;
	else
		thucAn = (info.GetCanNang()) * 0.025;
}