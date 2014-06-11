#include "mdfs/mdfs.hpp"
using namespace std;
using namespace Madoop;

/** Constructor.
*   @param None.
*   @return None.
*/
mdfsFile::mdfsFile()
{
	
}


/** Constructor.
*   @param path file path.
*   @return None.
*/
mdfsFile::mdfsFile(const string &path)
{
}

/** Constructor.
*   @param mdf file.
*   @return None.
*/
mdfsFile::mdfsFile(const mdfsFile &mdf)
{
}



/** write mdfs file from local memory.
*   @param localMem content in memory.
*   @param size content size.
*   @return None.
*/
void mdfsFile::write(const void* localMem,size_t size) throw (mdfsException)
{
}

/** write mdfs file from local file.
*   @param localPath local file path.
*   @return None.
*/
void mdfsFile::write(const std::string &localPath) throw (mdfsException)
{
}


/** write mdfs file from mdfs file.
*   @param mdf to be written.
*   @return None.
*/
void mdfsFile::write(const mdfsFile &mdf) throw (mdfsException)
{
	
}

/** append mdfs file from local memory.
*   @param localMem content in memory.
*   @param size content size.
*   @return None.
*/
void mdfsFile::append(const void* localMem,size_t size) throw (mdfsException)
{
	
}

/** append mdfs file from local file.
*   @param localPath local file path.
*   @return None.
*/
void mdfsFile::append(const std::string &localPath) throw (mdfsException)
{
	
}

/** append mdfs file from mdfs file.
*   @param mdf to be written.
*   @return None.
*/
void mdfsFile::append(const mdfsFile &mdf) throw (mdfsException)
{
	
}



/** read mdfs file to local memory.
*   @param localMem file path.
*   @param size buffer size.
*   @return read size.
*/
size_t mdfsFile::read(const void* localMem,size_t size) throw (mdfsException)
{
	size_t ret = 0;
	return ret;
}

/** read mdfs file to local file
*   @param localPath local file path
*   @return None
*/
void mdfsFile::read(const std::string &localPath) throw (mdfsException)
{
}

