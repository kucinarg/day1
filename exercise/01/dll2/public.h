
#ifdef DYNAMICLIBRARYWITHIMPLIB_EXPORTS
#define EXPORT _declspec(dllexport) 
#else
#define EXPORT _declspec(dllimport) 
#endif

EXPORT double get_value(int input);
