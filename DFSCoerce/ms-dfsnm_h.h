

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ms-dfsnm.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Ddfsnm_h_h__
#define __ms2Ddfsnm_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __netdfs_INTERFACE_DEFINED__
#define __netdfs_INTERFACE_DEFINED__

/* interface netdfs */
/* [unique][ms_union][version][uuid] */ 

typedef DWORD NET_API_STATUS;

typedef WCHAR *NETDFS_SERVER_OR_DOMAIN_HANDLE;

typedef /* [v1_enum] */ 
enum _DFS_TARGET_PRIORITY_CLASS
    {
        DfsInvalidPriorityClass	= -1,
        DfsSiteCostNormalPriorityClass	= 0,
        DfsGlobalHighPriorityClass	= 1,
        DfsSiteCostHighPriorityClass	= 2,
        DfsSiteCostLowPriorityClass	= 3,
        DfsGlobalLowPriorityClass	= 4
    } 	DFS_TARGET_PRIORITY_CLASS;

typedef struct _DFS_TARGET_PRIORITY
    {
    DFS_TARGET_PRIORITY_CLASS TargetPriorityClass;
    unsigned short TargetPriorityRank;
    unsigned short Reserved;
    } 	DFS_TARGET_PRIORITY;

typedef struct _DFS_STORAGE_INFO
    {
    unsigned long State;
    /* [string] */ WCHAR *ServerName;
    /* [string] */ WCHAR *ShareName;
    } 	DFS_STORAGE_INFO;

typedef struct _DFS_STORAGE_INFO_1
    {
    unsigned long State;
    /* [string] */ WCHAR *ServerName;
    /* [string] */ WCHAR *ShareName;
    DFS_TARGET_PRIORITY TargetPriority;
    } 	DFS_STORAGE_INFO_1;

typedef struct _DFS_STORAGE_INFO_1 *PDFS_STORAGE_INFO_1;

typedef struct _DFS_STORAGE_INFO_1 *LPDFS_STORAGE_INFO_1;

typedef struct _DFSM_ROOT_LIST_ENTRY
    {
    /* [unique][string] */ WCHAR *ServerShare;
    } 	DFSM_ROOT_LIST_ENTRY;

typedef struct _DFSM_ROOT_LIST
    {
    DWORD cEntries;
    /* [size_is] */ DFSM_ROOT_LIST_ENTRY Entry[ 1 ];
    } 	DFSM_ROOT_LIST;

typedef /* [public][public] */ 
enum __MIDL_netdfs_0001
    {
        DFS_NAMESPACE_VERSION_ORIGIN_COMBINED	= 0,
        DFS_NAMESPACE_VERSION_ORIGIN_SERVER	= ( DFS_NAMESPACE_VERSION_ORIGIN_COMBINED + 1 ) ,
        DFS_NAMESPACE_VERSION_ORIGIN_DOMAIN	= ( DFS_NAMESPACE_VERSION_ORIGIN_SERVER + 1 ) 
    } 	DFS_NAMESPACE_VERSION_ORIGIN;

typedef struct _DFS_SUPPORTED_NAMESPACE_VERSION_INFO
    {
    unsigned long DomainDfsMajorVersion;
    unsigned long DomainDfsMinorVersion;
    ULONGLONG DomainDfsCapabilities;
    unsigned long StandaloneDfsMajorVersion;
    unsigned long StandaloneDfsMinorVersion;
    ULONGLONG StandaloneDfsCapabilities;
    } 	DFS_SUPPORTED_NAMESPACE_VERSION_INFO;

typedef struct _DFS_SUPPORTED_NAMESPACE_VERSION_INFO *PDFS_SUPPORTED_NAMESPACE_VERSION_INFO;

typedef struct _DFS_INFO_1
    {
    /* [string] */ WCHAR *EntryPath;
    } 	DFS_INFO_1;

typedef struct _DFS_INFO_2
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    DWORD NumberOfStorages;
    } 	DFS_INFO_2;

typedef struct _DFS_INFO_3
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    DWORD NumberOfStorages;
    /* [size_is] */ DFS_STORAGE_INFO *Storage;
    } 	DFS_INFO_3;

typedef struct _DFS_INFO_4
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    GUID Guid;
    DWORD NumberOfStorages;
    /* [size_is] */ DFS_STORAGE_INFO *Storage;
    } 	DFS_INFO_4;

