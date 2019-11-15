#include "PowerOnSelfTest.h"

PowerOnSelfTest* PowerOnSelfTest::_instance = NULL;

StateInterface* PowerOnSelfTest::Instance()
{
	if (_instance == NULL)
	{
		_instance = new PowerOnSelfTest();
	}
	return _instance;
}