/*
 * gl_image_handler.h - GL image handler class
 *
 *  Copyright (c) 2018 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Yinhang Liu <yinhangx.liu@intel.com>
 */

#ifndef XCAM_GL_IMAGE_HANDLER_H
#define XCAM_GL_IMAGE_HANDLER_H

#include <image_handler.h>
#include <gles/gles_std.h>

namespace XCam {

class GLImageHandler
    : public ImageHandler
{
public:
    explicit GLImageHandler (const char* name);
    ~GLImageHandler ();

protected:
    virtual void execute_done (const SmartPtr<ImageHandler::Parameters> &param, XCamReturn err);

private:
    SmartPtr<BufferPool> create_allocator ();

private:
    XCAM_DEAD_COPY (GLImageHandler);

private:
};

}

#endif // XCAM_GL_IMAGE_HANDLER_H
