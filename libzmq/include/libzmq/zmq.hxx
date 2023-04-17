#pragma once

#include <iosfwd>
#include <string>

#include <libzmq/export.hxx>

namespace zmq
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBZMQ_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
