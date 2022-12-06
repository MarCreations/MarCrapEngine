#include <MarCrapEngine.h> 

class Sandbox : public MarCrapEngine::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

MarCrapEngine::Application* MarCrapEngine::CreateApplication()
{
	return new Sandbox();
}
