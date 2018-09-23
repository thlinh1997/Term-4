#include "PhanSo.h"

int UCLN(int x, int y)
{
	if (x % y == 0)
		return y;
	return UCLN(y, x % y);
}

PhanSo::PhanSo()
{
	this->m_mau = 0;
	this->m_mau = 1;
	TangSoPS();

}

PhanSo::PhanSo(int tu, int mau = 1)
{
	this->m_mau = mau;
	this->m_tu = tu;
	TangSoPS();
}

PhanSo::PhanSo(const PhanSo & p)
{
	this->m_mau = p.m_mau;
	this->m_tu = p.m_tu;
	TangSoPS();
}

PhanSo::~PhanSo()
{
	GiamSoPS();
}

bool PhanSo::kiemtraPShople()
{
	if (m_mau != 0)
		return true;
	return false;
}

bool PhanSo::kiemtraDuong()
{
	if (m_tu * m_mau > 0)
		return true;
	return false;
}

void PhanSo::Nhap()
{
	do
	{
		cout << "\n Moi ban nhap tu so: ";
		cin >> this->m_tu;
		cout << " Moi ban nhap mau so: ";
		cin >> this->m_mau;

		if (this->m_mau == 0)
			cout << "\ Mau khong hop le. ";

	} while (this->m_mau == 0);
}

void PhanSo::Xuat()
{
	cout << this->m_tu << "/" << this->m_mau;
}

PhanSo PhanSo::rutngon()
{
	PhanSo p;
	int UC = UCLN(this->m_tu, this->m_mau);
	p.m_tu = this->m_tu / UC; // tử của phân chia lấy nguyên cho ước chung
	p.m_mau = this->m_mau / UC;// mẫu của phân chia lấy nguyên cho ước chung
	return p;
}

int PhanSo::LaySoLuongPS(int i)
{
	return m_soluongPS;
}

PhanSo & PhanSo::operator=(const PhanSo & p)
{
	this->m_tu = p.m_tu;
	this->m_mau = p.m_mau;
	return *this;
}

bool PhanSo::operator<(const PhanSo & p)
{
	double kq1 = this->m_tu / this->m_mau;
	double kq2 = p.m_tu / p.m_mau;

	if (kq1 < kq2)
		return true;
	return false;
}

bool PhanSo::operator>(const PhanSo & p)
{
	double kq1 = this->m_tu / this->m_mau;
	double kq2 = p.m_tu / p.m_mau;

	if (kq1 > kq2)
		return true;
	return false;
}

bool PhanSo::operator==(const PhanSo & p)
{
	double kq1 = this->m_tu / this->m_mau;
	double kq2 = p.m_tu / p.m_mau;

	if (kq1 == kq2)
		return true;
	return false;
}

bool PhanSo::operator!=(const PhanSo & p)
{
	double kq1 = this->m_tu / this->m_mau;
	double kq2 = p.m_tu / p.m_mau;

	if (kq1 != kq2)
		return true;
	return false;
}

PhanSo & PhanSo::operator-=(const PhanSo & p)
{
	this->m_tu = this->m_tu * p.m_mau - this->m_mau * p.m_tu;
	this->m_mau = this->m_mau * p.m_mau;
	return *this;
	rutngon();
}

PhanSo & PhanSo::operator/=(const PhanSo & p)
{
	this->m_tu = this->m_tu * p.m_mau;
	this->m_mau = this->m_mau * p.m_tu;

	if (this->m_mau == 0)
	{
		this->m_tu = 0;
		this->m_mau = 1;
	}
	return *this;

}

PhanSo & PhanSo::operator+=(const PhanSo & p)
{
	this->m_tu = this->m_tu * p.m_mau + this->m_mau * p.m_tu;
	this->m_mau = this->m_mau * p.m_mau;
	return *this;
}

PhanSo & PhanSo::operator*=(const PhanSo & p)
{
	this->m_tu = this->m_tu * p.m_tu;
	this->m_mau = this->m_mau * p.m_mau;
	return *this;
}

PhanSo & PhanSo::operator++()
{
	this->m_tu += this->m_mau;
	return *this;
}

PhanSo PhanSo::operator++(int x)
{
	PhanSo t = *this;
	this->m_tu += this->m_mau;
	return t;
}

PhanSo & PhanSo::operator--()
{
	this->m_tu -= this->m_mau;
	return *this;
}

PhanSo PhanSo::operator--(int x)
{
	PhanSo temp = *this;
	this->m_tu -= this->m_mau;
	return temp;
}