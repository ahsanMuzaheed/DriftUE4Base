/**
* This file is part of the Drift Unreal Engine Integration.
*
* Copyright (C) 2016-2017 Directive Games Limited. All Rights Reserved.
*
* Licensed under the MIT License (the "License");
*
* You may not use this file except in compliance with the License.
* You may obtain a copy of the license in the LICENSE file found at the top
* level directory of this module, and at https://mit-license.org/
*/

#pragma once


#include "ISecureStorage.h"


#if PLATFORM_ANDROID


// TODO: There's nothing secure about this implementation


class AndroidSecureStorage : public ISecureStorage
{
public:
	AndroidSecureStorage(const FString& productName, const FString& serviceName);

	bool SaveValue(const FString& key, const FString& value, bool overwrite) override;
	bool GetValue(const FString& key, FString& value) override;

private:
	FString productName_;
	FString serviceName_;
};


#endif // PLATFORM_ANDROID
