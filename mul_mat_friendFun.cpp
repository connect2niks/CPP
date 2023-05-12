#include <iostream>
using namespace std;

class matrix;   // forward declaration

class vector
{
	int e_[3], n_;
	public:

	vector(int n) : n_(n)
	{
		for(int i=0; i<n_;++i)     // arbitrary
			e_[i] = i+1;    // Init
	}

	void clear()    // Set a zero vector
	{
		for(int i=0;i<n_;++i)
			e_[i] = 0;
	}
	void show()    // show the vector
	{
		for(int i=0; i<n_; ++i)
		cout << e_[i] << " ";
		cout << endl << endl;
	}
	friend vector prod(matrix *pm, vector *pv);
};

class matrix
{
	int e_[3][3];
        int m_, n_;

	public:

	matrix(int m, int n) : m_(m), n_(n)   // Arbitrary
	{
		for(int i = 0; i<m_; ++i)    // Init
		{
			for(int j = 0; j< n_; ++j)
			{
				e_[i][j] = i+j;
			}
		}
	}

		void show()  // Show the matrix
		{
			for(int i = 0; i<m_; ++i)
			{
				for(int j = 0; j< n_; ++j)
			     		cout<< e_[i][j] << " ";
				cout << endl;
               		 }    cout << endl;
		}
		friend vector prod(matrix *pm, vector *pv);
};

vector prod(matrix *pm, vector *pv)
{
	vector v(pm->m_);
	v.clear();
	for (int i=0; i<pm->m_; i++)
		for (int j=0; j<pm->n_; j++)
			v.e_[i] += pm->e_[i][j] * pv->e_[j];
	return v;
}

int main()
{
	matrix m(2, 3);
	vector v(3);

	vector pv = prod(&m, &v);

	m.show();
	v.show();
	pv.show();

	return 0;
}

