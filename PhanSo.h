#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class PhanSo
{
private:
	int m_tu, m_mau;
	static int m_soluongPS;
public:
	PhanSo();
	PhanSo(int, int);
	PhanSo(const PhanSo &p);
	~PhanSo();
	bool kiemtraPShople();
	bool kiemtraDuong();
	void Nhap();
	void Xuat();
	PhanSo rutngon();

	static void TangSoPS(int i = 1)
	{
		PhanSo::m_soluongPS = PhanSo::m_soluongPS + i;
	}
	static void GiamSoPS(int i = 1)
	{
		PhanSo::m_soluongPS = PhanSo::m_soluongPS - i;
	}
	static int LaySoLuongPS(int i = 1);
	inline int LayMau() const
	{
		return m_mau;
	}
	inline int LayTu() const
	{
		return m_tu;
	}
	
	bool operator < (const PhanSo &p);
	bool operator > (const PhanSo &p);
	bool operator == (const PhanSo &p);
	bool operator != (const PhanSo &p);
	
	PhanSo& operator = (const PhanSo &p);
	PhanSo& operator -=(const PhanSo &p);
	PhanSo& operator /=(const PhanSo &p);
	PhanSo& operator +=(const PhanSo &p);
	PhanSo& operator *=(const PhanSo &p);

	PhanSo& operator ++();
	PhanSo operator ++(int x);
	PhanSo& operator --();
	PhanSo operator --(int x);
};
