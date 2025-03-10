import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class AdmissionPage extends JFrame {
    private boolean isEnq;
    JLabel admissionTxt;
    JLabel nameTxt,addressTxt,courseTxt,dateTxt,mobTxt,fatherNameTxt;
    JLabel enquiryIdTxt,feeTxt,paidFeeTxt,teacherTxt,courseDurationTxt;
    JTextField nameField,addressField,courseField,dateField,mobField,fatherNameField;
    JTextField enquiryIdField,feeField,paidFeeField,teacherField;
    JButton submitBtn,searchEnquiryBtn;

    AdmissionPage(){
        isEnq = false;
        init();
    }
    private void init(){
        admissionTxt = new JLabel("Admission Page");
        enquiryIdTxt = new JLabel("Enquiry number:");
        feeTxt = new JLabel("Course Fee:");
        paidFeeTxt = new JLabel("Fees Paid:");
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
        submitBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                if(isEnq){
                    PreparedStatement st= conn.prepareStatement("UPDATE student SET adm_date=?,total_fee=?,dues_fee=?,teacher_name=? WHERE id=?");
                    st.setString(1,dateField.getText().trim());
                    st.setInt(2,Integer.parseInt(feeField.getText()));
                    st.setInt(3,Integer.parseInt(feeField.getText())-Integer.parseInt(paidFeeField.getText()));
                    st.setString(4,teacherField.getText().trim());
                    st.setInt(5, Integer.parseInt(enquiryIdField.getText()));

                    int rs = st.executeUpdate();
                    if(rs==1){
                        JOptionPane.showMessageDialog(searchEnquiryBtn, "Admission successful");
                        dispose();
                    }
                    else{
                        JOptionPane.showMessageDialog(searchEnquiryBtn, "Server Error");
                    }
                }
                else{
                    PreparedStatement st= conn.prepareStatement("INSERT into student(student_name,father_name,address,course,adm_date,mobile,id,total_fee,dues_fee,teacher_name) values(?,?,?,?,?,?,?,?,?,?)");
                    st.setString(1,nameField.getText().trim().toUpperCase());
                    st.setString(2,fatherNameField.getText().trim());
                    st.setString(3,addressField.getText().trim());
                    st.setString(4,courseField.getText().trim());
                    st.setString(5,dateField.getText().trim());
                    st.setString(6,mobField.getText().trim());
                    st.setInt(7,++Main.noOfStudents);
                    st.setInt(8, Integer.parseInt(feeField.getText()));
                    st.setInt(9, Integer.parseInt(feeField.getText())-Integer.parseInt(paidFeeField.getText()));
                    st.setString(10,teacherField.getText().trim());
                    int rs=st.executeUpdate();
                    if(rs==1){
                        dispose();
                        JOptionPane.showMessageDialog(submitBtn, "Admission successful\nStudent id: "+Main.noOfStudents);
                    }
                    else{
                        JOptionPane.showMessageDialog(submitBtn ,"Server Error");
                    }
                }
            }
            catch(Exception ex){
                System.out.println(ex);
                JOptionPane.showMessageDialog(searchEnquiryBtn, "Server Error");
            }
        });
        searchEnquiryBtn.addActionListener(e -> {
            try{
                Connection conn= DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
                PreparedStatement st= conn.prepareStatement("SELECT student_name,address,father_name,course,mobile,id from student where id=?");
                st.setInt(1, Integer.parseInt(enquiryIdField.getText()));
                ResultSet rs=st.executeQuery();
                if(rs.next()){
                    isEnq = true;
                    JOptionPane.showMessageDialog(searchEnquiryBtn, "Student found");
                    nameField.setText(rs.getString("student_name"));
                    addressField.setText(rs.getString("address"));
                    fatherNameField.setText(rs.getString("father_name"));
                    courseField.setText(rs.getString("course"));
                    mobField.setText(rs.getString("mobile"));
                }
                else
                    JOptionPane.showMessageDialog(searchEnquiryBtn, "No enquiry found");
            }
            catch(Exception ex) {
                System.out.println(ex);
                JOptionPane.showMessageDialog(searchEnquiryBtn, "Server Error");
            }
        });

        admissionTxt.setFont(new Font("Consolas",Font.BOLD,35));
        admissionTxt.setHorizontalAlignment(0);

        admissionTxt.setBounds(0,0,getWidth(),50);
        enquiryIdTxt.setBounds(20,100,150,30);
        enquiryIdField.setBounds(200,100,50,30);
        searchEnquiryBtn.setBounds(280,100,100,30);
        nameTxt.setBounds(20,150,150,30);
        addressTxt.setBounds(20,190,150,30);
        fatherNameTxt.setBounds(20,230,150,30);
        courseTxt.setBounds(20,270,150,30);
        mobTxt.setBounds(20,310,150,30);
        dateTxt.setBounds(20,350,150,30);
        feeTxt.setBounds(20,390,150,30);
        paidFeeTxt.setBounds(20,430,150,30);
        teacherTxt.setBounds(20,470,150,30);
        nameField.setBounds(200,150,200,30);
        addressField.setBounds(200,190,200,30);
        fatherNameField.setBounds(200,230,200,30);
        courseField.setBounds(200,270,200,30);
        mobField.setBounds(200,310,200,30);
        dateField.setBounds(200,350,200,30);
        feeField.setBounds(200,390,200,30);
        paidFeeField.setBounds(200,430,200,30);
        teacherField.setBounds(200,470,200,30);
        submitBtn.setBounds(110,520,150,50);

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
        add(admissionTxt);
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
    }
}