typedef struct _DFS_INFO_5
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    GUID Guid;
    unsigned long PropertyFlags;
    unsigned long MetadataSize;
    DWORD NumberOfStorages;
    } 	DFS_INFO_5;

typedef struct _DFS_INFO_6
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    GUID Guid;
    unsigned long PropertyFlags;
    unsigned long MetadataSize;
    DWORD NumberOfStorages;
    /* [size_is] */ DFS_STORAGE_INFO_1 *Storage;
    } 	DFS_INFO_6;

typedef struct _DFS_INFO_7
    {
    GUID GenerationGuid;
    } 	DFS_INFO_7;

typedef struct _DFS_INFO_8
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    GUID Guid;
    unsigned long PropertyFlags;
    unsigned long MetadataSize;
    ULONG SecurityDescriptorLength;
    /* [size_is] */ PUCHAR pSecurityDescriptor;
    DWORD NumberOfStorages;
    } 	DFS_INFO_8;

typedef struct _DFS_INFO_8 *LPDFS_INFO_8;

typedef struct _DFS_INFO_9
    {
    /* [string] */ WCHAR *EntryPath;
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    GUID Guid;
    unsigned long PropertyFlags;
    unsigned long MetadataSize;
    ULONG SecurityDescriptorLength;
    /* [size_is] */ PUCHAR pSecurityDescriptor;
    DWORD NumberOfStorages;
    /* [size_is] */ LPDFS_STORAGE_INFO_1 Storage;
    } 	DFS_INFO_9;

typedef struct _DFS_INFO_9 *LPDFS_INFO_9;

typedef struct _DFS_INFO_50
    {
    unsigned long NamespaceMajorVersion;
    unsigned long NamespaceMinorVersion;
    unsigned __int64 NamespaceCapabilities;
    } 	DFS_INFO_50;

typedef struct _DFS_INFO_100
    {
    /* [string] */ WCHAR *Comment;
    } 	DFS_INFO_100;

typedef struct _DFS_INFO_101
    {
    unsigned long State;
    } 	DFS_INFO_101;

typedef struct _DFS_INFO_102
    {
    unsigned long Timeout;
    } 	DFS_INFO_102;

typedef struct _DFS_INFO_103
    {
    unsigned long PropertyFlagMask;
    unsigned long PropertyFlags;
    } 	DFS_INFO_103;

typedef struct _DFS_INFO_104
    {
    DFS_TARGET_PRIORITY TargetPriority;
    } 	DFS_INFO_104;

typedef struct _DFS_INFO_105
    {
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    unsigned long PropertyFlagMask;
    unsigned long PropertyFlags;
    } 	DFS_INFO_105;

typedef struct _DFS_INFO_106
    {
    DWORD State;
    DFS_TARGET_PRIORITY TargetPriority;
    } 	DFS_INFO_106;

typedef struct _DFS_INFO_107
    {
    /* [string] */ WCHAR *Comment;
    DWORD State;
    unsigned long Timeout;
    unsigned long PropertyFlagMask;
    unsigned long PropertyFlags;
    ULONG SecurityDescriptorLength;
    /* [size_is] */ PUCHAR pSecurityDescriptor;
    } 	DFS_INFO_107;

typedef struct _DFS_INFO_150
    {
    ULONG SecurityDescriptorLength;
    /* [size_is] */ PUCHAR pSecurityDescriptor;
    } 	DFS_INFO_150;

typedef struct _DFS_INFO_200
    {
    /* [string] */ WCHAR *FtDfsName;
    } 	DFS_INFO_200;

typedef struct _DFS_INFO_300
    {
    DWORD Flags;
    /* [string] */ WCHAR *DfsName;
    } 	DFS_INFO_300;

