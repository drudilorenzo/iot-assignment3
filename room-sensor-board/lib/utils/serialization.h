#ifndef _SERIALIZATION_H_INCLUDED
#define _SERIALIZATION_H_INCLUDED

#include "types.h";

namespace Serialize {
    class Json {
    public:
        void serialize(const RoomReading& value, char* output);
    };
}

#endif