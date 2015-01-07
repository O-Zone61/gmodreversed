#ifndef LUACLASS_H
#define LUACLASS_H

#include "types.h"
#include "luaobject.h"

class CLuaClass;

typedef void (__cdecl *CLuaClassFunction)(void);

class CLuaClass
{
public
	vtable_start
	void *unk;
	vtable_end
	
	const char *unk01;			// @04 	| 04
	const char *unk02;			// @08	| 04
	dword unk03;				// @0C	| 04
	void *something;			// @10	| 04
	CLuaObject metatable;		// @14	| 14
	CLuaClassFunction *unk04;	// @28  | 04
};

class CLuaClasses
{
	CUtlMemory memory;			// 00   | 0C
	dword numclasses;			// 0C	| 04
	CLuaClass *classes;			// 10	| 04
};

#endif LUACLASS_H