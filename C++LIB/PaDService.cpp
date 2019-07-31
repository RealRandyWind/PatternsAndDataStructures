#include "pch.h"
#include "framework.h"

#include "PaDService.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FService::FService()
{

}

FService::~FService()
{

}

FObject* FService::SpecialMethod(FByte* Bytes)
{
	return NullPtr;
}

FObject* FService::Method(FData* Data)
{
	return NullPtr;
}