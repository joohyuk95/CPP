#ifndef STRING_H
#define STRING_H
#include <iostream>

class StringRep {
friend class String; // String member function can contact private member of StringRep

private:
	char *str;
	int len;
	
	int rc;
	
	StringRep(const StringRep& ); // not use
	StringRep& operator=(const StringRep& ); // not use

	StringRep(const char *str);		// not use on main, string class can contact
	~StringRep();
	
public:
	
};

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
	StringRep *rep;

public:
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
	const char *c_str() const;
	int length() const;

};

#endif