typedef /* [switch_type] */ union _DFS_INFO_STRUCT
    {
    /* [case()] */ DFS_INFO_1 *DfsInfo1;
    /* [case()] */ DFS_INFO_2 *DfsInfo2;
    /* [case()] */ DFS_INFO_3 *DfsInfo3;
    /* [case()] */ DFS_INFO_4 *DfsInfo4;
    /* [case()] */ DFS_INFO_5 *DfsInfo5;
    /* [case()] */ DFS_INFO_6 *DfsInfo6;
    /* [case()] */ DFS_INFO_7 *DfsInfo7;
    /* [case()] */ DFS_INFO_8 *DfsInfo8;
    /* [case()] */ DFS_INFO_9 *DfsInfo9;
    /* [case()] */ DFS_INFO_50 *DfsInfo50;
    /* [case()] */ DFS_INFO_100 *DfsInfo100;
    /* [case()] */ DFS_INFO_101 *DfsInfo101;
    /* [case()] */ DFS_INFO_102 *DfsInfo102;
    /* [case()] */ DFS_INFO_103 *DfsInfo103;
    /* [case()] */ DFS_INFO_104 *DfsInfo104;
    /* [case()] */ DFS_INFO_105 *DfsInfo105;
    /* [case()] */ DFS_INFO_106 *DfsInfo106;
    /* [case()] */ DFS_INFO_107 *DfsInfo107;
    /* [case()] */ DFS_INFO_150 *DfsInfo150;
    /* [default] */  /* Empty union arm */ 
    } 	DFS_INFO_STRUCT;

typedef struct _DFS_INFO_1_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_1 *Buffer;
    } 	DFS_INFO_1_CONTAINER;

typedef struct _DFS_INFO_2_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_2 *Buffer;
    } 	DFS_INFO_2_CONTAINER;

typedef struct _DFS_INFO_3_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_3 *Buffer;
    } 	DFS_INFO_3_CONTAINER;

typedef struct _DFS_INFO_4_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_4 *Buffer;
    } 	DFS_INFO_4_CONTAINER;

typedef struct _DFS_INFO_5_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_5 *Buffer;
    } 	DFS_INFO_5_CONTAINER;

typedef struct _DFS_INFO_6_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_6 *Buffer;
    } 	DFS_INFO_6_CONTAINER;

typedef struct _DFS_INFO_8_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPDFS_INFO_8 Buffer;
    } 	DFS_INFO_8_CONTAINER;

typedef struct _DFS_INFO_8_CONTAINER *LPDFS_INFO_8_CONTAINER;

typedef struct _DFS_INFO_9_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPDFS_INFO_9 Buffer;
    } 	DFS_INFO_9_CONTAINER;

typedef struct _DFS_INFO_9_CONTAINER *LPDFS_INFO_9_CONTAINER;

typedef struct _DFS_INFO_200_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_200 *Buffer;
    } 	DFS_INFO_200_CONTAINER;

typedef struct _DFS_INFO_300_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ DFS_INFO_300 *Buffer;
    } 	DFS_INFO_300_CONTAINER;

typedef struct _DFS_INFO_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ DFS_INFO_1_CONTAINER *DfsInfo1Container;
        /* [case()] */ DFS_INFO_2_CONTAINER *DfsInfo2Container;
        /* [case()] */ DFS_INFO_3_CONTAINER *DfsInfo3Container;
        /* [case()] */ DFS_INFO_4_CONTAINER *DfsInfo4Container;
        /* [case()] */ DFS_INFO_5_CONTAINER *DfsInfo5Container;
        /* [case()] */ DFS_INFO_6_CONTAINER *DfsInfo6Container;
        /* [case()] */ DFS_INFO_8_CONTAINER *DfsInfo8Container;
        /* [case()] */ DFS_INFO_9_CONTAINER *DfsInfo9Container;
        /* [case()] */ DFS_INFO_200_CONTAINER *DfsInfo200Container;
        /* [case()] */ DFS_INFO_300_CONTAINER *DfsInfo300Container;
        } 	DfsInfoContainer;
    } 	DFS_INFO_ENUM_STRUCT;

DWORD NetrDfsManagerGetVersion( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetrDfsAdd( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [string][unique][in] */ WCHAR *Comment,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetrDfsRemove( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][unique][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName);

NET_API_STATUS NetrDfsSetInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][unique][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ DFS_INFO_STRUCT *DfsInfo);

NET_API_STATUS NetrDfsGetInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][unique][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ DFS_INFO_STRUCT *DfsInfo);

NET_API_STATUS NetrDfsEnum( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD Level,
    /* [in] */ DWORD PrefMaxLen,
    /* [unique][out][in] */ DFS_INFO_ENUM_STRUCT *DfsEnum,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrDfsMove( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][in] */ WCHAR *NewDfsEntryPath,
    /* [in] */ unsigned long Flags);

void Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum8NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetrDfsAddFtRoot( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *DcName,
    /* [string][in] */ WCHAR *RootShare,
    /* [string][in] */ WCHAR *FtDfsName,
    /* [string][in] */ WCHAR *Comment,
    /* [string][in] */ WCHAR *ConfigDN,
    /* [in] */ BOOLEAN NewFtDfs,
    /* [in] */ DWORD ApiFlags,
    /* [unique][out][in] */ DFSM_ROOT_LIST **ppRootList);

NET_API_STATUS NetrDfsRemoveFtRoot( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *DcName,
    /* [string][in] */ WCHAR *RootShare,
    /* [string][in] */ WCHAR *FtDfsName,
    /* [in] */ DWORD ApiFlags,
    /* [unique][out][in] */ DFSM_ROOT_LIST **ppRootList);

NET_API_STATUS NetrDfsAddStdRoot( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *RootShare,
    /* [string][in] */ WCHAR *Comment,
    /* [in] */ DWORD ApiFlags);

NET_API_STATUS NetrDfsRemoveStdRoot( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *RootShare,
    /* [in] */ DWORD ApiFlags);

NET_API_STATUS NetrDfsManagerInitialize( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetrDfsAddStdRootForced( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *RootShare,
    /* [string][in] */ WCHAR *Comment,
    /* [string][in] */ WCHAR *Share);

NET_API_STATUS NetrDfsGetDcAddress( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][out][in] */ WCHAR **DcName,
    /* [out][in] */ BOOLEAN *IsRoot,
    /* [out][in] */ unsigned long *Timeout);

NET_API_STATUS NetrDfsSetDcAddress( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][in] */ WCHAR *DcName,
    /* [in] */ DWORD Timeout,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetrDfsFlushFtTable( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DcName,
    /* [string][in] */ WCHAR *wszFtDfsName);

NET_API_STATUS NetrDfsAdd2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][in] */ WCHAR *DcName,
    /* [string][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [string][unique][in] */ WCHAR *Comment,
    /* [in] */ DWORD Flags,
    /* [unique][out][in] */ DFSM_ROOT_LIST **ppRootList);

NET_API_STATUS NetrDfsRemove2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][in] */ WCHAR *DcName,
    /* [string][unique][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [unique][out][in] */ DFSM_ROOT_LIST **ppRootList);

NET_API_STATUS NetrDfsEnumEx( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [in] */ DWORD Level,
    /* [in] */ DWORD PrefMaxLen,
    /* [unique][out][in] */ DFS_INFO_ENUM_STRUCT *DfsEnum,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrDfsSetInfo2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ WCHAR *DfsEntryPath,
    /* [string][in] */ WCHAR *DcName,
    /* [string][unique][in] */ WCHAR *ServerName,
    /* [string][unique][in] */ WCHAR *ShareName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ DFS_INFO_STRUCT *pDfsInfo,
    /* [unique][out][in] */ DFSM_ROOT_LIST **ppRootList);

NET_API_STATUS NetrDfsAddRootTarget( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ LPWSTR pDfsPath,
    /* [string][unique][in] */ LPWSTR pTargetPath,
    /* [in] */ ULONG MajorVersion,
    /* [string][unique][in] */ LPWSTR pComment,
    /* [in] */ BOOLEAN NewNamespace,
    /* [in] */ ULONG Flags);

NET_API_STATUS NetrDfsRemoveRootTarget( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ LPWSTR pDfsPath,
    /* [string][unique][in] */ LPWSTR pTargetPath,
    /* [in] */ ULONG Flags);

NET_API_STATUS NetrDfsGetSupportedNamespaceVersion( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DFS_NAMESPACE_VERSION_ORIGIN Origin,
    /* [string][unique][in] */ NETDFS_SERVER_OR_DOMAIN_HANDLE pName,
    /* [out] */ PDFS_SUPPORTED_NAMESPACE_VERSION_INFO pVersionInfo);



extern RPC_IF_HANDLE netdfs_v3_0_c_ifspec;
extern RPC_IF_HANDLE netdfs_v3_0_s_ifspec;
#endif /* __netdfs_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


