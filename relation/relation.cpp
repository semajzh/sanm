#include "relation.h"
#include "relation100.h"
#include "relation101.h"
#include "relation181.h"
#include "relation200.h"
#include "relation201.h"
#include "relation202.h"
#include "relation203.h"
#include "relation204.h"
#include "relation205.h"
#include "relation300.h"
#include "relation301.h"
#include "relation401.h"
#include "relation402.h"
#include "relation403.h"
#include "relation404.h"
#include "relation502.h"
#include "relation503.h"
#include "log/logger.h"
#include "ui/name.h"

Relation::Relation()
{

}

Relation::~Relation()
{

}

bool Relation::run(Ground* , int )
{
    return true;
}

QSharedPointer<Relation> Relation::getRelation(int id)
{
    QSharedPointer<Relation> relation = 0;
    switch (id)
    {
    case 100: {
        unsigned char ch[] = {0xe5, 0xa8, 0x81, 0xe6, 0xad, 0xa6, 0xe9, 0x9b, 0x84, 0xe5, 0xa7, 0xbf};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation100>::create();
    } break;
    case 101: {
        unsigned char ch[] = {0xe4, 0xba, 0x94, 0xe5, 0xad, 0x90, 0xe8, 0x89, 0xaf, 0xe5, 0xb0, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation101>::create();
    } break;
    case 181: {
        unsigned char ch[] = {0xe6, 0x9e, 0xad, 0xe9, 0xb8, 0xbe, 0xe5, 0x90, 0x8c, 0xe8, 0xb0, 0x8b};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation181>::create();
    } break;
    case 200: {
        unsigned char ch[] = {0xe4, 0xbb, 0x81, 0xe4, 0xb9, 0x89, 0xe6, 0x98, 0xad, 0xe7, 0x83, 0x88};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation200>::create();
    } break;
    case 201: {
        unsigned char ch[] = {0xe8, 0x96, 0xaa, 0xe7, 0x81, 0xab, 0xe7, 0x9b, 0xb8, 0xe4, 0xbc, 0xa0};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation201>::create();
    } break;
    case 202: {
        unsigned char ch[] = {0xe4, 0xba, 0x94, 0xe8, 0x99, 0x8e, 0xe4, 0xb8, 0x8a, 0xe5, 0xb0, 0x86};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation202>::create();
    } break;
    case 203: {
        unsigned char ch[] = {0xe6, 0x89, 0x8d, 0xe5, 0xa0, 0xaa, 0xe7, 0x9b, 0xb8, 0xe9, 0x85, 0x8d};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation203>::create();
    } break;
    case 204: {
        unsigned char ch[] = {0xe8, 0xa5, 0xbf, 0xe5, 0x87, 0x89, 0xe9, 0x93, 0x81, 0xe9, 0xaa, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation204>::create();
    } break;
    case 205: {
        unsigned char ch[] = {0xe7, 0xbc, 0x98, 0xe7, 0xb3, 0xbb, 0xe7, 0x9a, 0x87, 0xe6, 0x80, 0x9d};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation205>::create();
    } break;
    case 300: {
        unsigned char ch[] = {0xe6, 0x89, 0xbf, 0xe4, 0xb8, 0x9a, 0xe5, 0x88, 0xb6, 0xe8, 0xa1, 0xa1};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation300>::create();
    } break;
    case 301: {
        unsigned char ch[] = {0xe6, 0x9f, 0xb1, 0xe7, 0x9f, 0xb3, 0xe4, 0xb9, 0x8b, 0xe8, 0x87, 0xa3};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation301>::create();
    } break;
    case 401: {
        unsigned char ch[] = {0xe9, 0x81, 0x93, 0xe6, 0xb3, 0x95, 0xe8, 0x87, 0xaa, 0xe7, 0x84, 0xb6};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation401>::create();
    } break;
    case 402: {
        unsigned char ch[] = {0xe4, 0xbb, 0x99, 0xe4, 0xba, 0xba, 0xe6, 0x89, 0xb6, 0xe9, 0xa1, 0xb6};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation402>::create();
    } break;
    case 403: {
        unsigned char ch[] = {0xe7, 0xa7, 0x8b, 0xe6, 0xb3, 0xa2, 0xe9, 0x80, 0x81, 0xe6, 0x83, 0x85};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation403>::create();
    } break;
    case 404: {
        unsigned char ch[] = {0xe5, 0x8d, 0x97, 0xe7, 0x96, 0x86, 0xe9, 0x94, 0x8b, 0xe5, 0xbd, 0xbb};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation404>::create();
    } break;
    case 502: {
        unsigned char ch[] = {0xe8, 0xa5, 0xbf, 0xe5, 0x87, 0x89, 0xe9, 0x93, 0x81, 0xe9, 0xaa, 0x91};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation502>::create();
    } break;
    case 503: {
        unsigned char ch[] = {0xe8, 0xa5, 0xbf, 0xe5, 0xb7, 0x9e, 0xe9, 0x9b, 0x84, 0xe9, 0xaa, 0x8f};
        Logger::H().printname(ch, sizeof(ch), id);
        relation = QSharedPointer<Relation503>::create();
    } break;

    default:
        break;
    }

    Name::relationName(id, relation);
    return relation;
}
