#pragma once

#include <Windows.h>
#include <iostream>

#include "client_ui.h"
#include "kiero/kiero.h"

class Client {

public:

	bool initialized = false;

	Client_UI* client_ui = nullptr;


	Client();
	~Client();


	bool init();
	void start();


};



