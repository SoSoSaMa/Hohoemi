//
// Created by leibi on 2021/2/18.
//

#pragma once

#include <iostream>
#include <sstream>

class Stock {
public:
    Stock(float open_value, float close_value, float highest_value, float lowest_value, uint32_t today_timestamp):
            _open_value(open_value),
            _close_value(close_value),
            _highest_value(highest_value),
            _lowest_value(lowest_value),
            _today_timestamp(today_timestamp)
    {
    }
    ~Stock() = default;

    std::string description();

private:
    // Basic Information
    float _open_value;
    float _close_value;
    float _highest_value;
    float _lowest_value;
    uint32_t _today_timestamp;
    std::string _today_calender_format;
};
