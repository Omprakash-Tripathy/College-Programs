import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class Applet1 extends Applet implements ActionListener
{
    Button red,white,blue;
    Label hit;
    public void init()
    {
        red = new Button("Red");
        blue = new Button("Blue");
        white = new Button("White");
        hit = new Label("click to change bg color");
        add(red);
        add(blue);
        add(white);
        add(hit);
        red.addActionListener(this);
        blue.addActionListener(this);
        white.addActionListener(this);
    }
    
    public void actionPerformed(ActionEvent ae)
    {
        String str = ae.getActionCommand();
        if(str.equals("Red"))
        setBackground(Color.RED);
        else if (str.equals("White"))
        setBackground(Color.WHITE);        
        else if(str.equals("Blue"))
        setBackground(Color.BLUE);
        repaint();
    }
    
}

/*
<applet code="Applet1.class" height=300 width=200>
</applet>
*/