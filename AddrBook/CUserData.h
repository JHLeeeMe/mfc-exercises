#pragma once

#include <afx.h>

class CUserData : public CObject
{
public:
    CUserData(CString name, CString phone);
    CUserData(const CUserData& rhs);
public:
    CString GetName();
    CString GetPhone();
private:
    CString m_strName;
    CString m_strPhone;
};

