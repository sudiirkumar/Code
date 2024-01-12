import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class EnquiryPage extends JFrame {
    JLabel enquiryTxt;
    JLabel nameTxt,addressTxt,courseTxt,dateTxt,mobTxt,fatherNameTxt;
    JTextField nameField,addressField,courseField,dateField,mobField,fatherNameField;
    JButton submitBtn;

    EnquiryPage(){init();}
    private void init(){
        enquiryTxt = new JLabel("Enquiry Page");
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

        setTitle(Main.instituteName);
        setVisible(true);
        setResizable(false);
        setBounds(200,100,440,500);
        setLayout(null);

        submitBtn.setText("Submit");
        submitBtn.setFocusPainted(false);
        submitBtn.setForeground(Color.white);
        submitBtn.setBackground(Color.DARK_GRAY);
        submitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                //TODO
            }
        });

        enquiryTxt.setFont(new Font("Consolas",Font.BOLD,35));
        enquiryTxt.setHorizontalAlignment(0);

        enquiryTxt.setBounds(0,0,getWidth(),50);
        nameTxt.setBounds(20,100,150,30);
        addressTxt.setBounds(20,150,150,30);
        fatherNameTxt.setBounds(20,200,150,30);
        courseTxt.setBounds(20,250,150,30);
        mobTxt.setBounds(20,300,150,30);
        dateTxt.setBounds(20,350,150,30);
        nameField.setBounds(200,100,200,30);
        addressField.setBounds(200,150,200,30);
        fatherNameField.setBounds(200,200,200,30);
        courseField.setBounds(200,250,200,30);
        mobField.setBounds(200,300,200,30);
        dateField.setBounds(200,350,200,30);
        submitBtn.setBounds(95,400,150,50);

        add(enquiryTxt);
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
