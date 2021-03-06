/***************************************************************************
 *   Copyright (C) 2013 by Torsten Flammiger                               *
 *   github@netfg.net                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>

// for getHomeDir()
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>
#include <sys/stat.h>

using namespace std;

class FileUtils
{
public:
    FileUtils();
    static bool fileExists(const std::string& file);
    static bool fileRemove(const std::string& file);
    static bool dirExists(const std::string& dir);
    static bool putFileContent(const std::string& path, const std::string &content);
    static bool getFileContent(const std::string& path, std::string *buffer);
    static std::string getHomeDir();
};

#endif // FILEUTILS_H
