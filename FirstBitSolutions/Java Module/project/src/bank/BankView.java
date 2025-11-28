package bank;

import java.util.*;


//========================= BankView ==========================


public class BankView {
	Scanner sc = new Scanner(System.in);

	void menu() {
		System.out.println("\n================== BANK MENU ================");
		System.out.println("1. Open New Account");
		System.out.println("2. Deposit");
		System.out.println("3. Withdraw");
		System.out.println("4. Show Account Status");
		System.out.println("5. Show All Accounts");
		System.out.println("6. Calculate Loan EMI");
		System.out.println("7. Apply Interest");
		System.out.println("8. Close Account");
		System.out.println("9. Show Transaction History");
		System.out.println("10. Show All Bank Transactions");
		System.out.println("11. End of Day Report (EOD)");
		System.out.println("12. Exit");
		System.out.println("\n-------------------------------------------------");
		System.out.print("Enter Choice : ");
		System.out.println("\n==============================================");
	}

}
