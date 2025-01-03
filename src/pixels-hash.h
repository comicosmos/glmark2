/*
 *
 * Copyright (C) 2024 comicosmos (cixtech.com)
 *
 * This file is part of the glmark2 OpenGL (ES) 2.0 benchmark.
 *
 * glmark2 is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * glmark2 is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * glmark2.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *  comicosmos <comicosmos@163.com> cixtech.com
 * 
 */

#ifndef PIXELS_HASH_H_
#define PIXELS_HASH_H_

#include "gl-headers.h"
#include <iostream>
#include <memory>
#include "libxxhash/xxhash.h"

class PixelHash{

public:
    static std::unique_ptr<char[]> pixelsBuffer;
    static void calcXxhash(std::string, int);
    static bool allocatePixelsBuffer();
private:
    static size_t buffersize;

};
#endif /* PIXELS_HASH_H_ */
