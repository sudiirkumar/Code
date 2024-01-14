import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TeacherWelcomePage extends JFrame {
    JLabel welcomeTxt;
    JButton newEnquiryBtn, newAdmissionBtn, findStudentBtn;
    JButton payFeeBtn,modifyStudentBtn;
    JButton modifySelfBtn;
    JButton logoutBtn;

    TeacherWelcomePage(){ init(); }
    private void modifyButton(JButton btn, String text, int x, int y, int width){
        btn.setText(text);
        btn.setBounds(x,y,width, 40);
        btn.setFocusPainted(false);
        btn.setForeground(Color.WHITE);
        btn.setBackground(Color.DARK_GRAY);
        add(btn);
    }
    private void init(){
        welcomeTxt = new JLabel();
        newEnquiryBtn = new JButton();
        newAdmissionBtn = new JButton();
        findStudentBtn = new JButton();
        modifyStudentBtn = new JButton();
        payFeeBtn = new JButton();
        modifySelfBtn = new JButton();
        logoutBtn = new JButton();

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
        setBounds(0,0,1650,1080);
        setLayout(null);
        setResizable(false);
        setExtendedState(JFrame.MAXIMIZED_BOTH);
        setTitle(Main.instituteName);

        welcomeTxt.setText("Welcome, "+LoginPage.name);
        welcomeTxt.setBounds(0,20,this.getWidth(),50);
        welcomeTxt.setHorizontalAlignment(0);
        welcomeTxt.setFont(new Font("Consolas",Font.BOLD,35));
        modifyButton(newEnquiryBtn,"New Enquiry",25,150,200);
        modifyButton(newAdmissionBtn,"New Admission",275,150,200);
        modifyButton(findStudentBtn,"Find Student",525,150,200);
        modifyButton(modifyStudentBtn,"Modify Student",775,150,200);
        modifyButton(payFeeBtn,"Pay Fee",1025,150,200);
        modifyButton(modifySelfBtn,"Setting",350,500,250);
        modifyButton(logoutBtn,"Logout",675,500,250);
        logoutBtn.setBackground(Color.RED);

        logoutBtn.addActionListener(e -> {
            dispose();
            new LoginPage();
        });
        newEnquiryBtn.addActionListener(e -> new EnquiryPage());
        newAdmissionBtn.addActionListener(e -> new AdmissionPage());
        findStudentBtn.addActionListener(e -> new FindStudentPage());
        modifyStudentBtn.addActionListener(e -> new ModifyStudentPage());
        payFeeBtn.addActionListener(e -> new FeePayPage());
        modifySelfBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new ModifyUserPage();
                ModifyUserPage.usernameInputTxt.setVisible(false);
                ModifyUserPage.usernameInputField.setVisible(false);
                ModifyUserPage.searchBtn.setVisible(false);
                ModifyUserPage.adminCheckBox.setVisible(false);
                ModifyUserPage.usernameInputField.setText(LoginPage.username);
                ModifyUserPage.searchBtn.doClick();
            }
        });

        add(welcomeTxt);
    }
}
