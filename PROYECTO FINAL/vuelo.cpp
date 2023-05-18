
//clases: vuelo y pago
#include<iostream>
#include<string>

//#ifdef VUELO_H
//#define VUELO_H

using namespace std;

class Vuelo
{
    protected:
    string origen;
    string destino;
    string empresa;
    string hora_salida;
    string hora_llegada;
    string tipoTransporte;
    int precio_vuelo;

    public:
    Vuelo(string _origen="", string _destino="", string _empresa="", string _hora_salida="",string _hora_llegada="", string _tipoTransporte="",int _precio_vuelo = 0)
    {
        origen = _origen;
        destino = _destino;
        empresa = _empresa;
        hora_salida = _hora_salida;
        hora_llegada = _hora_llegada;
        tipoTransporte = _tipoTransporte;
        precio_vuelo = _precio_vuelo;
    }

    string getOrigen()
    {
        return origen ;
    }
    void setOrigen(string _origen)
    {
        origen = _origen;
    }

    string getDestino(){
        return destino;
    }
    void setDestino(string _destino)
    {
        destino = _destino;
    }

    string getEmpresa()
    {
        return empresa;
    }
    void setEmpresa(string _empresa)
    {
        empresa = _empresa;
    }

    string getHora_salida()
    {
        return hora_salida;
    }
    void setHora_salida(string _hora_salida)
    {
        hora_salida = _hora_salida;
    }

    string getHora_llegada()
    {
        return hora_llegada;
    }
    void setHora_llegada(string _hora_llegada)
    {
        hora_llegada = _hora_llegada;
    }

    string getTipoTransporte()
    {
        return tipoTransporte;
    }
    void setTipoTransporte(string _tipoTransporte)
    {
        tipoTransporte = _tipoTransporte;
          
        
    }

    int getPrecio_vuelo()
    {
        return precio_vuelo;
    }

    void setPrecio_vuelo(int _precio_vuelo)
    {
        precio_vuelo = _precio_vuelo;
    }
    //agregando


    string getDatos_vuelos()
    {
        return "\nORIGEN: " + getOrigen() + "\nDESTINO: " + getDestino() + "\nEMPRESA: " + getEmpresa() + "\nFECHA DE SALIDA: " + getHora_salida() + "\nFECHA DE LLEGADA: " + getHora_llegada() + "\nCLASE DE VUELO: " + getTipoTransporte() + "\nPRECIO: " + to_string(getPrecio_vuelo()) + "\n";
    }
};

class Pago
{
    //atributos
    
    protected:
    string modalidad_pago;
    string afirmacion_pago;

    Pago(string _modalidad_pago = "",string _afirmacion_pago = "")
    {
        modalidad_pago = _modalidad_pago;
        afirmacion_pago = _afirmacion_pago;
    }

    string getModalidad_pago()
    {
        return modalidad_pago;
    }

    void setModalidad_pago(string _modalidad_pago)
    {
        modalidad_pago = _modalidad_pago;
    }

    string getAfirmacion_pago()
    {
        return afirmacion_pago;
    }

    void setAfirmacion_pago(string _afirmacion_pago)
    {
        afirmacion_pago = _afirmacion_pago;
    }

    string Datos_pago()
    {
        return "MODALIDAD DE PAGO: " + getModalidad_pago() + "\nCONFIRACION DE PAGO: " + getAfirmacion_pago() + "\n";

    }
        
};

//#endif
