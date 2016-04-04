#ifndef INDEXHANDLER_H
#define INDEXHANDLER_H
class IndexHandler
{
	public:
		Index readIndex();
		void writeIndex();
		string searchIndex(string request);
		void insertOtherData();
	private:	
		Index index;
};
#endif
