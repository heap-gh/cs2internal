
#include "client.h"


Client::Client() {





}



Client::~Client() {



}



bool Client::init() {

	// get settings from file


	this->client_ui = new Client_UI();
	this->client_ui->show = true;


	initialized = true;

	return true;

}


void Client::start() {

	std::cout << "client started\n";

	while (true) {

		if (GetAsyncKeyState(VK_NUMPAD1) & 1) {
			this->client_ui->show = !this->client_ui->show;
		}
		
		if (GetAsyncKeyState(VK_NUMPAD0) & 1) {

			std::cout << "client ended\n";
			FreeConsole();
			kiero::shutdown();

			break;

		}

		Sleep(5);

	}


}