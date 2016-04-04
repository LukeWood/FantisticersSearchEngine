#ifndef PARSER_H
#define PARSER_H
class Parser
{
	public:
		processDocument(string);
		void removeStopWord(string&);
		stemWords();
		maintainFrequency();
	private:
		string stopword[];
		
	
};
#endif
