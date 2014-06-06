#ifndef __MDFS_HPP__
#define __MDFS_HPP__
#include <string>
using namespace std;
namespace Madoop
{
	class mdfsFile;
	class mdfsDir;
	class mdfsFS;
	
	/**
	 *  mdfsDir class. Madoop distributed file systems file.
	 */
	class mdfsFile
	{
	public:
		/** Constructor
		*   @param None
		*   @return None
		*/
		mdfsFile();

		/** Constructor
		*   @param path file path
		*   @return None
		*/
		mdfsFile(const string &path);
	};

	/**
	 *  mdfsDir class. Madoop distributed file systems directory.
	 */
	class mdfsDir
	{
	public:
		/** Constructor
		*   @param None
		*   @return None
		*/
		mdfsDir();

		/** Constructor
		*   @param path directory path
		*   @return None
		*/
		mdfsDir(const string &path);
	};

	/**
	 *  mdfsFS class. Madoop distributed file systems FS.
	 */
	class mdfsFS
	{
	public:
		/** Constructor
		*   @param None
		*   @return None
		*/
		mdfsFS();

		/** Constructor
		*   @param confPath configure's path
		*   @return None
		*/
		mdfsFS(const string &confPath);
	private:
		///
		string _confPath;
	};
}
#endif // __MDFS_HPP__
