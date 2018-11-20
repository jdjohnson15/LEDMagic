#pragma once
#ifndef SERIAL_H
#define SERIAL_H

#define ARDUINO_WAIT_TIME 2000
#define MAX_DATA_LENGTH 255

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

class Serial
{
private:
	HANDLE handler;
	bool connected;
	COMSTAT status;
	DWORD errors;
public:
	Serial(const char *portName);
	~Serial();

	int read(char *buffer, unsigned int buf_size);
	bool write(BYTE b);
	bool write(BYTE r, BYTE g, BYTE b);
	bool write(BYTE *buffer, unsigned int buf_size);
	bool isConnected();
};

#endif // SERIAL_H