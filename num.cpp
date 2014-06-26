#include<iostream>
#include<string>
using namespace std;
class TestClass {
	public:
//		void *operator new(size_t size);
//		void operator delete(void *p);
	private:

};/*
void* TestClass::operator new(size_t size)
{
	void *p = malloc(size);
	return p;
}
void TestClass::operator delete(void *p)
{
	free(p);
}*/
int main()
{
	TestClass *t1 = new TestClass;

	return 0;
}
