// ******************************************************************
// * 
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : xboxkrnl.h
// *
// * note : XBox Kernel Declarations
// *
// ******************************************************************
#ifndef XBOXKRNL_H
#define XBOXKRNL_H

#if defined(__cplusplus)
extern "C"
{
#endif

#ifndef _XBOXKRNL_INTERNAL_
#define NTSYSAPI __declspec( dllimport )
#else
#define NTSYSAPI __declspec( dllexport )
#endif

// ******************************************************************
// * Null
// ******************************************************************
#ifndef	NULL
#define NULL                0
#endif

// ******************************************************************
// * Basic types
// ******************************************************************
typedef char                CHAR;
typedef char*               PCHAR;
typedef void                VOID;
typedef void               *PVOID;
typedef unsigned char       BYTE;
typedef BYTE                BOOLEAN;
typedef	unsigned int		DWORD;
typedef unsigned long       ULONG;
typedef unsigned long      *PULONG;
typedef unsigned long       PHYSICAL_ADDRESS;
typedef long               *LONG_PTR;
typedef	unsigned short		WORD;
typedef unsigned long       SIZE_T;

// ******************************************************************
// * NTAPI
// ******************************************************************
#define NTAPI __stdcall
#define CDECL __cdecl

// ******************************************************************
// * Documentation purposes only
// ******************************************************************
#define EXPORTNUM(a)
#define UNALIGNED
#define OPTIONAL
#define IN
#define OUT

// ******************************************************************
// * DECLSPEC_NORETURN
// ******************************************************************
#define DECLSPEC_NORETURN __declspec( noreturn )

// ******************************************************************
// * Debug
// ******************************************************************
#include "dbg.h"

// ******************************************************************
// * Executive
// ******************************************************************
#include "ex.h"

// ******************************************************************
// * Hardware Abstraction Layer
// ******************************************************************
#include "hal.h"

// ******************************************************************
// * I/O Manager
// ******************************************************************
#include "io.h"

// ******************************************************************
// * Kernel
// ******************************************************************
#include "kernel.h"

// ******************************************************************
// * Memory Manager
// ******************************************************************
#include "mm.h"

// ******************************************************************
// * NT
// ******************************************************************
#include "nt.h"

// ******************************************************************
// * Object Manager
// ******************************************************************
#include "ob.h"

// ******************************************************************
// * Process Structure
// ******************************************************************
#include "ps.h"

// ******************************************************************
// * Run-time Library
// ******************************************************************
#include "rtl.h"

// ******************************************************************
// * XBox
// ******************************************************************
#include "xbox.h"

#if defined(__cplusplus)
}
#endif

#endif


