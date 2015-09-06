/********************************************************************************************
Author of this file is
    __________ _______   __   _____ __ __________ _____ __ __ _____ ______   __ ____   
   / _   _   // ___  /__/ /_ / ___ / // _   _   // ___ / // //____// ____ \ / //___ \  
  / / / / / // /__/_//_  __// /  /  // / / / / // /  /  //   /    / /___/_//   /__/_/  
 / / / / / // /_____  / /_ / /__/  // / / / / // /__/  // /\ \__ / /_____ / /\ \__     
/_/ /_/ /_/ \______/  \__/ \____/_//_/ /_/ /_/ \____/_//_/  \___/\______//_/  \___/    
                                                                                        
metamaker's personal webpage: http://www.goblinov.net
  
This file is provided under certain circumstances. For more details see LICENSE file in
the project's root folder.
  
PLACE UNIT DESCRIPTION HERE
 
********************************************************************************************/

#ifndef METAMAKER_BINVCS_CORE_FILESYSTEMSTAGE
#define METAMAKER_BINVCS_CORE_FILESYSTEMSTAGE

#include "IStage.h"

namespace binvcs_core
{
	class FileSystemStage : public IStage
	{

	public:
		FileSystemStage();
		virtual ~FileSystemStage();

		void Add(vector<string> files);
		vector<string> GetAddedFiles();
		vector<string> GetRemovedFiles();
		void Load(istream infile);
		void Remove(vector<string> files);
		void Save(ostream outfile);
		void Unstage();

	private:
		set<string> m_addedFiles;
		set<string> m_removedFiles;

	};

}

#endif //METAMAKER_BINVCS_CORE_FILESYSTEMSTAGE
