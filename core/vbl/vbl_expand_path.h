#ifndef vbl_expand_path_h_
#define vbl_expand_path_h_
#ifdef __GNUC__
#pragma interface
#endif
// This is vxl/vbl/vbl_expand_path.h

//:
// \file
// \brief Contains two functions to compute expanded form of a given path.
//
// Given a path in the file system, compute an expanded form.
// An expanded path is one which does not
//  - involve any symbolic links
//  - involve any . or ..
//  - begin with a ~
//  - contain any trailing or repeated /
//
// The result of each query is cached so that a subsequent
// query on the same path will be much faster and will not
// involve any system calls.
//
// \author fsm@robots.ox.ac.uk
// \verbatim
// Modifications
// PDA (Manchester) 21/03/2001: Tidied up the documentation
// Peter Vanroose   27/05/2001: Corrected the documentation
// \endverbatim

#include <vcl_string.h>

//: Expand given path.
vcl_string vbl_expand_path/*cached*/(vcl_string path);

//: Expand given path.
vcl_string vbl_expand_path_uncached (vcl_string path);

#endif // vbl_expand_path_h_
