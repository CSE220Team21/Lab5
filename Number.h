/*==============================================================*/
/*	Mike Mayr (MMayr15), Chalie Crow (LevenBravo)		*/
/*	Team 21							*/
/*	https://github.com/CSE220Team21/Lab5			*/
/*	Number.h						*/
/*==============================================================*/
#ifndef INTEGER_H_
#define INTEGER_H_
#include "Token.h"

class Number : public Token
{

	public:
		Number() : Token()
		{
			this->setCode(NUMBER);
			this->setTokenString("");
		}
		~Number()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (integer)\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};


#endif
