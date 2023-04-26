import java.sql.*;
class MakeConnection1{
Connection con;
Statement stmt;
ResultSet rs;
MakeConnection1(){
try{
Class.forName("oracle.jdbc.driver.OracleDriver");
con=DriverManager.getConnection
("Jdbc:Oracle:thin:@localhost:1521:ORCL","scott","tiger");
stmt=con.createStatement();
rs=stmt.executeQuery("Select ename, sal from emp");
while(rs.next())
System.out.println(rs.getString(1)+" "+rs.getInt(2));
conn.close();
} // end of try block
catch(SQLException e){
System.out.println(e);
}
catch(ClassNotFoundException e){
System.out.println(e);
} }
}
public class TestConnection1{
public static void main(String args[]){
new MakeConnection1();
}
}