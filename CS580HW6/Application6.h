// Application4.h: interface for the Application4 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_Application6_H__43A7FA9C_6CD6_4A79_9567_2354BFEFAFFB__INCLUDED_)
#define AFX_Application6_H__43A7FA9C_6CD6_4A79_9567_2354BFEFAFFB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Application.h"

class Application6 : public Application  
{
public:
	Application6();
	virtual ~Application6();
	
	int	Initialize();
	virtual int Render(); 
	int Clean();

private:
	int combineDisplays();
};

#endif // !defined(AFX_Application6_H__43A7FA9C_6CD6_4A79_9567_2354BFEFAFFB__INCLUDED_)
