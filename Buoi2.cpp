#include<iostream>
using namespace std;

class gv{
	private:
		char ht[30];
		int tuoi;
		char bc[15];
		char cn[20];
		float bl;
	public:
		void nhap(){
			cout << "Nhap ho ten giao vien: ";
			fflush(stdin);
			cin.getline(ht,30);
			cout << "Nhap tuoi: ";
			cin >> this -> tuoi;
			cout << "Nhap bang cap: ";
			fflush(stdin);
			cin.getline(bc,15);
			cout << "Nhap chuyen nganh: ";
			fflush(stdin);
			cin.getline(cn,20);
			cout << "Nhap bac luong: ";
			cin >> this -> bl;
		}	
		void xuat()
		{
			cout << "Ho va ten cua giao vien: " << ht << endl
		 		 << "Tuoi: " << this -> tuoi << endl
		 		 << "Bang cap: " << bc << endl
		 		 << "Chuyen nganh: " << cn << endl
		 		 << "Bac luong: " << this -> bl << endl
		 		 << "Luong co ban: " << this -> luongCB() << endl;
		}
		float luongCB(){
			return this -> bl * 610;
		}
};

void nhapdsgv(gv a[], int &n)
{
	cout << "[.]Nhap danh sach " << n << " giao vien." << endl;
	for (int i=0; i<n; i++)
	{
		cout << "[.]Nhap nguoi thu " << i+1 << endl;
		a[i].nhap();
	}
}

void xuatdsgv(gv a[], int &n)
{
	cout << "[.]Xuat danh sach " << n << " giao vien." << endl;
	for (int i=0; i<n; i++)
	{
		cout << "[.]Xuat nguoi thu " << i+1 << endl;
		a[i].xuat();
	}
}

void xuatdsbehon2000(gv a[], int &n)
{
	cout << "[.]Danh sach cac giao vien co tien luong < 2000: " << endl;
	for (int i=0; i<n; i++)
	{
		if (a[i].luongCB()<2000)
		{
			a[i].xuat();
		}
	}
}
int main()
{
	int n;
	cout << "Nhap so giao vien trong danh sach: "; cin >> n;
	gv a[n];
	nhapdsgv(a,n);
	xuatdsgv(a,n);
	xuatdsbehon2000(a,n);
	return 0;
}