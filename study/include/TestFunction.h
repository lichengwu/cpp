/*
 * FunctionTest.h
 *
 *  Created on: Jul 20, 2013
 *      Author: zuojing
 */

#ifndef FUNCTIONTEST_H_
#define FUNCTIONTEST_H_

class TestFunction {
public:
	TestFunction();
	virtual ~TestFunction();

	void swap1(int &v1, int &v2);

	void swap2(int *&v1, int *&v2);

};

#endif /* FUNCTIONTEST_H_ */
