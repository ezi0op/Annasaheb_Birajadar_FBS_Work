package View;

import java.util.*;

import Model.*;

public class myIdComparator implements Comparator<Employee> {
	public int compare(Employee o1, Employee o2) {

		return o1.getEid() - o2.getEid();
	}
}
