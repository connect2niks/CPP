#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum E_TYPE  {Er, Mgr} E_TYPE;

typedef struct Engineer {char *name;} Engineer;
Engineer *InitEngineer(const char *name) 
{
	Engineer *e = (Engineer *)malloc(sizeof(Engineer));
	e->name = strdup(name);
	return e;
}

void ProcessSalaryEngineer(Engineer *e)

{
	printf("%s: Process Salary for Engineer\n", e->name);
}

typedef struct  Manager 

{
	char *name;
	Engineer *report[10];
} Manager;

Manager *InitManager(const char *name)

{
	Manager *m = (Manager *)malloc (sizeof(Manager));
	m->name = strdup(name);
	return m;
}

void ProcessSalaryManager(Manager *m)
{
	printf("%s: Process Salary for Manager\n", m->name);
}

typedef struct staff
{
	E_TYPE type;
	union
	{
		Engineer *pE;
		Manager *pM;
	};
}  staff;

int main()
{
	staff allstaff[10];	
	allstaff[0].type = Er;

	allstaff[0].pE = InitEngineer("Rohit");

	allstaff[1].type = Mgr;

	allstaff[1].pM = InitManager("Kamal");


	allstaff[2].type = Mgr;

	allstaff[2].pM = InitManager("Rajiv");

	allstaff[3].type = Er;

	allstaff[3].pE = InitEngineer("Kavita");

	allstaff[4].type = Er;

	allstaff[4].pE = InitEngineer("Shalu");

	for (int  i = 0; i<5; ++i)
	{
		E_TYPE t = allstaff[i].type;
		if(t==Er)
			ProcessSalaryEngineer(allstaff[i].pE);
		else if (t == Mgr)
			ProcessSalaryManager(allstaff[i].pM);
		else
			printf("Invalid staff type\n");
		
	}

}
