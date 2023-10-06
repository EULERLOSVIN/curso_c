#METODO DE BUSQUEDA BINARIA

import csv
import tkinter as tk
from tkinter import messagebox
import time
import psutil
from collections import defaultdict
from bisect import bisect_left

# Función para cargar los datos del archivo CSV en una lista ordenada
def cargar_datos():
    datos = []
    with open('C:/Users/euler/Downloads/euler.csv', mode='r', newline='') as file:
        reader = csv.reader(file)
        for row in reader:
            codigo, nombre, permanencia, correo, contrasena, tipo_usuario = row
            datos.append({
                'codigo': codigo,
                'nombre': nombre,
                'permanencia': permanencia,
                'correo': correo,
                'contrasena': contrasena,
                'tipo_usuario': tipo_usuario
            })
    # Ordenar la lista por correo electrónico (clave)
    datos.sort(key=lambda x: x['correo'])
    return datos

# Función para buscar un usuario en la lista mediante búsqueda binaria
def buscar_usuario():
    correo = correo_entry.get()
    contrasena = contrasena_entry.get()
    
    # Medir el tiempo inicial en microsegundos
    start_time = time.perf_counter_ns()
    
    # Realizar búsqueda binaria
    index = busqueda_binaria(correo)
    
    # Medir el tiempo final en microsegundos
    end_time = time.perf_counter_ns()
    
    tiempo_transcurrido = (end_time - start_time) // 1000  # Convertir a microsegundos
    
    if index is not None and datos_usuarios[index]['correo'] == correo and datos_usuarios[index]['contrasena'] == contrasena:
        mostrar_datos(datos_usuarios[index], tiempo_transcurrido)
    else:
        mostrar_datos(None, tiempo_transcurrido)

# Función para realizar búsqueda binaria en la lista de datos
def busqueda_binaria(correo):
    index = bisect_left(correos_ordenados, correo)
    if index < len(correos_ordenados) and correos_ordenados[index] == correo:
        return index
    return None

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

# Cargar los datos del archivo CSV en una lista ordenada y crear una lista de correos ordenados
datos_usuarios = cargar_datos()
correos_ordenados = [usuario['correo'] for usuario in datos_usuarios]

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
