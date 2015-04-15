// 
//  AudioBackup
//
//  Created by Angus Maidment on 15/04/15.
//  Copyright (c) 2015 Angus Maidment. All rights reserved.
//

#include "..\include\SearchPhase.h"

#include <iostream>
#include <filesystem>



void main()
{

	std::string input_path = "C:";

	SearchPhase Searcher;

	Searcher.RecursiveFileTraverse(input_path);

	system("PAUSE");

}