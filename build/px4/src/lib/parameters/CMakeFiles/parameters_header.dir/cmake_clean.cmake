file(REMOVE_RECURSE
  "../../../generated_params/module_params.c"
  "../../../generated_params/serial_params.c"
  "../../../parameters.json"
  "../../../parameters.json.xz"
  "../../../parameters.xml"
  "CMakeFiles/parameters_header"
  "px4_parameters.hpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/parameters_header.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
