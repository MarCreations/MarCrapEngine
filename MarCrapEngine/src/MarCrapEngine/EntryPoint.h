#pragma once

#ifdef MCE_PLATFORM_WINDOWS

extern MCEngine::Application* MCEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("OH DEAR, MarCrapEngine IS RUNNING");
	auto app = MCEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif