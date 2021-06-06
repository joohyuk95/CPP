#ifndef STRING_H
#define STRING_H

class StringRep {
friend class String;

private:
	
	int rc;
	
	StringRep(const StringRep& );
	StringRep& operator=(const StringRep& );

	StringRep(const char *str);
	~StringRep();
		
public:

};

class String {
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
