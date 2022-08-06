/**
 * *        Author: Mohamed Morsy
 * *   Create Time: 2022-08-06 23:51:02
 * *   Modified by: Mohamed Morsy
 * * Modified time: 2022-08-07 00:58:45
 * *     File Name: /lib/application.h
 * *   Description: Application header file.
 * *       License: MIT
 */

#ifndef LIB_APPLICATION_H_
#define LIB_APPLICATION_H_

#include <chrono>
#include <iostream>
#include <string>
#include <thread>

namespace application {

/**
 * @brief
 *
 */
class MyApplication {
public:
  /*! \brief  Constructor */
  MyApplication() = delete;

  /*! \brief Constructor */
  MyApplication(std::string name, std::chrono::milliseconds cycle, int counter);

  /*! \brief  Copy Constructor */
  MyApplication(const MyApplication &) = default;

  /*! \brief  Move Constructor */
  MyApplication(MyApplication &&) = default;

  /*! \brief  Copy Assignment */
  MyApplication &operator=(const MyApplication &) = default;

  /*! \brief  Move Assignment */
  MyApplication &operator=(MyApplication &&) = default;

  /*! \brief  Destructor */
  ~MyApplication() = default;

  /*! \brief  Run function */
  int run();

private:
  /*! \brief brief application name */
  std::string application_name_;

  /*! \brief brief Cycle duration */
  std::chrono::milliseconds application_cycle_;

  /*! \brief brief cycles counter */
  int application_cycles_counter_;

  bool initialization_success_{false};

}; // class MyApplication
} // namespace application

#endif // LIB_APPLICATION_H_