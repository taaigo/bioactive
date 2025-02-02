#pragma once
#include "system/types.hpp"

bool Sapp5_query_init_flag(void);

bool Sapp5_query_running_flag(void);

void Sapp5_hid(Hid_info key);

void Sapp5_resume(void);

void Sapp5_suspend(void);

Result_with_string Sapp5_load_msg(std::string lang);

void Sapp5_init(bool draw);

void Sapp5_exit(bool draw);

void Sapp5_main(void);
