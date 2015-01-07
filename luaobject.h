#ifndef LUAOBJECT_H
#define LUAOBJECT_H

#include "types.h"

typedef class CLuaObject ILuaObject;
typedef class CLuaInterface ILuaInterface;


class CLuaObject
{
public
	vtable_start
	virtual void *vfunc(Set)(CLuaObject *this, ILuaObject *);
	virtual void *vfunc(SetFromStack)(CLuaObject *this, int);
	virtual void *vfunc(UnReference)(CLuaObject *this, void);
	virtual void *vfunc(GetType)(CLuaObject *this, void);
	virtual void *vfunc(GetString)(CLuaObject *this, void);
	virtual void *vfunc(GetFloat)(CLuaObject *this, void);
	virtual void *vfunc(GetInt)(CLuaObject *this, void);
	virtual void *vfunc(GetUserData)(CLuaObject *this, void);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,ILuaObject *);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,float);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,bool);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,char  const*);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,int (*)(lua_State *));
	virtual void *vfunc(GetMemberBool)(CLuaObject *this, char  const*,bool);
	virtual void *vfunc(GetMemberInt)(CLuaObject *this, char  const*,int);
	virtual void *vfunc(GetMemberFloat)(CLuaObject *this, char  const*,float);
	virtual void *vfunc(GetMemberStr)(CLuaObject *this, char  const*,char  const*);
	virtual void *vfunc(GetMemberUserData)(CLuaObject *this, char  const*,void *);
	virtual void *vfunc(GetMemberUserData)(CLuaObject *this, float,void *);
	virtual void *vfunc(GetMember)(CLuaObject *this, char  const*,ILuaObject *);
	virtual void *vfunc(GetMember)(CLuaObject *this, ILuaObject *,ILuaObject *);
	virtual void *vfunc(SetMetaTable)(CLuaObject *this, ILuaObject *);
	virtual void *vfunc(SetUserData)(CLuaObject *this, void *);
	virtual void *vfunc(Push)(CLuaObject *this, void);
	virtual void *vfunc(isNil)(CLuaObject *this, void);
	virtual void *vfunc(isTable)(CLuaObject *this, void);
	virtual void *vfunc(isString)(CLuaObject *this, void);
	virtual void *vfunc(isNumber)(CLuaObject *this, void);
	virtual void *vfunc(isFunction)(CLuaObject *this, void);
	virtual void *vfunc(isUserData)(CLuaObject *this, void);
	virtual void *vfunc(GetMember)(CLuaObject *this, float,ILuaObject *);
	virtual void *vfunc(Remove_Me_1)(CLuaObject *this, char  const*,void *);
	virtual void *vfunc(SetMember)(CLuaObject *this, float);
	virtual void *vfunc(SetMember)(CLuaObject *this, float,ILuaObject *);
	virtual void *vfunc(SetMember)(CLuaObject *this, float,float);
	virtual void *vfunc(SetMember)(CLuaObject *this, float,bool);
	virtual void *vfunc(SetMember)(CLuaObject *this, float,char  const*);
	virtual void *vfunc(SetMember)(CLuaObject *this, float,int (*)(lua_State *));
	virtual void *vfunc(GetMemberStr)(CLuaObject *this, float,char  const*);
	virtual void *vfunc(SetMember)(CLuaObject *this, ILuaObject *,ILuaObject *);
	virtual void *vfunc(GetBool)(CLuaObject *this, void);
	virtual void *vfunc(PushMemberFast)(CLuaObject *this, int);
	virtual void *vfunc(SetMemberFast)(CLuaObject *this, int,int);
	virtual void *vfunc(SetFloat)(CLuaObject *this, float);
	virtual void *vfunc(SetString)(CLuaObject *this, char  const*);
	virtual void *vfunc(GetDouble)(CLuaObject *this, void);
	virtual void *vfunc(SetMember_FixKey)(CLuaObject *this, char  const*,float);
	virtual void *vfunc(SetMember_FixKey)(CLuaObject *this, char  const*,char  const*);
	virtual void *vfunc(SetMember_FixKey)(CLuaObject *this, char  const*,ILuaObject *);
	virtual void *vfunc(isBool)(CLuaObject *this, void);
	virtual void *vfunc(SetMemberDouble)(CLuaObject *this, char  const*,double);
	virtual void *vfunc(SetMemberNil)(CLuaObject *this, char  const*);
	virtual void *vfunc(SetMemberNil)(CLuaObject *this, float);
	virtual void *vfunc(Debug_IsUnreferenced)(CLuaObject *this, void);
	virtual void *vfunc(Init)(CLuaObject *this, void);
	virtual void *vfunc(SetFromGlobal)(CLuaObject *this, char  const*);
	virtual void *vfunc(SetMember)(CLuaObject *this, char  const*,ulonglong);
	virtual void *vfunc(SetReference)(CLuaObject *this, int);
	virtual void *vfunc(RemoveMember)(CLuaObject *this, char  const*);
	virtual void *vfunc(RemoveMember)(CLuaObject *this, float);
	virtual void *vfunc(MemberIsNil)(CLuaObject *this, char  const*);
	virtual void *vfunc(SetMemberDouble)(CLuaObject *this, float,double);
	virtual void *vfunc(GetMemberDouble)(CLuaObject *this, char  const*,double);
	vtable_end
	
	bool isuserdata;
	dword type;
	dword reference;
	CLuaInterface *m_pInterface;
};


#endif