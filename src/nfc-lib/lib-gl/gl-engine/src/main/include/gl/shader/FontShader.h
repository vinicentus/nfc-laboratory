/*

  Copyright (c) 2021 Jose Vicente Campos Martinez - <josevcm@gmail.com>

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

*/

#ifndef UI_GL_FONTSHADER_H
#define UI_GL_FONTSHADER_H

#include <gl/engine/Colors.h>
#include <gl/engine/Vector.h>

#include <gl/shader/ObjectShader.h>

namespace gl {

class Buffer;
class Vector;
class Color;
class Assets;

class FontShader : public ObjectShader
{
      struct Impl;

   public:

      explicit FontShader(const Assets *resource);

      ~FontShader() override;

      bool load(const std::string &name) override;

      void setFontColor(const Color &color) const;

      void setFontSmooth(float factor) const;

      void setStrokeColor(const Color &color) const;

      void setStrokeWidth(float width) const;

      void setShadowColor(const Color &color) const;

      void setShadowSmooth(float factor) const;

      void setShadowOffset(const Vector &offset) const;

   private:

      Impl *self;
};

}
#endif //ANDROID_RADIO_FONTSHADER_H
