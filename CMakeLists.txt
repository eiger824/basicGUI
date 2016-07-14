cmake_minimum_required(VERSION 3.2)
project(basic_GUI)
find_package(Qt4 REQUIRED)



INCLUDE(${QT_USE_FILE})

# add definitions
ADD_DEFINITIONS(
  ${QT_DEFINITIONS} 
)

include_directories(
  src
  include
  )

set(HEADERS
  include/mygui.hpp
  include/keyvalues.hpp
  )

set(SOURCES
  src/mygui.cpp
  )

qt4_wrap_cpp(HEADERS_MOC ${HEADERS})

add_executable(mygui
  src/main.cpp
  ${SOURCES}
  ${HEADERS_MOC}
  )

target_link_libraries(mygui
  Qt4::QtGui
  Qt4::QtXml
  )
