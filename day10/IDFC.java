package day10;

class Loan {
    private long loanNo;
    private int principle;
    private float roi;

    // Default constructor
    public Loan() {
        System.out.println("New loan request");
        loanNo = 0L;
        principle = 0;
        roi = 0.0f;
    }
    public Loan(long loanNo) {
        this.loanNo = loanNo;
    }
    public Loan(int principle) {
        this.principle = principle;
    }
    public Loan(float roi) {
        this.roi = roi;
    }
    public Loan(int principle, float roi) {
        this.principle = principle;
        this.roi = roi;
    }
    public Loan(long loanNo, int principle, float roi) {
        this.loanNo = loanNo;
        this.principle = principle;
        this.roi = roi;
    }
    public void setLoanNo(long loanNo) {
        this.loanNo = loanNo;
    }
    public void setPrinciple(int principle) {
        this.principle = principle;
    }
    public void setRoi(float roi) {
        this.roi = roi;
    }
    public long getLoanNo() {
        return loanNo;
    }
    public int getPrinciple() {
        return principle;
    }
    public float getRoi() {
        return roi;
    }
    @Override
    public String toString() {
        return "Loan No: " + loanNo +
               "\nPrinciple: " + principle +
               "\nROI: " + roi + "%";
    }
}

public class IDFC {
    public static void main(String[] args) {

        Loan loan1 = new Loan(876567876545678L, 150000, 16.0f);

        Loan loan2 = new Loan();
        loan2.setLoanNo(3456545676545L);
        loan2.setPrinciple(91700);
        loan2.setRoi(8.9f);

        System.out.println("\nLoan 1 Details:");
        System.out.println(loan1);

        System.out.println("\nLoan 2 Details:");
        System.out.println(loan2);
    }
}
