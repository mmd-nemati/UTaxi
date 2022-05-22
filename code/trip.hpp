#ifndef __TRIP_H__
#define __TRIP_H__

#include <string>
#include "location.hpp"
#include "member.hpp"
#include "../defines.hpp"

class Trip
{
    public:
        Trip() {};
        Trip(Member* _passenger, Location* _origin, Location* _destination, int _id);
        // to implement

    private:
        Member* passenger;
        Location* origin;
        Location* destination;
        std::string status;
        int trip_id;
};

#endif /* __TRIP_H__ */