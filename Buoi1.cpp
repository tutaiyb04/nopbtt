#include <iostream>
using namespace std;

class ps{
	private:
		int ts, ms;
	public:
		void nhap()
		{
			cout << "Nhap tu so: ";
			cin >> ts;
			cout << "Nhap mau so: ";
			cin >> ms;
			while (ms == 0)
			{
				cout << "Nhap lau mau so: ";
				cin >> ms;
			}
		}
		void xuat();
};

void ps::xuat()
{
	cout << ts << "/" << ms << endl;
}

int main ()
{
	ps a;
	a.nhap();
	a.xuat();
	return 0;
}