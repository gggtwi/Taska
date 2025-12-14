#pragma once

#ifdef AT_PLATFORM_WINDOWS

extern ATaska::Application* ATaska::CreateApplication();

int main(int argc, char** argv) {

	auto app = ATaska::CreateApplication();
	app->Run(); // 修正：使用 -> 调用指针成员函数
	delete app;
}

#endif