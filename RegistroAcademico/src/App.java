import java.awt.Color;  //librería para colores

import java.awt.Font; // ¡Asegúrate de importar la clase Font!

//estas librería se agregan solo después de que creas una variable u objetos
import javax.swing.JButton;  //librería para botones
import javax.swing.JComboBox; //para agregar opciones
import javax.swing.JFrame;   // es una librería para crear ventanas o gráficos
import javax.swing.JLabel;  //se utiliza para crear etiquetas de texto que se pueden agregar a la interfaz gráfica de usuario (GUI) que estás construyendo
import javax.swing.JPanel;  // para generara un pantalla
import javax.swing.JPasswordField;  // librería para hacer una contraseña
import javax.swing.JTextField;   // Pra agregar texto en la pantalla o el gráfico



public class App extends JFrame {
    // creamos variables que utilizaremos para las funcionalidades de nuestro programa
    JPanel panel;
    JLabel titulo;
    JLabel lblcorreo;
    JLabel lblcontraseña;
    JTextField txtcorreo;
    JPasswordField contraseña;
    JButton boton1;
    JLabel lbltipo_usuario;
    JComboBox<String> opciones; // Especifica el tipo de elementos que contendrá el JComboBox

    


    public App(){

        setTitle("REGISTRO ACADÉMICO");  //me musetra el titulo ensima del la ventana.
        setSize(600, 600);  // puedo regular el tamaño de la ventana
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // al presionar click en la "x"  se cierra completamente la ejecución.
        setLocationRelativeTo(null); // para poder hacer cambios de posición en mi ventana.

        panel = new JPanel();  // hasta aquí ya está creado el objeto panel pero todavía no hay funcionalidad.
        panel.setLayout(null); //para desactivar dentro del panel la configuracion por defecto o la posición.
        getContentPane().add(panel); // para agregar paneles.

        titulo = new JLabel("REGISTRO ACADÉMICO"); //creo mi objeto "titulo".
        titulo.setBounds(170, 10, 400, 50); //para centrar la ubicación  del texto.
        titulo.setFont(new Font("Arial", Font.BOLD, 20)); // Cambiando el tamaño de la fuente a 20
        panel.add(titulo);  //ahora agrego el texto al panel o pantalla.

        lblcorreo = new JLabel("CORREO : "); //creo mi objeto "lblcorreo"
        lblcorreo.setBounds(50, 100,100, 30);// Para mover la ubicacion del leabel setBounds(distancia.ancho,d.alto y,largo.Letra, ancho.l)
        panel.add(lblcorreo); //recien estoy agregando el "lblcorreo" dentro del panel

        lblcontraseña = new JLabel("CONTRASEÑA : "); // creo mi objeto "lblcontraseña"
        lblcontraseña.setBounds(50, 150, 100, 30); // Para mover la ubicacion del leabel setBounds(distancia.ancho,d.alto y,largo.Letra, ancho.l)
        panel.add(lblcontraseña); //recien estoy agregando el "lblcontraseña" dentro del panel
        
        txtcorreo = new JTextField();  // para que el usuario pueda ingresar sus datos.
        txtcorreo.setBounds(170, 100, 300, 30); // posicion donde se va agregar el cuadro en el que va a escribir el usuario
        panel.add(txtcorreo); //recien estoy agregando el "txtcorreo" dentro del panel.

        contraseña = new JPasswordField();  // para que el usuario pueda ingresar sus datos.
        contraseña.setBounds(170, 160, 300, 30); // posicion donde se va agregar el cuadro en el que va a escribir el usuario
        panel.add(contraseña); //recien estoy agregando el "lblcontraseña" dentro del panel
        
        lbltipo_usuario = new JLabel("TIPO DE USUARIO : "); // para que el usuario pueda ingresar sus datos.
        lbltipo_usuario.setBounds(50, 220, 200, 30); // posicion donde se va agregar el cuadro en el que va a escribir el usuario
        panel.add(lbltipo_usuario); //recien estoy agregando el "lbltipo_usuario" dentro del panel.

        opciones = new JComboBox<String>();  // "JComboBox"  se utiliza para agregar opción
        opciones.addItem("Alumno");
        opciones.addItem("Profesor");
        opciones.addItem("Administrador");
        opciones.setBounds(170,220,300,30);
        panel.add(opciones);

        
        //................................................................................................
        boton1 = new JButton("Ingresar");
        boton1.setBounds(255, 400, 100, 30);
        boton1.setBackground(new Color(0, 255, 127));
        panel.add(boton1);


    }

    public static void main(String[] args) {
        App p = new App();
        p.setVisible(true);
    }


}
