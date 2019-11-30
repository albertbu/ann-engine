#pragma once
#ifdef ANNENGINE_EXPORTS
#define ANNENGINE_API __declspec(dllexport)
#else
#define ANNENGINE_API __declspec(dllimport)
#endif

