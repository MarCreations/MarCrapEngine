#pragma once

#include "Core.h"

namespace MarCrapEngine {

	class MCE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run(); 
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
