/* An Airline Management System is a managerial software which targets to control all operations of an airline.
   Airlines provide transport services for their passengers.
   They carry or hire aircraft for this purpose.
   All operations of an airline company are controlled by their airline management system.

   This system involves 
    * the scheduling of flights,
    * air ticket reservations,
    * flight cancellations,
    * customer support, and staff management.
    * Daily flights updates can also be retrieved by using the system.
    
    System Requirements#
    We will focus on the following set of requirements while designing the Airline Management System:
    * Customers should be able to search for flights for a given date and source/destination airport.
    * Customers should be able to reserve a ticket for any scheduled flight. Customers can also build a multi-flight itinerary.
    * Users of the system can check flight schedules, their departure time, available seats, arrival time, and other flight details.
    * Customers can make reservations for multiple passengers under one itinerary.
    * Only the admin of the system can add new aircrafts, flights, and flight schedules. Admin can cancel any pre-scheduled flight (all stakeholders will be notified).
    * Customers can cancel their reservation and itinerary.
    * The system should be able to handle the assignment of pilots and crew members to flights.
    * The system should be able to handle payments for reservations.
    * The system should be able to send notifications to customers whenever a reservation is made/modified or there is an update for their flights.
*/

class AirlineManagementSystem {

};

class Airline {
    
    private:
    AddFlight( Airplane, Airport Start, Airport End, )
};

class Airplane {
    
};

class Time {
   Date date_;
   time GMT_;
};

class TimeConverter{
   time convertISTToGMT( time ist) {

   }
};


class Flight {
   Airplane a;
   Fare f;
};

class Airport {

};

class Fare {

};

class BaseFare: private Fare {
    Fare* base_;
};

class TimeSurcharge: private Fare {

};


class HolidayCharge: private Fare {

};

class Discount: private Fare {

};


enum Status {
   Active_,
   Coming_,
   Completed_,
   Cancelled_
};

class Booking {
  
};

class Passanger {
    
};

class Notification {
   Booking b_;
};

class EmailNotificaton {

};

class SMSNotification {

};

enum PayementType {
    Success_,
    Pending_,
    Failed_,
};

class Payement {

};


