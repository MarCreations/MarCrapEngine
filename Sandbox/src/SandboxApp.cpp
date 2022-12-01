#include <MarCrapEngine.h> 

class Sandbox : public MCEngine::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

MCEngine::Application* MCEngine::CreateApplication()
{
	return new Sandbox();
}
