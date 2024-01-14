import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

public class ShowStudents extends JFrame {
    JLabel allStudentsTxt;
    JLabel noOfStudentTxt, totalDuesTxt, totalCollectionTxt;
    JLabel noOfStudentOutTxt, totalDuesOutTxt, totalCollectionOutTxt;
    int totalDues;
    int totalStudent;
    int totalCollection;
    JTable table;

    ShowStudents(){ init(); }
    private void init(){
        totalStudent = 0;
        totalDues = 0;
        totalCollection = 0;
        allStudentsTxt = new JLabel("Students Report");
        noOfStudentTxt = new JLabel("Total number of students:");
        totalDuesTxt = new JLabel("Total dues:");
        totalCollectionTxt = new JLabel("Total payment received:");
        noOfStudentOutTxt = new JLabel();
        totalDuesOutTxt = new JLabel();
        totalCollectionOutTxt = new JLabel();
        String[][] arr = new String[Main.noOfStudents+2][11];
        arr[0] = new String[]{"<html><b>Id</b></html>","<html><b>Name</html></b>","<html><b>Father Name</html></b>","<html><b>Address</html></b>","<html><b>Course</html></b>",
                "<html><b>Enquiry date</html></b>", "<html><b>Admission date</html></b>","<html><b>Mobile number</html></b>","<html><b>Course fees</html></b>",
                "<html><b>Fees dues</html></b>","<html><b>Teacher name</html></b>"};
        String[] columnNames = new String[]{"Id","Name","Father Name","Address","Course","Enquiry date","Admission date","Mobile number","Course fees","Fees dues","Teacher name"};
        try{
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
            PreparedStatement st = conn.prepareStatement("Select * from student");
            ResultSet rs = st.executeQuery();
            int i=2;
            while(rs.next()){
                arr[i][0] = String.valueOf(rs.getInt("id"));
                arr[i][1] = rs.getString("student_name");
                arr[i][2] = rs.getString("father_name");
                arr[i][3] = rs.getString("address");
                arr[i][4] = rs.getString("course");
                arr[i][5] = rs.getString("enq_date");
                arr[i][6] = rs.getString("adm_date");
                arr[i][7] = rs.getString("mobile");
                arr[i][8] = String.valueOf(rs.getInt("total_fee"));
                arr[i][9] = String.valueOf(rs.getInt("dues_fee"));
                totalDues += Integer.parseInt(arr[i][9]);
                totalCollection += Integer.parseInt(arr[i][8])-Integer.parseInt(arr[i][9]);
                arr[i][10] = rs.getString("teacher_name");
                i++;
                totalStudent++;
            }
        }
        catch(Exception ex){
            System.out.println(ex);
        }
        noOfStudentOutTxt.setText(String.valueOf(totalStudent));
        totalDuesOutTxt.setText(String.valueOf(totalDues));
        totalCollectionOutTxt.setText(String.valueOf(totalCollection));

        table = new JTable(arr,columnNames);
        table.setCellSelectionEnabled(false);
        table.setShowGrid(false);
        table.setColumnSelectionAllowed(false);
        table.setRowSelectionAllowed(false);
        table.setEnabled(false);

        setVisible(true);
        setBounds(0,0,1650,1080);
        setLayout(null);
        setResizable(false);
        setExtendedState(JFrame.MAXIMIZED_BOTH);
        setTitle(Main.instituteName);

        allStudentsTxt.setFont(new Font("Consolas",Font.BOLD,35));
        allStudentsTxt.setHorizontalAlignment(0);

        allStudentsTxt.setBounds(0,0,getWidth(),50);
        noOfStudentTxt.setBounds(50,100,150,30);
        noOfStudentOutTxt.setBounds(220,100,150,30);
        totalDuesTxt.setBounds(50,130,150,30);
        totalDuesOutTxt.setBounds(220,130,150,30);
        totalCollectionTxt.setBounds(50,160,150,30);
        totalCollectionOutTxt.setBounds(220,160,150,30);
        table.setBounds(50,210,getWidth()-100,getHeight()-400);

        add(allStudentsTxt);
        add(allStudentsTxt);
        add(noOfStudentTxt);
        add(noOfStudentOutTxt);
        add(totalDuesTxt);
        add(totalDuesOutTxt);
        add(totalCollectionTxt);
        add(totalCollectionOutTxt);
        add(table);
    }
}
