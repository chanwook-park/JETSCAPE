/*******************************************************************************
 * Copyright (c) The JETSCAPE Collaboration, 2017
 *
 * Modular, task-based framework
 * Intial Design: Joern Putschke, Kolja Kauder (Wayne State University)
 * For the full list of contributors see AUTHORS.

 * Report issues at https://github.com/JETSCAPE/JETSCAPE/issues
 * or via email to bugs.jetscape.org@gmail.com
 *
 * Distributed under the GNU General Public License 3.0 (GPLv3 or later).
 * See COPYING for details.
 ******************************************************************************/

// This is a general configuration for all files

#ifndef REALTYPE_H
#define REALTYPE_H
#include <tuple>

namespace Jetscape {

typedef float real;
typedef std::tuple<real, real, real> real3;
typedef std::tuple<real, real, real, real> real4;

} // end namespace Jetscape

#endif  // REALTYPE_H