import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class ModifyStudentPage extends JFrame {
    JLabel modifyStudentTxt;
    JLabel nameTxt,addressTxt,courseTxt,dateTxt,mobTxt,fatherNameTxt;
    JLabel enquiryIdTxt,feeTxt,paidFeeTxt,teacherTxt,courseDurationTxt;
    JTextField nameField,addressField,courseField,dateField,mobField,fatherNameField;
    JTextField enquiryIdField,feeField,paidFeeField,teacherField;
    JButton submitBtn,searchEnquiryBtn,deleteBtn;

    ModifyStudentPage(){
        init();
    }
    private void init(){
        modifyStudentTxt = new JLabel("Modify Student");
        enquiryIdTxt = new JLabel("Student ID:");
        feeTxt = new JLabel("Course Fee:");
        paidFeeTxt = new JLabel("Fee Dues:");
        teacherTxt = new JLabel("Course teacher:");
        courseDurationTxt = new JLabel("Course duration:");
        nameTxt = new JLabel("Name:");
        addressTxt = new JLabel("Address:");
        fatherNameTxt = new JLabel("Father's name:");
        courseTxt = new JLabel("Course:");
        mobTxt = new JLabel("Mobile:");
        dateTxt = new JLabel("Date:");
        nameField = new JTextField();
        addressField = new JTextField();
        fatherNameField = new JTextField();
        courseField = new JTextField();
        mobField = new JTextField();
        dateField = new JTextField();
        submitBtn = new JButton();
        searchEnquiryBtn = new JButton();
        enquiryIdField = new JTextField();
        feeField = new JTextField();
        paidFeeField = new JTextField();
        teacherField = new JTextField();
        deleteBtn = new JButton();

        setTitle(Main.instituteName);
        setVisible(true);
        setResizable(false);
        setBounds(200,0,500,750);
        setLayout(null);

        submitBtn.setText("Submit");
        submitBtn.setFocusPainted(false);
        submitBtn.setForeground(Color.white);
        submitBtn.setBackground(Color.DARK_GRAY);
        searchEnquiryBtn.setText("Search");
        searchEnquiryBtn.setFocusPainted(false);
        searchEnquiryBtn.setForeground(Color.WHITE);
        searchEnquiryBtn.setBackground(Color.DARK_GRAY);
        deleteBtn.setText("Delete");
        deleteBtn.setFocusPainted(false);
        deleteBtn.setForeground(Color.white);
        deleteBtn.setBackground(Color.RED);
        submitBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("UPDATE student SET student_name=?,address=?,father_name=?,course=?,mobile=?,adm_date=?,total_fee=?,dues_fee=?,teacher_name=? WHERE id=?");
                st.setString(1,nameField.getText().trim().toUpperCase());
                st.setString(2,addressField.getText().trim());
                st.setString(3,fatherNameField.getText().trim());
                st.setString(4,courseField.getText().trim());
                st.setString(5,mobField.getText().trim());
                st.setString(6,dateField.getText().trim());
                st.setInt(7,Integer.parseInt(feeField.getText()));
                st.setInt(8,Integer.parseInt(paidFeeField.getText()));
                st.setString(9,teacherField.getText().trim());
                st.setInt(10, Integer.parseInt(enquiryIdField.getText()));
                int rs = st.executeUpdate();
                if(rs==1){
                    JOptionPane.showMessageDialog(submitBtn, "Update successful");
                    dispose();
                }
                else{
                    JOptionPane.showMessageDialog(submitBtn, "Server Error");
                }

            }
            catch(Exception ex){
                System.out.println(ex);
                JOptionPane.showMessageDialog(submitBtn, "Server Error");
            }
        });
        searchEnquiryBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("SELECT student_name,address,father_name,course,mobile,id,adm_date,total_fee,dues_fee,teacher_name from student where id=?");
                st.setInt(1, Integer.parseInt(enquiryIdField.getText()));
                ResultSet rs=st.executeQuery();
                if(rs.next()){
                    JOptionPane.showMessageDialog(searchEnquiryBtn, "Student found");
                    nameField.setText(rs.getString("student_name"));
                    addressField.setText(rs.getString("address"));
                    fatherNameField.setText(rs.getString("father_name"));
                    courseField.setText(rs.getString("course"));
                    mobField.setText(rs.getString("mobile"));
                    dateField.setText(rs.getString("adm_date"));
                    feeField.setText(String.valueOf(rs.getInt("total_fee")));
                    paidFeeField.setText(String.valueOf(rs.getInt("dues_fee")));
                    teacherField.setText(rs.getString("teacher_name"));
                }
                else
                    JOptionPane.showMessageDialog(searchEnquiryBtn, "No student found");
            }
            catch(Exception ex) {
                System.out.println(ex);
                JOptionPane.showMessageDialog(searchEnquiryBtn, "Server Error");
            }
        });
        deleteBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("DELETE FROM student where id=?");
                st.setInt(1, Integer.parseInt(enquiryIdField.getText()));
                int rs=st.executeUpdate();
                if(rs==1){
                    JOptionPane.showMessageDialog(deleteBtn, "Student deleted");
                    dispose();
                }
                else
                    JOptionPane.showMessageDialog(deleteBtn, "Server Error");
            }
            catch(Exception ex) {
                System.out.println(ex);
                JOptionPane.showMessageDialog(deleteBtn, "Server Error");
            }
        });

        modifyStudentTxt.setFont(new Font("Consolas",Font.BOLD,35));
        modifyStudentTxt.setHorizontalAlignment(0);

        modifyStudentTxt.setBounds(0,0,getWidth(),50);
        enquiryIdTxt.setBounds(20,100,150,30);
        enquiryIdField.setBounds(200,100,50,30);
        searchEnquiryBtn.setBounds(280,100,100,30);
        nameTxt.setBounds(20,160,150,30);
        addressTxt.setBounds(20,200,150,30);
        fatherNameTxt.setBounds(20,240,150,30);
        courseTxt.setBounds(20,280,150,30);
        mobTxt.setBounds(20,320,150,30);
        dateTxt.setBounds(20,360,150,30);
        feeTxt.setBounds(20,400,150,30);
        paidFeeTxt.setBounds(20,440,150,30);
        teacherTxt.setBounds(20,480,150,30);
        nameField.setBounds(200,160,200,30);
        addressField.setBounds(200,200,200,30);
        fatherNameField.setBounds(200,240,200,30);
        courseField.setBounds(200,280,200,30);
        mobField.setBounds(200,320,200,30);
        dateField.setBounds(200,360,200,30);
        feeField.setBounds(200,400,200,30);
        paidFeeField.setBounds(200,440,200,30);
        teacherField.setBounds(200,480,200,30);
        submitBtn.setBounds(50,580,150,50);
        deleteBtn.setBounds(230,580,150,50);

        add(enquiryIdTxt);
        add(feeTxt);
        add(paidFeeTxt);
        add(teacherTxt);
        add(courseDurationTxt);
        add(searchEnquiryBtn);
        add(enquiryIdField);
        add(feeField);
        add(paidFeeField);
        add(teacherField);
        add(modifyStudentTxt);
        add(nameTxt);
        add(addressTxt);
        add(fatherNameTxt);
        add(courseTxt);
        add(mobTxt);
        add(dateTxt);
        add(nameField);
        add(fatherNameField);
        add(addressField);
        add(courseField);
        add(mobField);
        add(dateField);
        add(submitBtn);
        add(deleteBtn);
    }
}