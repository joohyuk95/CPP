#ifndef STRING_H
#define STRING_H
#include <iostream>

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);
private:
	char *str;
	int len;
	
	String(const char *str, bool );
	
	void set_str(const char *str);	// helper function or tool function
public:
/*	String() {}
	String(const String& rhs) {  member copy  }
	~String() {}
	String& operator=(const String& rhs) { member copy }
	String* operator&() { return this; }
	const String* operator&() const { return this; }
*/
	//String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);
	String& operator=(const char *str);
	
	bool operator==(const String& rhs) const;
	
	const String operator+(const String& rhs) const;
	
	const char *c_str() const;
	int length() const;
	
	// set X
};

#endif
