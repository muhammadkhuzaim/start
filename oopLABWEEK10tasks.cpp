
//Task 1:
#include<iostream>
using namespace std;

class Ward {
private:
	int capacity;
	string name;
	int number;
public:
	Ward():capacity(0),name("NULL"),number(0){}
	Ward(string n, int cap, int num) {
		name = n;
		capacity = cap;
		number = num;
	}

	void display() {
		cout << "Ward Name:" << name << ", Number:" << number << ", Capacity:" << capacity << endl;

	}
};

class Hospital;

class Doctor {
private:
	string name;
	string specialization;
	string licenseid;
public:
	Doctor():name("NULL"),specialization("NULL"),licenseid("NULL"){}
	Doctor(string n, string spec, string licenseID) {
		name = n;
		specialization = spec;
		licenseid = licenseID;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Specialization: " << specialization << endl;
		cout << "LicenseID: " << licenseid << endl;

	}
	
};


class Hospital {
private:
	Ward ward1;
	Ward ward2;
	Ward ward3;
	Doctor* doctors[10];
	int count;

public:
	Hospital():
	ward1("General",150,2),
	ward2("Emergency",50,1),
	ward3("ICU",25,3),count(0)
	{
		for (int i = 0; i < 10; i++) {
			doctors[i] = nullptr;

		}
	}

	void addDoctor(Doctor* d) {

		if (count < 10) {
			doctors[count++] = d;
		}
		else {
			cout << "Doctor's capacity reached in hospital!" << endl;

		}
	
	}

	void display() {
		cout << "--- Wards ---" << endl;
	    ward1.display();
		ward2.display();
		ward3.display();

		cout << endl;
		cout << "--- Doctors ---" << endl;
		for (int i = 0; i < 10; i++) {
			if (doctors[i] != nullptr) {
				doctors[i]->display();
			}
		}



	}


};


int main() {
	Doctor d1("Dr.Muhammad Khuzaim", "Gastroentologist", "2025-cs-588");
	Doctor d2("Dr.Muhammad Asfand Yar", "Dermatologist", "2024-cs-598");
	Doctor d3("Dr.Muhammad Ali", "Child Specialist", "2024-cs-456");
	Doctor d4("Dr.Chaudry Sher Ali", "Gut Specialist", "2023-cs-344");
	Doctor d5("Dr.Rehmat Waqas", "Nutrionist", "2022-che-122");
	Doctor d6("Dr.Chaudhry Babar Sattar", "Gut Specialist", "2021-me-100");
	Doctor d7("Dr.Eidhen Chaudhry", "Child Specialist", "2020-ee-345");
	Doctor d8("Dr.Jelani", "Liver Specialist", "2014-me-199");
	Doctor d9("Hafizullah Niazi", "Dermatologist", "2012-cc-145");
	Doctor d10("Khan Ilahi", "Gut Specialist", "2010-cs-777");

	{
		Hospital Shaukat_Khanum;
		Shaukat_Khanum.addDoctor(&d1);
		Shaukat_Khanum.addDoctor(&d2);
		Shaukat_Khanum.addDoctor(&d3);
		Shaukat_Khanum.addDoctor(&d4);

		Shaukat_Khanum.display();

	}

	cout << "\nAfter Hospital is Destroyed.\n" << endl;

	d1.display();
	d2.display();
	d3.display();
	d4.display();
	

}

//Task 2:


#include<iostream>
using namespace std;

class LightSystem {
	int brightness;
	bool state;
public:
	LightSystem():brightness(0),state(false){}
	LightSystem(int b, bool s) {
		brightness = b;
		state = s;
	}

	void dim() {
		if (brightness < 70) {
			cout << "Light is Dim." << endl;
		}
	}

	void display() {
		cout << "Brightness: " << brightness << endl;
		cout << "State: " << state << endl;

	}
};

class ThermoStatSystem {
private:
	int target_temp;
	string mode;
public:
	ThermoStatSystem():target_temp(0),mode("NULL"){}
	ThermoStatSystem(int target, string m) {
		target_temp = target;
		mode = m;
	}

	void adjust() {

	}

	void display() {
		cout << "Target Temperature: " << target_temp << endl;
		cout << "Mode: " << mode << endl;

	}
};

class SecuritySystem {
private:
	bool armedstate;
	string PIN;
public:
	SecuritySystem():armedstate(false),PIN("NULL"){}
	SecuritySystem(bool state, string pin) {
		armedstate = state;
		PIN = pin;
	}

	void display() {
		if (armedstate == true)
			cout << "Armed State: True" << endl;
		else
			cout << "Armed State: False " << endl;
		cout << "PIN: " << PIN << endl;
		
	}


};

class SmartHome {
private:
	LightSystem light;
	ThermoStatSystem thermostatSystem;
	SecuritySystem securityStatus;
	string homeAddress;
public:
	SmartHome(string address, LightSystem& l, ThermoStatSystem& thermostat, SecuritySystem& security) {
		homeAddress = address;
		thermostatSystem = thermostat;
		securityStatus = security;
		light = l;

	}
	void fullStatus() {
		cout << "Home Address: " << homeAddress << endl;
		cout << "-- Light System --" << endl;
		light.display();
		cout << "-- ThermoStat System --" << endl;
		thermostatSystem.display();
		cout << "-- Security Status -- " << endl;
		securityStatus.display();

	}

};
int main() {
	LightSystem l1(88, true);
	LightSystem l2(90, false);
	ThermoStatSystem t1(78, "Green");
	ThermoStatSystem t2(45, "Blue");
	SecuritySystem s1(true, "2025-cs-567");
	SecuritySystem s2(false, "2025-cs-554");

	SmartHome home1("Model Town f-31", l1, t1, s1);
	SmartHome home2("Gulshan Nasir g-34 Street 4", l2, t2, s2);

	home1.fullStatus();
	cout << endl;

	home2.fullStatus();

}



