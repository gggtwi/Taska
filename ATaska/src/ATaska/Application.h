#pragma once
#include "Core.h"

namespace ATaska {

	class ATASKA_API Application {
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}