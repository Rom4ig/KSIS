// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once
//#define _CRT_NONSTDC_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <winsock2.h>
#include <iphlpapi.h>
#include <iostream>
#include <icmpapi.h> 
#include <conio.h> 
#pragma comment(lib, "iphlpapi.lib") 
#pragma comment(lib, "ws2_32.lib")

using namespace std;

#define IP_STATUS_BASE 11000 
#define IP_SUCCESS 0 
#define IP_DEST_NET_UNREACHABLE 11002 
#define IP_DEST_HOST_UNREACHABLE 11003 
#define IP_DEST_PROT_UNREACHABLE 11004 
#define IP_DEST_PORT_UNREACHABLE 11005 
#define IP_REQ_TIMED_OUT 11010 
#define IP_BAD_REQ 11011 
#define IP_BAD_ROUTE 11012 
#define IP_TTL_EXPIRED_TRANSIT 11013



// TODO: ”становите здесь ссылки на дополнительные заголовки, требующиес€ дл€ программы
