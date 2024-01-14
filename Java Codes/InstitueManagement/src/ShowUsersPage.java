import javax.swing.*;
import java.awt.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Objects;

public class ShowUsersPage extends JFrame {
    JLabel allUsersTxt;
    JLabel noOfUsersTxt, totalAdminTxt, totalTeacherTxt;
    JLabel noOfUsersOutTxt, totalAdminOutTxt, totalTeacherOutTxt;
    int totalAdmin;

    int totalTeacher;
    int totalUser;
    JTable table;

    ShowUsersPage(){ init(); }
    private void init(){
        totalTeacher = 0;
        totalAdmin = 0;
        totalUser = 0;
        allUsersTxt = new JLabel("Users Report");
        noOfUsersTxt = new JLabel("Total number of users:");
        totalAdminTxt = new JLabel("Number of admins:");
        totalTeacherTxt = new JLabel("Number of teachers:");
        noOfUsersOutTxt = new JLabel();
        totalAdminOutTxt = new JLabel();
        totalTeacherOutTxt = new JLabel();
        String[][] arr = new String[Main.noOfUsers+2][5];
        arr[0] = new String[]{"<html><b>Id</b></html>","<html><b>Name</html></b>","<html><b>Username</html></b>","<html><b>Mobile</html></b>","<html><b>Admin</html></b>"};
        String[] columnNames = new String[]{"Id","Name","Username","Mobile","Admin"};
        try{
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/codephile","root","root");
            PreparedStatement st = conn.prepareStatement("Select * from users");
            ResultSet rs = st.executeQuery();
            int i=2;
            while(rs.next()){
                arr[i][0] = String.valueOf(rs.getInt("id"));
                arr[i][1] = rs.getString("name");
                arr[i][2] = rs.getString("username");
                arr[i][3] = rs.getString("mob");
                arr[i][4] = rs.getBoolean("is_admin")?"Yes":"No";
                if(Objects.equals(arr[i][4], "Yes"))
                    totalAdmin++;
                else
                    totalTeacher++;
                i++;
                totalUser++;
            }
        }
        catch(Exception ex){
            System.out.println(ex);
        }
        noOfUsersOutTxt.setText(String.valueOf(totalUser));
        totalAdminOutTxt.setText(String.valueOf(totalAdmin));
        totalTeacherOutTxt.setText(String.valueOf(totalTeacher));

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

        allUsersTxt.setFont(new Font("Consolas",Font.BOLD,35));
        allUsersTxt.setHorizontalAlignment(0);

        allUsersTxt.setBounds(0,0,getWidth(),50);
        noOfUsersTxt.setBounds(50,100,150,30);
        noOfUsersOutTxt.setBounds(220,100,150,30);
        totalAdminTxt.setBounds(50,130,150,30);
        totalAdminOutTxt.setBounds(220,130,150,30);
        totalTeacherTxt.setBounds(50,160,150,30);
        totalTeacherOutTxt.setBounds(220,160,150,30);
        table.setBounds(50,210,getWidth()-100,getHeight()-400);

        add(allUsersTxt);
        add(allUsersTxt);
        add(noOfUsersTxt);
        add(noOfUsersOutTxt);
        add(totalAdminTxt);
        add(totalAdminOutTxt);
        add(totalTeacherTxt);
        add(totalTeacherOutTxt);
        add(table);
    }
}
