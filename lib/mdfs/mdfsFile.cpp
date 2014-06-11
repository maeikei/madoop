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

/** write mdfs file from memory.
*   @param mem content in memory.
*   @param size content size.
*   @return None.
*/
void mdfsFile::write(const void* mem,size_t size) throw (mdfsException)
{
}

/** write mdfs file from local file.
*   @param local file path.
*   @return None.
*/
void mdfsFile::write(const string &locPath) throw (mdfsException)
{
}

/** read mdfs file to memory.
*   @param mem file path.
*   @param size buffer size.
*   @return read size.
*/
size_t mdfsFile::read(const void* mem,size_t size) throw (mdfsException)
{
	size_t ret = 0;
	return ret;
}

/** read mdfs file to local file
*   @param local file path
*   @return None
*/
void mdfsFile::read(const string &locPath) throw (mdfsException)
{
}

