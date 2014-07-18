#ifndef __MDP_HPP__
#define __MDP_HPP__
#include <string>
using namespace std;



namespace Madoop
{
	class TextFile;
	class ImageFile;
	class VideoFile;
	class AudioFile;
	
	class MadoopJobContext
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		MadoopJobContext();
		
		/** @brief create a text file container
		*   @param uri resource path.
		*   @return container.
		*/
		TextFile textFile(const string &uri);
		
		/** @brief create a image file container
		*   @param uri resource path.
		*   @return container.
		*/
		ImageFile imageFile(const string &uri);

		/** @brief create a video file container
		*   @param uri resource path.
		*   @return container.
		*/
		VideoFile videoFile(const string &uri);
		
		/** @brief create a audio file container
		*   @param uri resource path.
		*   @return container.
		*/
		AudioFile audioFile(const string &uri);

	private:
	public:
	private:
	};
	
	class TextLine
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		TextLine();
		
	};

	class TextLineFilter
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		TextLineFilter();
		
		bool empty() { return false; }
	};
	
	class TextWord
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		TextWord();
		
	};

	class TextWordFilter
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		TextWordFilter();
		
		bool empty() { return false; }
	};
	
	class TextFile
	{
	public:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		TextFile(const string &uri);
		
		/** @brief filter with line
		*   @param func filter lamda.
		*   @return line set.
		*/
		template < typename Func > TextLine lines( Func func )
		{ 
			TextLine _line;
			TextLineFilter input;
			if(true == func(input))
			{
				
			}
			return _line;
		}

		/** @brief filter with word
		*   @param func filter lamda.
		*   @return word set.
		*/
		template < typename Func > TextWord words( Func func )
		{ 
			TextWord _word;
			TextWordFilter input;
			if(true == func(input))
			{
				
			}
			return _word;
		}
		
	};
	
	
	/// global var for context
	extern MadoopJobContext mc;
}

#endif // __MDP_HPP__

