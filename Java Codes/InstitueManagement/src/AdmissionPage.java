import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AdmissionPage extends JFrame {
    JLabel admissionTxt;
    JLabel nameTxt,addressTxt,courseTxt,dateTxt,mobTxt,fatherNameTxt;
    JLabel enquiryIdTxt,feeTxt,paidFeeTxt,teacherTxt,courseDurationTxt;
    JTextField nameField,addressField,courseField,dateField,mobField,fatherNameField;
    JTextField enquiryIdField,feeField,paidFeeField,teacherField;
    JButton submitBtn,searchEnquiryBtn;

    AdmissionPage(){init();}
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
        setBounds(200,100,500,750);
        setLayout(null);

        submitBtn.setText("Submit");
        submitBtn.setFocusPainted(false);
        submitBtn.setForeground(Color.white);
        submitBtn.setBackground(Color.DARK_GRAY);
        searchEnquiryBtn.setText("Search");
        searchEnquiryBtn.setFocusPainted(false);
        searchEnquiryBtn.setForeground(Color.WHITE);
        searchEnquiryBtn.setBackground(Color.DARK_GRAY);
        submitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                //TODO
            }
        });
        searchEnquiryBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                //TODO
            }
        });

        admissionTxt.setFont(new Font("Consolas",Font.BOLD,35));
        admissionTxt.setHorizontalAlignment(0);

        admissionTxt.setBounds(0,0,getWidth(),50);
        enquiryIdTxt.setBounds(20,100,150,30);
        enquiryIdField.setBounds(200,100,50,30);
        searchEnquiryBtn.setBounds(150,150,100,30);
        nameTxt.setBounds(20,200,150,30);
        addressTxt.setBounds(20,240,150,30);
        fatherNameTxt.setBounds(20,280,150,30);
        courseTxt.setBounds(20,320,150,30);
        mobTxt.setBounds(20,360,150,30);
        dateTxt.setBounds(20,400,150,30);
        feeTxt.setBounds(20,440,150,30);
        paidFeeTxt.setBounds(20,480,150,30);
        teacherTxt.setBounds(20,520,150,30);
        nameField.setBounds(200,200,200,30);
        addressField.setBounds(200,240,200,30);
        fatherNameField.setBounds(200,280,200,30);
        courseField.setBounds(200,320,200,30);
        mobField.setBounds(200,360,200,30);
        dateField.setBounds(200,400,200,30);
        feeField.setBounds(200,440,200,30);
        paidFeeField.setBounds(200,480,200,30);
        teacherField.setBounds(200,520,200,30);
        submitBtn.setBounds(110,620,150,50);

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
