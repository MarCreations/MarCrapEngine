#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h" 

namespace MarCrapEngine {
	class MCE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Macros to call core log messages
#define MCE_CORE_TRACE(...) ::MarCrapEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MCE_CORE_INFO(...)  ::MarCrapEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MCE_CORE_WARN(...)  ::MarCrapEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MCE_CORE_ERROR(...) ::MarCrapEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MCE_CORE_FATAL(...) ::MarCrapEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Macros to call client log messages
#define MCE_CLIENT_TRACE(...) ::MarCrapEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MCE_CLIENT_INFO(...)  ::MarCrapEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define MCE_CLIENT_WARN(...)  ::MarCrapEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MCE_CLIENT_ERROR(...) ::MarCrapEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define MCE_CLIENT_FATAL(...) ::MarCrapEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)