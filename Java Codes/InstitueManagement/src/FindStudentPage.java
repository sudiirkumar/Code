import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class FindStudentPage extends JFrame {
    JLabel searchStudentTxt;
    JLabel nameTxt,addressTxt,courseTxt,admissionDateTxt,mobTxt,fatherNameTxt;
    JLabel nameInputTxt,feeTxt,feeDuesTxt,teacherTxt,courseDurationTxt,idTxt;
    JLabel idOutTxt, nameOutTxt, addressOutTxt, courseOutTxt, admissionDateOutTxt, mobOutTxt;
    JLabel fatherNameOutTxt, feeOutTxt, duesFeeOutTxt, teacherOutTxt;
    JTextField nameInputField;
    JButton searchBtn;

    FindStudentPage(){
        init();
    }
    private void init(){
        searchStudentTxt = new JLabel("Find Student");
        nameInputTxt = new JLabel("Enter name:");
        idTxt = new JLabel("Student id:");
        feeTxt = new JLabel("Course Fee:");
        feeDuesTxt = new JLabel("Fees Dues:");
        teacherTxt = new JLabel("Course teacher:");
        courseDurationTxt = new JLabel("Course duration:");
        nameTxt = new JLabel("Name:");
        addressTxt = new JLabel("Address:");
        fatherNameTxt = new JLabel("Father's name:");
        courseTxt = new JLabel("Course:");
        mobTxt = new JLabel("Mobile:");
        admissionDateTxt = new JLabel("Admission Date:");
        idOutTxt = new JLabel();
        nameOutTxt = new JLabel();
        addressOutTxt = new JLabel();
        courseOutTxt = new JLabel();
        admissionDateOutTxt = new JLabel();
        mobOutTxt = new JLabel();
        fatherNameOutTxt = new JLabel();
        feeOutTxt = new JLabel();
        duesFeeOutTxt = new JLabel();
        teacherOutTxt = new JLabel();
        nameInputField = new JTextField();
        searchBtn = new JButton();

        setTitle(Main.instituteName);
        setVisible(true);
        setResizable(false);
        setBounds(200,0,500,600);
        setLayout(null);

        searchBtn.setText("Search");
        searchBtn.setFocusPainted(false);
        searchBtn.setForeground(Color.WHITE);
        searchBtn.setBackground(Color.DARK_GRAY);
        searchBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("SELECT student_name,address,father_name,course,mobile,id,adm_date,total_fee,dues_fee,teacher_name from student where student_name=?");
                st.setString(1, nameInputField.getText().toUpperCase().trim());
                ResultSet rs=st.executeQuery();
                if(rs.next()){
                    idOutTxt.setText(rs.getString("id"));
                    nameOutTxt.setText(rs.getString("student_name"));
                    addressOutTxt.setText(rs.getString("address"));
                    fatherNameOutTxt.setText(rs.getString("father_name"));
                    courseOutTxt.setText(rs.getString("course"));
                    mobOutTxt.setText(rs.getString("mobile"));
                    admissionDateOutTxt.setText(rs.getString("adm_date"));
                    feeOutTxt.setText(rs.getString("total_fee"));
                    duesFeeOutTxt.setText(rs.getString("dues_fee"));
                    teacherOutTxt.setText(rs.getString("teacher_name"));
                }
                else
                    JOptionPane.showMessageDialog(searchBtn, "No student found");
            }
            catch(Exception ex) {
                System.out.println(ex);
                JOptionPane.showMessageDialog(searchBtn, "Server Error");
            }
        });

        searchStudentTxt.setFont(new Font("Consolas",Font.BOLD,35));
        searchStudentTxt.setHorizontalAlignment(0);

        searchStudentTxt.setBounds(0,0,getWidth(),50);
        nameInputTxt.setBounds(20,100,150,30);
        nameInputField.setBounds(200,100,120,30);
        searchBtn.setBounds(350,100,100,30);
        idTxt.setBounds(20,160,150,30);
        idOutTxt.setBounds(200,160,150,30);
        nameTxt.setBounds(20,200,150,30);
        addressTxt.setBounds(20,240,150,30);
        fatherNameTxt.setBounds(20,280,150,30);
        courseTxt.setBounds(20,320,150,30);
        mobTxt.setBounds(20,360,150,30);
        admissionDateTxt.setBounds(20,400,150,30);
        feeTxt.setBounds(20,440,150,30);
        feeDuesTxt.setBounds(20,480,150,30);
        teacherTxt.setBounds(20,520,150,30);
        nameOutTxt.setBounds(200,200,200,30);
        addressOutTxt.setBounds(200,240,200,30);
        fatherNameOutTxt.setBounds(200,280,200,30);
        courseOutTxt.setBounds(200,320,200,30);
        mobOutTxt.setBounds(200,360,200,30);
        admissionDateOutTxt.setBounds(200,400,200,30);
        feeOutTxt.setBounds(200,440,200,30);
        duesFeeOutTxt.setBounds(200,480,200,30);
        teacherOutTxt.setBounds(200,520,200,30);

        add(nameInputTxt);
        add(feeTxt);
        add(feeDuesTxt);
        add(teacherTxt);
        add(courseDurationTxt);
        add(searchBtn);
        add(nameInputField);
        add(feeOutTxt);
        add(duesFeeOutTxt);
        add(teacherOutTxt);
        add(searchStudentTxt);
        add(nameTxt);
        add(addressTxt);
        add(fatherNameTxt);
        add(courseTxt);
        add(mobTxt);
        add(admissionDateTxt);
        add(nameOutTxt);
        add(fatherNameOutTxt);
        add(addressOutTxt);
        add(courseOutTxt);
        add(mobOutTxt);
        add(admissionDateOutTxt);
        add(idTxt);
        add(idOutTxt);
    }
}