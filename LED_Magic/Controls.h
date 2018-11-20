#pragma once
#include "stdafx.h"


#ifndef BUTTONS_H
#define BUTTONS_H

class Controls {

private:
	HWND parent;

public:

	Controls(HWND _parent);

	HWND SendButton;

	HWND R, G, B;




	

};

#endif