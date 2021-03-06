/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   proton-wrapper.h
 * Author: otavio
 *
 * Created on May 30, 2016, 9:30 PM
 */

#ifndef PROTON_WRAPPER_H
#define PROTON_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif


    
#include "msgctxt.h"
#include "statistics.h"
#include "proton-context.h"
#include "contrib/options.h"

#include <math.h>
#include <sys/time.h>
    
#include <proton/messenger.h>
#include <proton/message.h>


msg_ctxt_t *proton_init(void *data);
void proton_stop(msg_ctxt_t *ctxt);
void proton_destroy(msg_ctxt_t *ctxt);



void proton_send(msg_ctxt_t *ctxt, msg_content_loader content_loader);
void proton_subscribe(msg_ctxt_t *ctxt, void *data);
void proton_receive(msg_ctxt_t *ctxt, msg_content_data_t *content);

#ifdef __cplusplus
}
#endif

#endif /* PROTON_WRAPPER_H */

