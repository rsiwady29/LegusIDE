#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QtGui>
#include "Editor.h"
#include "ColoreadoDeCodigo.h"
#include "ColoreadoDecodigoJava.h"
#include "Configuraciones.h"
#include "Bienvenida.h"
#define MAXIMO_ARCHIVOS_RECIENTES 6

namespace Ui {
    class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QString nombreArchivo="", QWidget *parent = 0);
    ~VentanaPrincipal();

private:
    Ui::VentanaPrincipal *ui;
    void cargarConfiguraciones();
    void agregarVentana(QString archivo="");
    Editor* ventanaActiva();
    bool cerrarVentanas();
    void actualizarArchivosRecientes(QString archivo);

protected:
    void keyPressEvent(QKeyEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    void accion_Abrir_Archivo_Reciente();
    void on_accionNuevo_Archivo_triggered();
    void on_accionGuardar_Archivo_triggered();
    void on_accionAbrir_Archivo_triggered();
    void on_accionCerrar_Archivo_triggered();
    void on_accionSalir_triggered();
    void on_actionAccionMostrarPanelBuscar_triggered();
    void on_btnCerrarBuscar_clicked();
    void on_accionInsertar_Bloque_Si_triggered();
    void on_accionInsertar_Bloque_Para_triggered();
    void on_accionInsertar_Bloque_Caso_triggered();
    void on_accionInsertar_Bloque_Mientras_triggered();
    void on_accionInsertar_Bloque_Repetir_triggered();
    void on_accionInsertar_Bloque_Repita_triggered();
    void on_accionInsertar_Bloque_Repita_Desde_triggered();
    void on_accionInsertar_Bloque_Para_Cada_triggered();
    void on_accionInsertar_Bloque_Funcion_triggered();
    void on_accionInsertar_Bloque_Utilizar_triggered();
    void on_accionCompilar_triggered();
    void on_accionBarra_de_Salida_triggered();
    void on_accionCerrar_Todos_triggered();
    void on_accionGuardar_Todos_triggered();
    void on_accionVista_a_la_Par_triggered();
    void on_accionOpciones_triggered();
    void on_txtTextoABuscar_returnPressed();
};

#endif // VENTANAPRINCIPAL_H
