#ifndef __MDFS_HPP__
#define __MDFS_HPP__
#include <typeinfo>
#include <exception>
#include <string>
using namespace std;


namespace Madoop
{
	class mdfsFile;
	class mdfsDir;
	class mdfsFS;
	class mdfsException;

	
	/**
	 *  mdfsException class. exceptions.
	 */
	class mdfsException :public std::exception
	{
	public:
		/** Constructor.
		*   @param None.
		*   @return None.
		*/
		mdfsException();
	};
	
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
		mdfsFile(const std::string &path);
		
		/** Constructor.
		*   @param mdf file.
		*   @return None.
		*/
		mdfsFile(const mdfsFile &mdf);

		/** write mdfs file from local memory.
		*   @param localMem content in memory.
		*   @param size content size.
		*   @return None.
		*/
		void write(const void* localMem,size_t size) throw (mdfsException);
		
		/** write mdfs file from local file.
		*   @param localPath local file path.
		*   @return None.
		*/
		void write(const std::string &localPath) throw (mdfsException);

		/** write mdfs file from mdfs file.
		*   @param mdf to be written.
		*   @return None.
		*/
		void write(const mdfsFile &mdf) throw (mdfsException);

		/** append mdfs file from local memory.
		*   @param localMem content in memory.
		*   @param size content size.
		*   @return None.
		*/
		void append(const void* localMem,size_t size) throw (mdfsException);
		
		/** append mdfs file from local file.
		*   @param localPath local file path.
		*   @return None.
		*/
		void append(const std::string &localPath) throw (mdfsException);

		/** append mdfs file from mdfs file.
		*   @param mdf to be written.
		*   @return None.
		*/
		void append(const mdfsFile &mdf) throw (mdfsException);

		
		/** read mdfs file to local memory.
		*   @param localMem file path.
		*   @param size buffer size.
		*   @return read size.
		*/
		size_t read(const void* localMem,size_t size) throw (mdfsException);
		
		/** read mdfs file to local file
		*   @param localPath local file path
		*   @return None
		*/
		void read(const std::string &localPath) throw (mdfsException);
	private:
		mdfsFS *_mdfs;
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
		mdfsDir(const std::string &path);
	private:
		mdfsFS *_mdfs;
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
		mdfsFS(const std::string &confPath);
	private:
		///
		std::string _confPath;
	};
	
}
#endif // __MDFS_HPP__
