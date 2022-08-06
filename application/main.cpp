/**
 * *        Author: Mohamed Morsy
 * *   Create Time: 2022-08-06 22:02:33
 * *   Modified by: Mohamed Morsy
 * * Modified time: 2022-08-07 01:02:24
 * *     File Name: main.cpp
 * *   Description: A main file for a sample application.
 * *       License: MIT
 */

#include "lib/application.h"

/**
 * \brief   main function
 *
 * \return int
 */
int main() {
  // todo: adding signal handler
  return ::application::MyApplication(std::string{"MyApp"},
                                      std::chrono::milliseconds(500), 0)
      .run();
}
