/**
 * @file  LogPrint.h
 * @brief 
 * @author 
 * @version 1.0
 * @date 2023-01-29
 *
 * @par 日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2023-01-29  <td>1.0     <td>hhy <td>新建
 * </table>
 */
#ifndef LOG_PRINT_H
#define LOG_PRINT_H
#include <cstdio>
#include <string.h>


#include <stdio.h>
#include <iostream>
#define NeuSar 1

#ifdef NeuSar
#include <midware/log_wrapper/logging_wrapper.h>
#include "midware/log_wrapper/logging_wrapper.h"
#endif

namespace sdm {

#ifdef NeuSar

#define filename(x) ((strrchr((x), '/') != 0 ) ? (strrchr((x), '/') + 1) : (x))

#define PrintLog(fmt, ...)    middleware::logwrapper::PrintLog("SERL", 4, fmt,##__VA_ARGS__)

#define InfoLog PrintLog


#define TraceLog(format, ...)    \
    do\
    {\
        char buffer[1024];\
        snprintf(buffer, sizeof(buffer), "%s %d %s", filename(__FILE__), __LINE__, __PRETTY_FUNCTION__);\
            ::middleware::logwrapper::PrintWithLocation("SERL", 6, buffer, (format), ##__VA_ARGS__);\
    } while(0)


#define ErrorLog(format, ...)    \
    do\
    {\
        char buffer[1024];\
        snprintf(buffer, sizeof(buffer), "%s %d %s", filename(__FILE__), __LINE__, __PRETTY_FUNCTION__);\
            ::middleware::logwrapper::PrintWithLocation("SERL", 2, buffer, (format), ##__VA_ARGS__);\
    } while(0)
#else

#define PrintLog(fmt, ...) printf("%-20.20s(%3d)-<%-10.20s>: " fmt, filename(__FILE__), __LINE__, __FUNCTION__, ##__VA_ARGS__);
#define TraceLog PrintLog
#define ErrorLog PrintLog

#endif


    
} // sdm

#endif