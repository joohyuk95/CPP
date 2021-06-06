#include <cstring>
#include "string.h"

StringRep::StringRep(const char *str)
{
	if (str ) {
		this->str = new char[strlen(str) + 1];
		assert(this->str );
		strcpy(this->str, str);
		this->len = strlen(str);
	} else {
		this->str = new char[1];
		assert(this->str );
		this->str[0] = '\n';
		this->len = 0;
	}
}

StringRep::~StringRep()
{
	delete [] this->str;
}


String::String(const char *str)
{
	this->rep = new StringRep(str);
	this->rep->rc = 1;
}

String::String(const String& rhs)
{
	this->rep = rhs.rep;
	++this->rep->rc;
}
