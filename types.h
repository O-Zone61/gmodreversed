#ifndef TYPES_H
#define TYPES_H

// classes in regular c
#define class struct
#define vtable_start 	struct {
#define vtable_end 		} *vtable;
#define virtual
#define vfunc(name)		(__thiscall *name)
#define public

// types

typedef unsigned char byte;
typedef unsigned char uchar;

typedef unsigned short ushort;

typedef unsigned long ulong;

typedef unsigned int uint;

typedef unsigned long long ulonglong;

typedef ulonglong 	uint64;
typedef ulong 		uint32;
typedef ushort 		uint16;
typedef byte 		uint8;

typedef uint64		qword;
typedef uint32		dword;
typedef uint16		word;


#endif