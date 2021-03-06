// Mobile Utils Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2016 gameDNA studio. All Rights Reserved.

#pragma once


class IMobileUtilsInterface
{
public:
	/**
	* Check if internet connection is available on a device
	*
	* @return - true if connection is available
	*/
	virtual bool CheckInternetConnection() = 0;

	/**
	* Check if Google Play Services are available on a device
	*
	* @return - true if Google Play Services are available
	*/
	virtual bool CheckGooglePlayServices() = 0;
};
