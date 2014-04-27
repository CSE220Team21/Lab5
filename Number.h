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

			sprintf(line, "    >> %-16s %s (number)\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};
