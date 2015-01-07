#ifndef LUALIBRARY_H
#define LUALIBRARY_H

#include "types.h"
#include "utlmemory.h"

class CLuaUser;
class CLuaLibrary;
struct lua_State;

class CLuaUser 
{
public
	vtable_start
	virtual void vfunc(Unk01)(class CLuaUser *this);
	vtable_end
	
	bool usinglua;	// @04  off | x04  size
};

typedef int (__cdecl *CLuaLibraryFunction)(lua_State *L);

class CLuaLibrary 
{
public
	vtable_start
	virtual void vfunc(Unk01)(class CLuaLibrary *this);
	vtable_end
	
	//inheritance from CLuaUser
	bool usinglua;		// @04  off | x04  size
	
	//new members
	const char *libname;// @08  off | x04  
	//CUtlMemory
	CUtlMemory memory;	// @0C  off | x0C  size
	dword numfunctions;	// @18  off | x04  size
	CLuaLibraryFunction *functions;	// @1C  off | x04  size
};


#endif