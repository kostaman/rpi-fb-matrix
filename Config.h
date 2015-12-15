// Matrix configuration parsing class declaration.
// Author: Tony DiCola
#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <vector>

#include "GridTransformer.h"

class Config {
public:
  Config(const std::string& filename);

  // Attribute accessors:
  int getDisplayWidth() const {
    return _display_width;
  }
  int getDisplayHeight() const {
    return _display_height;
  }
  int getPanelWidth() const {
    return _panel_width;
  }
  int getPanelHeight() const {
    return _panel_height;
  }
  int getChainLength() const {
    return _chain_length;
  }
  int getParallelCount() const {
    return _parallel_count;
  }
  GridTransformer getGridTransformer() const {
    return GridTransformer(_display_width, _display_height, _panel_width,
                           _panel_height, _chain_length, _panels);
  }

private:
  int _display_width,
      _display_height,
      _panel_width,
      _panel_height,
      _chain_length,
      _parallel_count;
  std::vector<GridTransformer::Panel> _panels;
};

#endif
