/*==============================================================*/
/*	Mike Mayr (MMayr15), Chalie Crow (LevenBravo)	        */
/*	Team 21						        */
/*	https://github.com/CSE220Team21/Lab5		        */
/*	EpicQuotes.h                               		*/
/*==============================================================*/
#ifndef STRING_H_
#define STRING_H_
#include "Token.h"

class EpicQuotes : public Token
{

	public:
		EpicQuotes() : Token()
		{
			this->setCode(STRING);

		}
		~EpicQuotes()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};

#endif
