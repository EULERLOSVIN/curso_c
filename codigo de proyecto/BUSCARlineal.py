#METODO DE BUSQUEDA Líneal

import csv
import tkinter as tk
from tkinter import messagebox
import time
import psutil

# Función para cargar los datos del archivo CSV en un diccionario
def cargar_datos():
    datos = {}
    with open('C:/Users/euler/Downloads/euler.csv', mode='r', newline='') as file:
        reader = csv.reader(file)
        for row in reader:
            codigo, nombre, permanencia, correo, contrasena, tipo_usuario = row
            datos[correo] = {
                'codigo': codigo,
                'nombre': nombre,
                'permanencia': permanencia,
                'correo': correo,
                'contrasena': contrasena,
                'tipo_usuario': tipo_usuario
            }
    return datos

# Función para buscar un usuario en el diccionario
def buscar_usuario():
    correo = correo_entry.get()
    contrasena = contrasena_entry.get()
    
    # Medir el tiempo inicial en microsegundos
    start_time = time.perf_counter_ns()
    
    datos_usuario = datos_usuarios.get(correo)
    
    # Medir el tiempo final en microsegundos
    end_time = time.perf_counter_ns()
    
    tiempo_transcurrido = (end_time - start_time) // 1000  # Convertir a microsegundos
    
    if datos_usuario and datos_usuario['contrasena'] == contrasena:
        mostrar_datos(datos_usuario, tiempo_transcurrido)
    else:
        mostrar_datos(None, tiempo_transcurrido)

# Función para mostrar los datos del usuario o mensaje de error
def mostrar_datos(datos, tiempo):
    resultado_text.delete(1.0, tk.END)  # Limpiar el contenido anterior
    
    if datos:
        mensaje = f'DATOS DEL USUARIO\n\nCódigo: {datos["codigo"]}\nApellidos y Nombres: {datos["nombre"]}\nPermanencia: {datos["permanencia"]}\nCorreo: {datos["correo"]}\nTipo de Usuario: {datos["tipo_usuario"]}\n\n'
        mensaje += f'Tiempo de búsqueda: {tiempo} microsegundos\n'
        
        # Medir el uso de memoria
        proceso = psutil.Process()
        memoria_utilizada = proceso.memory_info().rss
        mensaje += f'Memoria utilizada: {memoria_utilizada / (1024 * 1024):.2f} MB'
    else:
        mensaje = 'Usuario no encontrado o contraseña incorrecta.'
    
    resultado_text.insert(tk.END, mensaje)

# Cargar los datos del archivo CSV en un diccionario
datos_usuarios = cargar_datos()

# Crear la ventana principal
ventana = tk.Tk()
ventana.title('Búsqueda de Usuario')

# Crear etiquetas y campos de entrada
correo_label = tk.Label(ventana, text='Correo Electrónico:')
correo_label.pack()
correo_entry = tk.Entry(ventana)
correo_entry.pack()

contrasena_label = tk.Label(ventana, text='Contraseña:')
contrasena_label.pack()
contrasena_entry = tk.Entry(ventana, show='*')  # Para ocultar la contraseña
contrasena_entry.pack()

# Botón de búsqueda
buscar_button = tk.Button(ventana, text='Buscar Usuario', command=buscar_usuario)
buscar_button.pack()

# Crear un widget Text para mostrar los resultados y hacerlo redimensionable
resultado_text = tk.Text(ventana, wrap=tk.WORD, height=10, width=60)
resultado_text.pack(fill=tk.BOTH, expand=True)

# Configurar la ventana principal para que sea redimensionable
ventana.geometry('400x400')
ventana.mainloop()
