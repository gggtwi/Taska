#include <ATaska.h>

class Sandbox : public ATaska::Application {

public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

ATaska::Application* ATaska::CreateApplication() {
	return new Sandbox();
}