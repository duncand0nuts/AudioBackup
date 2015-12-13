//
//  SearchPhase.cpp
//  AudioBackup
//
//  Created by Angus Maidment on 15/04/15.
//  Copyright (c) 2015 Angus Maidment. All rights reserved.
//

#include "..\include\SearchPhase.h"

#include <filesystem> 
#include <iostream>

SearchPhase::SearchPhase() 
{

}

SearchPhase::~SearchPhase()
{

}

void SearchPhase::RecursiveFileTraverse(std::string input_path)
{
	std::tr2::sys::path initial_path = input_path;
	//std::tr2::sys::path current_path;

	std::tr2::sys::recursive_directory_iterator recursive_dir_iterator(initial_path);
	std::tr2::sys::recursive_directory_iterator iterator_end; 

	for (; recursive_dir_iterator != iterator_end; recursive_dir_iterator++)
	{
		//current_path = recursive_dir_iterator;
		//SearchPhase::RecursiveFileTraverse();
		std::cout << recursive_dir_iterator->path() << "\n";
	}

}