//Task 3:

#include<iostream>
using namespace std;

class Classroom {
private:
	string roomnumber;
	string building;
	int capacity;
public:
	Classroom():roomnumber(0),building("NULL"),capacity(0){}
	Classroom(string n, string b, int c) {
		
		roomnumber = n;
		building = b;
		capacity = c;

	}

	void display() {
		cout << "-- ClassRoom --" << endl;
		cout << "Room Number: " << roomnumber << endl;
		cout << "Building: " << building << endl;
		cout << "Capacity: " << capacity << endl;

	}

};

class Lecturer {
private:
	string name;
	const string Empid;
	string department;
public:
	Lecturer():name("NULL"),Empid("NULL"),department("NILL"){}
	Lecturer(string n, string empID, string dep):Empid(empID) {
		name = n;
		department = dep;
	}

	void display() {
		cout << "-- Lecturer --" << endl;
		cout << "Name: " << name << endl;
		cout << "EmpID: " << Empid << endl;
		cout << "Department: " << department << endl;

	}
};

class Course {
private:
	string coursename;
	Lecturer* l;
	Classroom* room;

public:
	Course():l(nullptr),coursename("null"),room(nullptr){}
	Course(Lecturer* L,Classroom* R,string cname) {
		l = L;
		coursename = cname;
		room = R;


	}
	void scheduleIn(Classroom& c) {
		c.display();
	}

	void display() {
		cout << "-- Course Info --" << endl;
		cout << "Course Name: " << coursename << endl;
		l->display();
		room->display();

	}

};

class Semester {
private:
	Course c[6];
	int count;

public:
	Semester():count(0){}

	void addCourse(Course& Course) {
		if (count < 6) {
			c[count++] = Course;
		}
		else {
			cout << "Further Courses cannot be added to this semester." << endl;
		}
	}

	void displayAll() {
		for (int i = 0; i < count; i++) {
			cout << "Displaying Course #" << i + 1 << ": " << endl;
			c[i].display();
			cout << endl;

		}
	}
};

int main() {
	Lecturer l1("Sir Ali", "234-UET-KSK", "Computer Science");
	Lecturer l2("Sir Aizaz", "133-UET-KSK", "Computer Science");

	Classroom r1("F-4", "Computer Science", 55);
	Classroom r2("G-12", "Computer Science", 56);

	Course c1(&l1, &r2, "Object Oriented Programming (OOP)");
	Course c2(&l2, &r1, "Artificial Intelligence (AI)");
	
	Semester Spring2026;
	Spring2026.addCourse(c1);
	Spring2026.addCourse(c2);

	Spring2026.displayAll();

}

//Task 4:
#include<iostream>
using namespace std;

class ShippingAddress {
private:
	string street;
	string city;
	string country;
	string postalcode;
public:
	ShippingAddress() {}

	ShippingAddress(string s, string c, string co, string p) {
		street = s;
		city = c;
		country = co;
		postalcode = p;
	}

	void display() {
		cout << street << ", " << city << ", " << country << " - " << postalcode << endl;
	}
};

class PaymentInfo {
private:
	string cardtype;
	string last4digits;
	string expiry;
public:
	PaymentInfo() {}

	PaymentInfo(string ct, string l4, string exp) {
		cardtype = ct;
		last4digits = l4;
		expiry = exp;
	}

	void display() {
		cout << cardtype << " ****" << last4digits << " (Exp: " << expiry << ")" << endl;
	}
};

class OrderItem {
private:
	string productname;
	int quantity;
	double unitprice;

public:
	OrderItem() : quantity(0), unitprice(0) {}

	OrderItem(string p, int q, double u) {
		productname = p;
		quantity = q;
		unitprice = u;
	}

	double getTotal() {
		return quantity * unitprice;
	}

	void display() {
		cout << productname << " | Qty: " << quantity
			<< " | Unit: " << unitprice
			<< " | Total: " << getTotal() << endl;
	}
};

class Order {
private:
	ShippingAddress address;
	PaymentInfo payment;
	OrderItem items[5];
	int count;

public:
	Order(ShippingAddress a, PaymentInfo p) {
		address = a;
		payment = p;
		count = 0;
	}

	void addItem(OrderItem obj) {
		if (count < 5) {
			items[count] = obj;
			count++;
		}
	}

	double calculateTotal() {
		double total = 0;
		for (int i = 0; i < count; i++) {
			total = total + items[i].getTotal();
		}
		return total;
	}

	friend ostream& operator<<(ostream& out, Order& obj);
};

ostream& operator<<(ostream& out, Order& obj) {
	out << "------ Receipt ------\n\n";

	out << "Shipping Address:\n";
	obj.address.display();
	out << endl;

	out << "Payment Info:\n";
	obj.payment.display();
	out << endl;

	out << "Items:\n";
	for (int i = 0; i < obj.count; i++) {
		obj.items[i].display();
	}

	out << "\nGrand Total: " << obj.calculateTotal() << endl;

	return out;
}

int main() {
	ShippingAddress addr("Street 10", "Lahore", "Pakistan", "54000");
	PaymentInfo pay("Visa", "1234", "12/28");

	Order o(addr, pay);

	o.addItem(OrderItem("Keyboard", 2, 1500));
	o.addItem(OrderItem("Mouse", 1, 800));
	o.addItem(OrderItem("Headphones", 1, 2500));

	cout << o;
}

// this code is entirely written by me 
