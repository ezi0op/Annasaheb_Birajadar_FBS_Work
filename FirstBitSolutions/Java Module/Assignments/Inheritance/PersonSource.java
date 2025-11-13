package Inheritance;

class Person {
	int age;
	String name;
	String gender;

	Person() {
		System.out.println("Default constructor");
		this.age = 00;
		this.name = "Not given";
		this.gender = "Not given";
	}// Default constructor

	Person(int age, String name, String gender) {
		System.out.println("Parameterized constructor");
		this.age = age;
		this.name = name;
		this.gender = gender;
	}// Parameterized constructor

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this.age = age;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	String getGender() {
		return gender;
	}

	void setGender(String gender) {
		this.gender = gender;
	}

	void display() {
		System.out.println("Person Age is " + this.age);
		System.out.println("Person Name is " + this.name);
		System.out.println("Person gender is " + this.gender);
	}

}

class EngStudent extends Person {
	int rollNo;
	String branch;
	int year;

	EngStudent() {
		super();
		System.out.println("Default constructor");
		this.rollNo = 00;
		this.branch = "Not Given";
		this.year = 00;
	}// Default constructor

	EngStudent(int age, String name, String gender,int rollNo, String branch, int year) {
		super(age,name,gender);
		System.out.println("Parameterized constructor");
		this.rollNo = rollNo;
		this.branch = branch;
		this.year = year;
	}// Parameterized constructor

	int getRollNo() {
		return rollNo;
	}

	void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}

	String getBranch() {
		return branch;
	}

	void setBranch(String branch) {
		this.branch = branch;
	}

	int getYear() {
		return year;
	}

	void setYear(int year) {
		this.year = year;
	}

	void display() {
		super.display();
		System.out.println("Person RollNo is " + this.rollNo);
		System.out.println("Person Branch is " + this.branch);
		System.out.println("Person Year is " + this.year);
	}

}//student class ends here

class Teacher extends Person {
	int eid;
	String subject;
	double salary;
	 Teacher() {
		super();
		System.out.println("Default constructor");
		this.eid = 00;
		this.subject = "Not Given";
		this.salary = 00;
	 }// Default constructor

	 Teacher(int age, String name, String gender,int eid, String subject, double salary) {
		super(age,name,gender);
		System.out.println("Parameterized constructor");
		this.eid = eid;
		this.subject = subject;
		this.salary = salary;
	}// Parameterized constructor

	int getEid() {
		return eid;
	}

	void setEid(int eid) {
		this.eid = eid;
	}

	String getSubject() {
		return subject;
	}

	void setSubject(String subject) {
		this.subject = subject;
	}

	double getSalary() {
		return salary;
	}
	void setSalary(double salary) {
		this.salary = salary;
	}
	void display() {
		super.display();
		System.out.println("Teacher eid  is " + this.eid);
		System.out.println("Teacher  Subject is " + this.subject);
		System.out.println("Teacher Salary is " + this.salary);
	}
}//Teacher class ends here
class TestPerson{
	public static void main(String[] args) {
		Person p1 =  new Person();
		p1.display();
		System.out.println("\n\n");
		EngStudent s1 =  new EngStudent(18,"Amit","M",28,"Cse",2004);
		s1.display();
		System.out.println("\n\n");
		Teacher t1 =  new Teacher(22,"Anna","M",234,"IT",2024);
		t1.display();
		
	}
}

