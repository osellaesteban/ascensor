/*============================================================================
 * Autor: Grupo 4
 * Fecha: 2017-14-04 
 
 Usuarios:
 ML: Matias Loiseau
 EO: Esteban Osella
 GDZ: Gast�n Daniel Zapata
 
 ToDo: 
    --> 
        
        
 *===========================================================================*/

#ifndef _MEFMODOCONFIGURACION_H_
#define _MEFMODOCONFIGURACION_H_

/*==================[inclusiones]============================================*/

/*==================[c++]====================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/*==================[tipos de datos declarados por el usuario]===============*/
typedef enum{
    ESPERA_MENU, // entra a la configuracion
    ESPERA_CONFIRMACION,
    CONFIGURANDO,
    GUARDANDO,
    SALIR,
    PENDIENTE
    }configuracionMEF_t;

/*==================[definiciones de datos internos]=========================*/

/*==================[definiciones de datos externos]=========================*/
// ver de estas cuales son las que son necesarias conservar
configuracionMEF_t MEFconfiguracion;

/*==================[declaraciones de datos externos]========================*/

/*==================[declaraciones de funciones externas]====================*/

void secuenciaConfiguracion();

/*==================[c++]====================================================*/
#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* _MEFMODOCONFIGURACION_H_ */
