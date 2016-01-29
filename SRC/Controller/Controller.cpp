/*
 * Controller.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jlin3312
 */

#include "Controller.h"
#include <iostream>
#include <string>
using namespace std;
Controller :: Controller()
{
	this->classCount = 21;
	string computerCount;
	this->className = "Jacob's class";

}

void Controller :: setClassCount(int classCount)
{
	this->classCount = classCount;

}

int Controller ::getClassCount()
{
	return this->classCount;
}

void Controller :: start()
{
	cout << "Welcome to my new class this week" << endl;
	cout << className << endl;

	cout << "the current value of class count is " << getClassCount() << endl;
	int newCount;

	cout << "choose a number for the class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);

	cout << "the current value of class count is " << getClassCount() << endl;
}

void Controller :: computerCount()
{
	cout << "What type of computer do you use?" << endl;



}

void Controller :: setClassName(string className)
{

this ->className = className;
(*this).className = className;
}

string Controller :: getClassName()
{
	return this->className;
}
