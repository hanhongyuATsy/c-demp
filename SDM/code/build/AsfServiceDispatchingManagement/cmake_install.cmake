# Install script for directory: /mnt/d/work/git/SDM/code/AsfServiceDispatchingManagement

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/d/work/git/SDM/release")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "aarch64-poky-linux-objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin" TYPE EXECUTABLE FILES "/mnt/d/work/git/SDM/code/build/AsfServiceDispatchingManagement/AsfServiceDispatchingManagement")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement"
         OLD_RPATH "/mnt/d/work/git/SDM/code/AsfServiceDispatchingManagement/includes/libs:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "aarch64-poky-linux-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/bin/AsfServiceDispatchingManagement")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/opt/AsfServiceDispatchingManagement/etc" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES "/home/hhy/sdk/arm_sdk_1.5/toolchain/sysroots/cortexa53-crypto-poky-linux/usr/NeuSAR_ARA_Version")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/opt" TYPE DIRECTORY FILES "/mnt/d/work/git/SDM/code/../manifest/AsfServiceDispatchingManagement")
endif()

