#include "stdafx.h"
#include "Controls.h"


Controls::Controls(HWND _parent) {
	parent = _parent;
	RECT rect;
	LPRECT lpRect = &rect;
	GetWindowRect(parent, lpRect);

	long width = lpRect->right - lpRect->left;
	long height = lpRect->bottom - lpRect->top;
	SendButton = CreateWindow(
		L"BUTTON",  // Predefined class; Unicode assumed 
		L"SEND",      // Button text 
		WS_TABSTOP | WS_VISIBLE | WS_CHILD ,  // Styles 
		width / 2 - width / 12,         // x position 
		height * 3 /5,         // y position 
		width / 6,        // Button width
		height / 6,        // Button height
		parent,		// Parent window
		NULL,       // No menu.
		(HINSTANCE)GetWindowLong(parent, GWL_HINSTANCE),
		NULL);      // Pointer not needed.

	R = CreateWindow(
		L"Edit",  // Predefined class; Unicode assumed 
		L"red",      // Button text 
		WS_BORDER | WS_TABSTOP | WS_VISIBLE | WS_CHILD,  // Styles 
		width/4,         // x position 
		height/2,         // y position 
		500,        // Button width
		200,        // Button height
		parent,		// Parent window
		NULL,       // No menu.
		(HINSTANCE)GetWindowLong(parent, GWL_HINSTANCE),
		NULL);      // Pointer not needed.


}
