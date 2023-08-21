import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class muestraDatos {
    public static void main(String[] args) {

        SwingUtilities.invokeLater(() -> {
            JFrame frame = new JFrame("Ejemplo de Tabla JTable");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

            // Crear el modelo de la tabla con dos columnas
            DefaultTableModel model = new DefaultTableModel(new Object[]{"NOMBRES", "APELLIDOS","CORREO",}, 0);
            
            // Agregar algunas filas de ejemplo
            model.addRow(new Object[]{"Dato 1", "Dato A","0020220749"});
            model.addRow(new Object[]{"Dato 2", "Dato B","0020230852"});
            model.addRow(new Object[]{"Dato 3", "Dato C","0020220456"});

            JTable table = new JTable(model);

            JScrollPane scrollPane = new JScrollPane(table);
            frame.add(scrollPane);

            frame.pack();
            frame.setLocationRelativeTo(null);
            frame.setVisible(true);
        });
    }
}