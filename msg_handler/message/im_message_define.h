#ifndef __IM_MESSAGE_DEFINE_H__
#define __IM_MESSAGE_DEFINE_H__

#ifndef TIMESTAMP_20150101000000
#define TIMESTAMP_20150101000000 1420041600
#endif

#ifndef TIMESTAMP_GAP
#define TIMESTAMP_GAP 30
#endif

enum MESSAGE_STATE
{
    INIT_STATE = 0,
    AUTH_STATE,
    MSG_STATE,
};

#endif
