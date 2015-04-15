//
//  SearchPhase.h
//  AudioBackup
//
//  Created by Angus Maidment on 15/04/15.
//  Copyright (c) 2015 Angus Maidment. All rights reserved.
//

/*
The SearchPhase class performs a recursive traversal of the target directory
*/

#include <filesystem>
#include <iostream>


#ifndef __SearchPhase_H__
#define __SearchPhase_H__

class SearchPhase
{
public:
	SearchPhase();  // constructor
	~SearchPhase();  // destructor

	void RecursiveFileTraverse(std::string input_path);
private:
};


#endif