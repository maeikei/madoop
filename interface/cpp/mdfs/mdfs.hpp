#ifndef __MDFS_HPP__
#define __MDFS_HPP__
#include <string>
using namespace std;
namespace Madoop
{
	class mdfsFile;
	class mdfsDir;
	class mdfsFS;
	class mdfsException;
	
	/**
	 *  mdfsDir class. Madoop distributed file systems file.
	 */
	class mdfsFile
	{
	public:
		/** Constructor.
		*   @param None.
		*   @return None.
		*/
		mdfsFile();

		/** Constructor.
		*   @param path file path.
		*   @return None.
		*/
		mdfsFile(const string &path);
		
		/** write mdfs file from memory.
		*   @param mem content in memory.
		*   @param size content size.
		*   @return None.
		*/
		void write(const void* mem,size_t size) throw (mdfsException);
		
		/** write mdfs file from local file.
		*   @param local file path.
		*   @return None.
		*/
		void write(const string &locPath) throw (mdfsException);

		/** read mdfs file to memory.
		*   @param mem file path.
		*   @param size buffer size.
		*   @return read size.
		*/
		size_t read(const void* mem,size_t size) throw (mdfsException);
		
		/** read mdfs file to local file
		*   @param local file path
		*   @return None
		*/
		void read(const string &locPath) throw (mdfsException);
	};

	/**
	 *  mdfsDir class. Madoop distributed file systems directory.
	 */
	class mdfsDir
	{
	public:
		/** Constructor.
		*   @param None.
		*   @return None.
		*/
		mdfsDir();

		/** Constructor.
		*   @param path directory path.
		*   @return None.
		*/
		mdfsDir(const string &path);
	};

	/**
	 *  mdfsFS class. Madoop distributed file systems FS.
	 */
	class mdfsFS
	{
	public:
		/** Constructor.
		*   @param None.
		*   @return None.
		*/
		mdfsFS();

		/** Constructor.
		*   @param confPath configure's path.
		*   @return None.
		*/
		mdfsFS(const string &confPath);
	private:
		///
		string _confPath;
	};
}
#endif // __MDFS_HPP__
