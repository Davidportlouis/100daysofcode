// Salary Calculator
import java.util.Scanner;

class Employee
{
    int id;
    String name,post;
    double basic_pay,da,hra,pf,gross_pay;
    
    Employee(int eid,String ename,String epost)
    {
        id = eid;
        name = ename;
        post = epost;
        if(post.equals("Manager"))
            basic_pay = 30000.0;
        else if(post.equals("Ast Manager"))
            basic_pay = 25000.0;
        else
            basic_pay = 20000.0;
    }

    void calc()
    {
        if(post.equals("Manager"))
        {
            da = basic_pay * 0.30;
            hra = basic_pay * 0.20;
            pf = basic_pay * 0.20;
            gross_pay = basic_pay + da + hra - pf;
        }
        else if(post.equals("Ast Manager"))
        {
            da = basic_pay * 0.20;
            hra = basic_pay * 0.10;
            pf = basic_pay * 0.10;
            gross_pay = basic_pay + da + hra - pf;
        }else{
            da = basic_pay * 0.10;
            hra = basic_pay * 0.05;
            pf = basic_pay * 0.05;
            gross_pay = basic_pay + da + hra - pf;
        }
    }

    void display()
    {
        System.out.println("****Salary Statement****");
        System.out.println("Employee name: " + name);
        System.out.println("Employee id: " + id);
        System.out.println("Employee role: " + post);
        System.out.println("Basic Pay: " + basic_pay);
        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("PF: " + pf);
        System.out.println("Gross Pay: " + gross_pay);
        System.out.println("****End Statement****");
    }
}

class d4_salary_cal
{
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Employee Name: ");
        String ename = scan.nextLine();
        System.out.print("Employee Role: ");
        String epost = scan.nextLine();
        System.out.print("Employee ID: ");
        int eid = scan.nextInt();
        Employee e1 = new Employee(eid,ename,epost);
        e1.calc();
        clearScreen();
        e1.display();
    }

    public static void clearScreen()
    {
        System.out.print("\003[H\033[2J");
        System.out.flush();
    }
}