#pragma once

#include <stdlib.h>
#include <inttypes.h>
#include <chrono>

namespace PaD
{
	namespace Types
	{
		using FSize = size_t;

		using FPointer = decltype(nullptr);

		using FString = char*;

		using FBoolean = bool;

		using FVoid = void;

		using FNone = void;

		using FByte = char;

		using FRaw = uint8_t;

		using FEnum = size_t;

		using FClock = std::chrono::high_resolution_clock;

		using FTime = FClock::time_point;

		using FDuration = FClock::duration;

		using FReturn = decltype(EXIT_SUCCESS);


		static const decltype(0) Unknown = 0;

		static const decltype("") NullStr = "";

		static const decltype('\0') NullChr = '\0';

		static const decltype(nullptr) NullPtr = nullptr;

		static const decltype (nullptr) Null = nullptr;

		static const decltype(EXIT_SUCCESS) Success = EXIT_SUCCESS;

		static const decltype (EXIT_FAILURE) Failure = EXIT_FAILURE;

		static const decltype(false) False = false;

		static const decltype(true) True = true;



	}



}