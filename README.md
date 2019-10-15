# Cpputest_stm32_keil_example
Demo Application of Cpputest (C/C++ Unit Test Framework) on STM32 uC and Keil IDE.

## Getting Started
Cpputest Unit Test Framework Links:
http://cpputest.github.io/
https://github.com/cpputest/cpputest

This workspace is generated using STM32CubeMX on STM32F746ZGTx microcontroller. User can easily adapt the Unit Test Framework to the embedded project by taking this demo workspace as a reference.

### Notes
 - All source and header file of unit test framework is collected at Middlewares\Third_Party\CPPUTEST
 - ARM Compiler version should be changed to the current version that supports C/C++ compiler. In demo workspace, ARM Compiler V6.12 is used.
 - Language C and Language C++ specs should be changed respectively to c99 and C++14 under the Options -> C/C++ (AC6)-> Language/Code Generation
 - The folder path of unit test framework should be added to Options -> C/C++ (AC6) -> Include Paths
 - C++ Exception feature is disabled as a default when user create a new workspace. The keyword (-fexceptions) should be added to Misc Controls under Options -> C/C++ (AC6)
 