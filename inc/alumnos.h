/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/
//! Estructura de datos para alumnos  
typedef struct alumno_s {
    char apellidos[30];  //! apellido del alumno 
    char nombres[30];    //! nombre o nombres 
    char documento[11];  //! numero de documento !  
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/
static const struct alumno_s GASTON_VALDEZ = {
        .apellidos = "Valdez",
        .nombres = "Gaston Alejandro",
        .documento = "34.818.081",
    };

    const alumno_t ALUMNOS[] = {
        &GASTON_VALDEZ,
    };



/*=====[Prototypes (declarations) of public functions]=======================*/
/**
 * @brief funcion de serialización de un alumno 
 * 
 * Esta funcion es utilizada para convertir una estructura de datos del tipo
 * alumno a cadena y realizar la serialización  
 * 
 * @param[out] cadena puntero a cadena con el resultado
 * @param[in] espacio tamaño del espacio 
 * @param[in] alumno puntero a estructura de dato de tipo alumno 
 * @return true los datos del alumno se serializan correctamente 
 * @return false no hay espacio suficiente para serializar los datos del alumno
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);
/**
 * @brief 
 * 
 * @param cadena cadena donde se quiere guardar la serialización  
 * @param espacio 
 * @return true 
 * @return false 
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
