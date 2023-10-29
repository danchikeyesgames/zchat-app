#ifndef _LOG_LEGGER_HPP_
#define _LOG_LEGGER_HPP_

class Log {
    protected:
        Log() {};
    public:
        Log(Log&) = delete;

        static Log* Instance();
};

#endif  // _LOG_LEGGER_HPP_