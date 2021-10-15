class Event
{
private:
    string EventId;
    string EventName;
    string EventLocation;
    ;

public:
    void addEvent();
    void updateEvent();

    //setters

    void setEventId(int id)
    {
        EventId = id;
    }

    void setEventName(string name)
    {
        EventName = name;
    }

    void setEventLocation(string email)
    {
        EventLocation = email;
    }

    //getters
    string getEventName()
    {
        return EventName;
    }
    string getEventLocation()
    {
        return EventLocation;
    };
    string getEventIC()
    {
        return EventId;
    }

    //constructor
    Event()
    {
    }
    Event(string name, string id, string location)
    {

        EventName = name;
        EventId = id;
        EventLocation = location;
    }
};

int main(){

    client cli;
    Photographer ph;
    Supervisor sup;
    Event event;
    Admin admin;
}