#include "logger.hpp"

Log* Log::Instance() {
    static Log _instance;

    return &_instance;
}