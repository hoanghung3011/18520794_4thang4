#include "CNgoiNha.h"

int main()
{
	CNgoiNha NhaDongVat;
	NhaDongVat.Nhap();
	NhaDongVat.Xuat();
	cout << "Tong tien thuc an: " << NhaDongVat.TongTien() << endl;
	system("pause");
	return 0;
}