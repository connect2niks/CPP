#include <iostream>
using namespace std;

int main()
{
	unsigned char buf[sizeof(int)*2];
	int *pint = new (buf) int (3);
	int *qint = new (buf+sizeof(int)) int (5);

	int *pbuf = (int *)(buf + 0);
	int *qbuf = (int *)(buf + sizeof(int));
	cout << "Buf Addr Int Addr" << pbuf << " " << pint << endl << qbuf << " " << qint << endl;

	int *rint = new int (7);
	cout << "Heap Addr 3rd Int" << endl << rint << " " << *rint << endl;

	delete rint;
}
