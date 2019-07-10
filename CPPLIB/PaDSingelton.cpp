#include "pch.h"
#include "framework.h"

#include "PaDSingelton.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FSingelton* FSingelton::_Instance = NullPtr;

FSingelton::FSingelton() : FObject()
{

}

FSingelton::~FSingelton()
{

}

FSingelton* FSingelton::Instance()
{
	auto bInstance = (_Instance == NullPtr);
	if (!bInstance)
	{
		_Instance = new FSingelton();
	}
	return _Instance;
}