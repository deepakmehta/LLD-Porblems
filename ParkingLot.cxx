/*
 A parking lot or car park is a dedicated cleared area that is intended for parking vehicles.
 In most countries where cars are a major mode of transportation, parking lots are a feature of every city and suburban area.
 Shopping malls, sports stadiums, megachurches, and similar venues often feature parking lots over large areas.

 System Requirements#
    * We will focus on the following set of requirements while designing the parking lot:
    * The parking lot should have multiple floors where customers can park their cars.
    * The parking lot should have multiple entry and exit points.
    * Customers can collect a parking ticket from the entry points and can pay the parking fee at the exit points on their way out.
    * Customers can pay the tickets at the automated exit panel or to the parking attendant.
    * Customers can pay via both cash and credit cards.
    * Customers should also be able to pay the parking fee at the customer’s info portal on each floor. If the customer has paid at the info portal, they don’t have to pay at the exit.
    * The system should not allow more vehicles than the maximum capacity of the parking lot. If the parking is full, the system should be able to show a message at the entrance panel and on the parking display board on the ground floor.
    * Each parking floor will have many parking spots. The system should support multiple types of parking spots such as Compact, Large, Handicapped, Motorcycle, etc.
    * The Parking lot should have some parking spots specified for electric cars. These spots should have an electric panel through which customers can pay and charge their vehicles.
    * The system should support parking for different types of vehicles like car, truck, van, motorcycle, etc.
    * Each parking floor should have a display board showing any free parking spot for each spot type.
    * The system should support a per-hour parking fee model.For example, customers have to pay $4 for the first hour, $3.5 for the second and third hours, and $2.5 for all the remaining hours.
*/

class Vehicle {

};

class Car: private Vehicle {

};

class Bike: private Vehicle {

};

enum ParkingTypeT {
    CAR_T,
    BIKE_T,
    BUS_T,
    DISABLED_ParkT
};

enum ParkingAvailable {
    AVAILABLE_,
    USED_T,
    OUTOFSERVICE_
};

class Parking {
  ParkingTypeT type_;
  ParkingAvailability condition_;

};

class ParkingFloor {

};

class ParkingLot {
 list<ParkingFloor> floors_;

 int IsParkingAvailable();
 Parking& GetParking(Vehicle );
};

class Fare {
   Fare* base_;
virtual double GenFare(Parking) =0;
};

class BaseFare: public Fare {
    BaseFare( Fare* base=NULL);
    double GenFare(Parking) {
        switch(parking->type()) {
            case car:
              return 10.0;
        }
    }
};

class SurCharge: public Fare {
    Fare* base_;
    Surcharge(Fare);
    double GenFare(Parking) {
      double init_Val = base_->GenFare();
      return init_val + 10;
    }
};

class RateCalculator {
    
};

enum PaymentStatus {
    Paid_,
    UnPaid_,

};

class ParkingTicket {
   Parking p_;
   PayementStatus s_;
   ParkingTicket(Parking);
};

class Admin {

void AddParkingFloor();

};