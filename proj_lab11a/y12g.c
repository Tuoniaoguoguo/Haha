/*
 *  ======= y12g ========
 *  y12g target-side implementation
 *
 *  Created on: Nov 15, 2016
 *  Author:     a0219091
 */
#include <xdc/std.h>
#include <xdc/runtime/Startup.h>

#include "y12g.h"

/* include y12g internal implementation definitions */
#include "package/internal/y12g.xdc.h"

/*°¡sfs
 *  ======== y12g_Module_startup ========
 */
Int y12g_Module_startup(Int state)
{
    return (Startup_DONE);
}

#ifdef y12g_Object
/*
 *  ======== y12g_Instance_init ========
 *  y12g created or constructed instance object initialization
 */
Void y12g_Instance_init(y12g_Object *obj, const y12g_Params *params)
{
    /* TODO: initialize y12g instance state fields */
}
#endif
