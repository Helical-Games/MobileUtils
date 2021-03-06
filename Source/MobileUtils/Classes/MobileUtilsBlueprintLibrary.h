// Mobile Utils Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2016 gameDNA studio. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MobileUtilsBlueprintLibrary.generated.h"


UCLASS()
class MOBILEUTILS_API UMobileUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/**
	* Check if internet connection is available on a device
	*
	* @return - true if connection is available
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = MobileUtils)
	static bool CheckInternetConnection();

	/**
	* Check if Google Play Services are available on a device
	*
	* @return - true if Google Play Services are available
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = MobileUtils)
	static bool CheckGooglePlayServices();
};
