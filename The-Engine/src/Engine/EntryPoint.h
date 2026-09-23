#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS
	extern Engine::Application* Engine::CreateApplication();

	int main(int argc, char** argv) {
		Engine::Log::init();
		
		ENGINE_CORE_ERROR("Error on line 41!");
		int a=3;
		ENGINE_INFO("Solved var={0}",a);


		auto app = Engine::CreateApplication();
		app->Run();
		delete app;
	}
#endif // ENGINE_PLATFORM_WINDOWS
