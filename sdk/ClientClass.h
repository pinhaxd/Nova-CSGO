#pragma once

struct RecvTable;
enum class ClassId;
class IClientNetworkable;

typedef IClientNetworkable* (*CreateClientClassFn)(int entnum, int serialNum);
typedef IClientNetworkable* (*CreateEventFn)();

class ClientClass {
public:
    CreateClientClassFn m_pCreateFn;
    CreateEventFn m_pCreateEventFn;
    char* m_pNetworkName;
    RecvTable* m_pRecvTable;
    ClientClass* m_pNext;
    ClassId m_ClassID;
};