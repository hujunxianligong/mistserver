/// \file stream.h
/// Utilities for handling streams.

#pragma once
#include <string>
#include "socket.h"
#include "json.h"

namespace Util {
  std::string getTmpFolder();
  void sanitizeName(std::string & streamname);
  bool streamAlive(std::string & streamname);
  bool startInput(std::string streamname, std::string filename = "", bool forkFirst = true);
  JSON::Value getStreamConfig(std::string streamname);
}

