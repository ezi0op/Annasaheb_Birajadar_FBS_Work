package bank;

import java.util.Scanner;



//======================== BankSystem =========================


public class BankSystem {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		BankModel model = new BankModel();
		BankView view = new BankView();
		BankController c = new BankController(model, view);

		// Sample Accounts
		model.addACC(new SavingAccount(101, "Amit", 50000, "JAY@123", AccountStatus.ACTIVE, 100000));
		model.addACC(new SalaryAccount(102, "Jay", 70000, "AMIT@123", AccountStatus.ACTIVE, 200000));
		model.addACC(new CurrentAcc(103, "Visahl", 80000, "AJay@123", AccountStatus.ACTIVE, 56000));
		model.addACC(new LoanAccount(104, "Bira", 23433, "JP@123", AccountStatus.ACTIVE, 100000, LoanStatus.ACTIVE, 0));

		while (true) {
			view.menu();
			int ch = sc.nextInt();
			switch (ch) {

			case 1:
				c.createAccount();
				break;
			case 2:
				c.deposit();
				break;
			case 3:
				c.withdraw();
				break;
			case 4:
				c.showAccStatus();
				break;
			case 5:
				model.showAllAccounts();
				break;

			case 6:
				c.calculateLoanInstallment();
				break;
			case 7:
				c.applyInterest();
				break;
			case 8:
				c.closeAcc();
				break;
			case 9:
				c.showAccountTransactions();
				break;
			case 10:
				model.showAllTrans();
				break;
			case 11:
				c.eod();
				break;
			case 12:
				System.out.println("Exiting...");
				System.exit(0);
			default:
				System.out.println("Invalid Choice!");
			}

		}
	}

}
