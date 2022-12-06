#pragma once

#ifdef MCE_PLATFORM_WINDOWS

extern MarCrapEngine::Application* MarCrapEngine::CreateApplication();

int main(int argc, char** argv)
{
	MarCrapEngine::Log::Init();
	MCE_CORE_WARN("Log system initialised.");
	MCE_CLIENT_INFO("You should use another game engine you fool!");

	auto app = MarCrapEngine::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif
