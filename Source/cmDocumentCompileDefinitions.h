/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2000-2011 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef cmDocumentCompileDefinitions_h
#define cmDocumentCompileDefinitions_h

#define CM_DOCUMENT_COMPILE_DEFINITIONS_DISCLAIMER \
  "Disclaimer: Most native build tools have poor support for escaping " \
  "certain values.  CMake has work-arounds for many cases but some "    \
  "values may just not be possible to pass correctly.  If a value "     \
  "does not seem to be escaped correctly, do not attempt to "           \
  "work-around the problem by adding escape sequences to the value.  "  \
  "Your work-around may break in a future version of CMake that "       \
  "has improved escape support.  Instead consider defining the macro "  \
  "in a (configured) header file.  Then report the limitation."

#endif
