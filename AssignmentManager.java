import java.util.*;

class Trainer {
    String tname;

    public Trainer(String tname) {
        this.tname = tname;
    }
}

class Student extends Trainer {
    public String stname;
    public int prnNo;

    public Student(String tname, int prnNo, String stname) {
        super(tname);
        this.prnNo = prnNo;
        this.stname = stname;
    }
}

class Assignment {
    String title;
    String date;
    String description;
    String assignee;

    public Assignment(String title, String date, String description, String assignee) {
        this.title = title;
        this.date = date;
        this.description = description;
        this.assignee = assignee;
    }

    @Override
    public String toString() {
        return "[title=" + title + ", date=" + date + ", description=" + description + ", assignee="
                + assignee + "]";
    }
}

public class AssignmentManager {

    public static Assignment createAssignment(Trainer trainer) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the title: ");
        String title = sc.nextLine();
        System.out.println("Enter the date: ");
        String date = sc.nextLine();
        System.out.println("Enter the description: ");
        String description = sc.nextLine();

        return new Assignment(title, date, description, trainer.tname);
    }

    public static void showAssignments(ArrayList<Assignment> assignments) {
        System.out.println("Assignments:");
        for (Assignment assignment : assignments) {
            System.out.println(assignment);

        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ArrayList<Assignment> assignmentList = new ArrayList<>();

        for (int i = 0; i < 2; i++) {
            System.out.println("Enter the student name : ");
            String stname = sc.nextLine();
            System.out.println("Enter the student PRN Number : ");
            int prnNo = Integer.parseInt(sc.nextLine());
            System.out.println("Enter the teacher Name : ");
            String tname = sc.nextLine();

            Student student = new Student(tname, prnNo, stname);
            Assignment assignment = createAssignment(student);

            assignmentList.add(assignment);
        }
        showAssignments(assignmentList);
    }

}