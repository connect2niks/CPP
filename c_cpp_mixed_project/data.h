#ifndef __DATA_H
#define __DATA_H
#ifdef __cplusplus

class Data
{
	int d_;
	public:
	Data(int = 0);
	~Data();
	int get();
	void set(int);
};

#else
typedef struct Data Data;

#endif

#ifdef __cplusplus
extern "C"
{
#endif
	extern Data* c_create_object(int);
	extern void c_access_object(Data*);
	extern void c_release_object(Data*);
	extern Data* call_create(int);
	extern int call_get(Data * data);
	extern void call_set(Data* data, int d);
	extern void call_release(Data*);

#ifdef __cplusplus
}
#endif
#endif  /* __DATA_H */

