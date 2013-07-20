#include <iostream>

#include "TestString.h"
#include "TestVector.h"
#include "TestBitset.h"
#include "TestPointer.h"
#include "TestArray.h"
#include "TestFunction.h"

using namespace std;

int main() {

	//TestString::testReadWrite();

	//TestString::testGetLine();

	//TestString::testReadChar();

	//TestString::testStringMethods();

	//TestString::testStringCopy();
	//======test vector======
	//TestVector::testInit();

	//TestVector::testIterator();

	//======test bitset=======

	//TestBitset::testInit();

	//======test pointer=======
	//TestPointer::test();

	//======test array=======
	//TestArray::test1();
	//TestArray::test2();
	//TestArray::test3();

	TestFunction *tf = new TestFunction();

	int v1 = 10, v2 = 20;

	cout << "before:\t" << "v1=" << v1 << ",v2=" << v2 << endl;

	tf->swap1(v1, v2);

	cout << "after swap1:\t" << "v1=" << v1 << ",v2=" << v2 << endl;

	int *p1=&v1;
	int *p2=&v2;

	tf->swap2(p1,p2);

	cout << "after swap2:\t" << "p1=" << *p1 << ",p2=" << *p2 << endl;

	delete tf;

	return 0;
}
