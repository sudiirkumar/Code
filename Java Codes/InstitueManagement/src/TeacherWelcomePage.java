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
    private void modifyButton(JButton btn, String text, int x, int y, int width, int height){
        btn.setText(text);
        btn.setBounds(x,y,width,height);
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

        welcomeTxt.setText("Welcome");
        welcomeTxt.setBounds(0,20,this.getWidth(),50);
        welcomeTxt.setHorizontalAlignment(0);
        welcomeTxt.setFont(new Font("Consolas",Font.BOLD,35));
        modifyButton(newEnquiryBtn,"New Enquiry",25,150,200,40);
        modifyButton(newAdmissionBtn,"New Admission",275,150,200,40);
        modifyButton(findStudentBtn,"Find Student",525,150,200,40);
        modifyButton(modifyStudentBtn,"Modify Student",775,150,200,40);
        modifyButton(payFeeBtn,"Pay Fee",1025,150,200,40);
        modifyButton(modifySelfBtn,"Setting",350,500,250,40);
        modifyButton(logoutBtn,"Logout",675,500,250,40);
        logoutBtn.setBackground(Color.RED);

        logoutBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dispose();
                new LoginPage();
            }
        });
        newEnquiryBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new EnquiryPage();
            }
        });
        newAdmissionBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new AdmissionPage();
            }
        });

        add(welcomeTxt);
    }
}
