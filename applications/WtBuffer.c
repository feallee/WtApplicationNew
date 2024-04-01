#include "WtBuffer.h"

void WtBuffer_Initialize(WtBuffer_Type *buffer, char *pool, uint16_t capacity)
{
	buffer->Capacity = (capacity > 32768 || capacity == 0) ? 8 : capacity;
	buffer->Pool = pool;
	buffer->ReadMirror = buffer->ReadIndex = buffer->WriteMirror = buffer->WriteIndex = 0;
}

bool WtBuffer_PutChar(WtBuffer_Type *buffer, char value)
{
	if (buffer->WriteIndex == buffer->ReadIndex && buffer->WriteMirror != buffer->ReadMirror)
	{
		return false;
	}
	else
	{
		buffer->Pool[buffer->WriteIndex] = value;
		if (buffer->WriteIndex == buffer->Capacity - 1)
		{
			buffer->WriteIndex = 0;
			buffer->WriteMirror = ~buffer->WriteMirror;
		}
		else
		{
			buffer->WriteIndex++;
		}
		return true;
	}
}

bool WtBuffer_GetChar(WtBuffer_Type *buffer, char *value)
{
	if (buffer->WriteIndex == buffer->ReadIndex && buffer->WriteMirror == buffer->ReadMirror)
	{
		return false;
	}
	else
	{
		*value = buffer->Pool[buffer->ReadIndex];
		if (buffer->ReadIndex == buffer->Capacity - 1)
		{
			buffer->ReadIndex = 0;
			buffer->ReadMirror = ~buffer->ReadMirror;
		}
		else
		{
			buffer->ReadIndex++;
		}
		return true;
	}
}