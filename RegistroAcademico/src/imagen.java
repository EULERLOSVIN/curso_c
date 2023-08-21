import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Image;
import java.io.IOException;
import java.net.URL;

public class imagen {
    public static void main(String[] args) {
        javax.swing.SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                JFrame frame = new JFrame("Image Display Example");
                frame.setSize(800, 600);
                frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

                // Cargar la imagen desde una URL
                try {
                    URL imageUrl = new URL("https://img.ecologiahoy.com/2017/06/paisajes-naturales-26.jpeg");
                    ImageIcon imageIcon = new ImageIcon(imageUrl);
                    Image image = imageIcon.getImage().getScaledInstance(800, 600, Image.SCALE_SMOOTH);
                    ImageIcon scaledImageIcon = new ImageIcon(image);
                    JLabel label = new JLabel(scaledImageIcon);
                    frame.add(label);
                } catch (IOException e) {
                    e.printStackTrace();
                }

                frame.setVisible(true);
            }
        });
    }
}