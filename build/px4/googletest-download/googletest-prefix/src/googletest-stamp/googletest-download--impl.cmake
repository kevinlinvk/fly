set(command "/usr/bin/cmake;-P;/home/fly/fly/build/px4/googletest-download/googletest-prefix/src/googletest-stamp/download-googletest.cmake")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/usr/bin/cmake;-P;/home/fly/fly/build/px4/googletest-download/googletest-prefix/src/googletest-stamp/verify-googletest.cmake")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
set(command "/usr/bin/cmake;-P;/home/fly/fly/build/px4/googletest-download/googletest-prefix/src/googletest-stamp/extract-googletest.cmake")

execute_process(COMMAND ${command} RESULT_VARIABLE result)
if(result)
  set(msg "Command failed (${result}):\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  message(FATAL_ERROR "${msg}")
endif()
