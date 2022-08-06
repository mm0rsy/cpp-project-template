/**
 * *        Author: Mohamed Morsy
 * *   Create Time: 2022-08-06 23:50:52
 * *   Modified by: Mohamed Morsy
 * * Modified time: 2022-08-07 00:59:10
 * *     File Name: /src/application.cpp
 * *   Description: Application source code/ implementation.
 * *       License: MIT
 */

#include "../lib/application.h"

namespace application {

MyApplication::MyApplication(std::string name, std::chrono::milliseconds cycle,
                             int counter)
    : application_name_(name), application_cycle_(cycle),
      application_cycles_counter_(counter) {
  initialization_success_ = true;
}

int MyApplication::run() {
  int ret_val{EXIT_SUCCESS};

  if (initialization_success_) {
    while (true) {
      std::this_thread::sleep_for(application_cycle_);
      std::cout << "The application is on cycle #"
                << application_cycles_counter_ << std::endl;

      application_cycles_counter_++;
    }
  } else {
    ret_val = EXIT_FAILURE;
  }
  return ret_val;
}

} // namespace application
