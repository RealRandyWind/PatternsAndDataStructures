#include "pch.h"
#include "framework.h"

#include "PaDAdapter.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FAdapter::FAdapter(FService* Service)
{
	ChangeService(Service);
}

FAdapter::~FAdapter()
{

}

FObject* FAdapter::Method(FData* Data)
{
	auto SpecialData = ConvertToServiceFormat(Data);
	return _Service->SpecialMethod(SpecialData);
}

FByte* FAdapter::ConvertToServiceFormat(FData* Data)
{
	return NullPtr;
}

FVoid FAdapter::ChangeService(FService* Service)
{
	_Service = Service;
}