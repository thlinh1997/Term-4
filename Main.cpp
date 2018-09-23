#include "PhanSo.h"
int PhanSo::m_soluongPS = 0;

void main()
{
	PhanSo a, b;
	a.Nhap();

	if (a.kiemtraPShople() == true)
	{
		cout << " Phan so ";
		a.Xuat();
		cout << " hop le." << endl;
	}
	else
		cout << " Khong hop le.";
	cout << "\n Dang rut gon phan so: "; a.rutngon().Xuat();
	cout << endl;

	if (a.kiemtraDuong() == true)
	{
		cout << " Phan so ";
		a.Xuat();
		cout << " duong." << endl;
	}
	else
		cout << " Phan so khong duong.";

	b.Nhap();
	if (b.kiemtraPShople() == true)
	{
		cout << " Phan so ";
		b.Xuat();
		cout << " hop le.";
	}
	else
		cout << " Khong hop le.";

	if (b.kiemtraDuong() == true)
	{
		cout << " Phan so ";
		b.Xuat();
		cout << " duong." << endl;
	}
	else
		cout << " Phan so khong duong.";

	cout << "\n Dang rut gon phan so: "; b.rutngon().Xuat();
	cout << endl;

	cout << "\n \t Kiem tra toan tu so sanh";
	if (a > b)
	{
		cout << endl << " Phan so ";
		a.Xuat();
		cout << " lon hon ";
		cout << " phan so ";
		b.Xuat();
	}
	if (a < b)
	{
		cout << endl << " Phan so ";
		a.Xuat();
		cout << " be hon ";
		cout << " phan so ";
		b.Xuat();
	}
	if (a == b)
	{
		cout << endl << " Phan so ";
		a.Xuat();
		cout << " bang hon ";
		cout << " phan so ";
		b.Xuat();
	}
	if (a != b)
	{
		cout << endl << " Phan so ";
		a.Xuat();
		cout << " khac ";
		cout << " phan so ";
		b.Xuat();
	}

	cout << endl << "*****************************" << endl;

	cout << "\n \t Kiem tra toan tu gan";
	PhanSo p;
	p = a;
	cout << "\n Phan so p sau khi gan bang phan so thu nhat: "; 
	p.Xuat();

	p += b;
	cout << "\n Gia tri sau khi phan so p thuc hien toan tu += voi ";
	b.Xuat();
	cout << ": ";
	p.rutngon().Xuat();

	p -= a;
	cout << "\n Gia tri sau khi phan so p thuc hien toan tu -= voi ";
	a.Xuat();
	cout << ": ";
	p.rutngon().Xuat();

	p *= a;
	cout << "\n Gia tri sau khi phan so p thuc hien toan tu *= voi ";
	a.Xuat();
	cout << ": ";
	p.rutngon().Xuat();

	p /= a;
	cout << "\n Gia tri sau khi phan so p thuc hien toan tu /= voi ";
	a.Xuat();
	cout << ": ";
	p.rutngon().Xuat();
	cout << endl << "*****************************" << endl;

	cout << "\n \t Kiem tra toan tu mot ngoi";
	cout << "\n (Hau to) Phan so thu nhat bang "; 
	a++; 
	a.rutngon().Xuat(); 
	cout << " va gia tri sau khi tang len mot don vi: "; 
	a.rutngon().Xuat();

	cout << "\n (Tien to) Gia tri cua sau khi tang mot don vi: "; 
	++b; 
	b.rutngon().Xuat(); 
	cout << " va bang: "; 
	b.rutngon().Xuat();

	cout << "\n (Hau to) Phan so thu nhat bang "; 
	a--; 
	a.rutngon().Xuat(); 
	cout << " va gia tri sau khi giam mot don vi: "; 
	a.rutngon().Xuat();

	cout << "\n (Tien to) Gia tri cua sau khi giam mot don vi: "; 
	--b; 
	b.rutngon().Xuat(); 
	cout << " va bang: ";
	b.rutngon().Xuat();;
	cout << endl << "*****************************" << endl;

	cout << "\ So luong phan so: " << PhanSo::LaySoLuongPS() << endl;

	cout << " Mau so cua phan so "; 
	a.Xuat();
	cout << ": " << a.LayMau() << endl;
	
	cout << " Tu so cua phan so ";
	p.rutngon().Xuat();
	cout << ": " << p.rutngon().LayTu();
	cout << endl;
	system("pause");
}