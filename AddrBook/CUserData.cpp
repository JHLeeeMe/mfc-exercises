#include "pch.h"
#include "CUserData.h"

CUserData::CUserData(CString name, CString phone)
    : m_strName(name)
    , m_strPhone(phone)
{};

CUserData::CUserData(const CUserData& rhs)
{
    m_strName = rhs.m_strName;
    m_strPhone = rhs.m_strPhone;
}

CString CUserData::GetName()
{
    return m_strName;
}

CString CUserData::GetPhone()
{
    return m_strPhone;
}
