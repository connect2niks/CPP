#include <iostream>
using namespace std;

class printjob
{
	int npages_;   // pages in current job
	static int ntraypages_;    // pages in a tray
	static int njobs_;   // print jobs executing

	public:

	printjob(int np): npages_(np)
	{
		++njobs_;
		cout << "Printing: " << np << "Pages " << endl;
		ntraypages_ = ntraypages_ - np;
	}   // jobs startd

	~printjob()   
	{
		--njobs_;
	}   // job done

	static int getjob()
	{
		return njobs_;
	}

	static int checkpages()
	{
		return ntraypages_;
	}
	
	static void loadpages(int np)
	{
		ntraypages_ += np;
	}
};

int printjob::ntraypages_ = 500;   // Defination and initialization  -- load paper 
int printjob::njobs_ = 0;    // Defination and initialization   -- no job to start with

int main()
{
	cout << "Jobs = " << printjob::getjob() << endl;
	cout << "Pages = " << printjob::checkpages() << endl;
	printjob job1(10);
        cout << "Jobs = " << printjob::getjob() << endl;
        cout << "Pages = " << printjob::checkpages() << endl;
	
	{
		printjob job1(30), job2(20);   // Different job1 in block space
		cout << "Jobs = " << printjob::getjob() << endl;
       		cout << "Pages = " << printjob::checkpages() << endl;
		printjob::loadpages(100);    // load 100 more pages
	}

        cout << "Jobs = " << printjob::getjob() << endl;
        cout << "Pages = " << printjob::checkpages() << endl;
	return 0;
}
