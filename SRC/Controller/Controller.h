/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: jlin3312
 */
#include <string>
#ifndef CONTROLLER_CONTROLLER_H_
#define CONTROLLER_CONTROLLER_H_
using namespace std;
class Controller
{
private:
	int classCount;
	string className;

public:
	Controller();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
	void computerCount();

};




#endif /* CONTROLLER_CONTROLLER_H_ */
