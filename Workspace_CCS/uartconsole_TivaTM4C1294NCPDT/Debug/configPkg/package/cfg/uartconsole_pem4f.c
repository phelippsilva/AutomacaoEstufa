/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A32
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <ti/uia/sysbios/LoggerIdle.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysCallback.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== ti.uia.sysbios.LoggerIdle INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_sysbios_LoggerIdle_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_sysbios_LoggerIdle_Module__;

/* Module__root__V */
extern ti_uia_sysbios_LoggerIdle_Module__ ti_uia_sysbios_LoggerIdle_Module__root__V;

/* Object__ */
typedef struct ti_uia_sysbios_LoggerIdle_Object__ {
    const ti_uia_sysbios_LoggerIdle_Fxns__ *__fxns;
} ti_uia_sysbios_LoggerIdle_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_sysbios_LoggerIdle_Object__ obj;
} ti_uia_sysbios_LoggerIdle_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_sysbios_LoggerIdle___VERS
    #define ti_uia_sysbios_LoggerIdle___ParamsPtr xdc_UChar*
#else
    #define ti_uia_sysbios_LoggerIdle___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysCallback INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.uia.events.UIAErr INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.uia.events.UIAEvt INHERITS ========
 */



/*
 * ======== ti.uia.sysbios.LoggerIdle INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.SysCallback INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.TimestampNull INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {(void*)&xdc_runtime_ITimestampClient_Interface__BASE__C};



/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x2b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x2d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x2e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x31, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x25, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x26, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.sysbios.LoggerIdle VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__FXNS__C, ".const:ti_uia_sysbios_LoggerIdle_Module__FXNS__C");
const ti_uia_sysbios_LoggerIdle_Fxns__ ti_uia_sysbios_LoggerIdle_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* __base */
    &ti_uia_sysbios_LoggerIdle_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_sysbios_LoggerIdle_enable__E,
    ti_uia_sysbios_LoggerIdle_disable__E,
    ti_uia_sysbios_LoggerIdle_write0__E,
    ti_uia_sysbios_LoggerIdle_write1__E,
    ti_uia_sysbios_LoggerIdle_write2__E,
    ti_uia_sysbios_LoggerIdle_write4__E,
    ti_uia_sysbios_LoggerIdle_write8__E,
    {
        ti_uia_sysbios_LoggerIdle_Object__create__S,
        ti_uia_sysbios_LoggerIdle_Object__delete__S,
        ti_uia_sysbios_LoggerIdle_Handle__label__S,
        0x29, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysCallback VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__FXNS__C, ".const:xdc_runtime_SysCallback_Module__FXNS__C");
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysCallback_abort__E,
    xdc_runtime_SysCallback_exit__E,
    xdc_runtime_SysCallback_flush__E,
    xdc_runtime_SysCallback_putch__E,
    xdc_runtime_SysCallback_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xb, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xd, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xe, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[8];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[8];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536] __attribute__ ((aligned(8)));
#endif
#endif

/* --> consoleFxn */
extern xdc_Void consoleFxn(xdc_UArg,xdc_UArg);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== ti.uia.sysbios.LoggerIdle DECLARATIONS ========
 */

/* Object__table__V */
ti_uia_sysbios_LoggerIdle_Object__ ti_uia_sysbios_LoggerIdle_Object__table__V[1];

/* Module_State__ */
typedef struct ti_uia_sysbios_LoggerIdle_Module_State__ {
    ti_uia_sysbios_LoggerIdle_LoggerFxn loggerFxn;
    xdc_Bool enabled;
    xdc_Bool empty;
    xdc_UInt bufferSize;
    __TA_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer idleBuffer;
    __TA_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer tempBuffer;
    xdc_UInt32 *bufferRead;
    xdc_UInt32 *bufferWrite;
    xdc_UInt32 *bufferPad;
    xdc_UInt32 *bufferEnd;
    xdc_UInt16 eventSequenceNum;
} ti_uia_sysbios_LoggerIdle_Module_State__;

/* --> USBCDCD_LoggerIdle_sendData */
extern xdc_Int USBCDCD_LoggerIdle_sendData(xdc_UChar*,xdc_Int);

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1024];

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A[16];

/* Module__state__V */
ti_uia_sysbios_LoggerIdle_Module_State__ ti_uia_sysbios_LoggerIdle_Module__state__V;

/* --> USBCDCD_LoggerIdle_sendData */
extern xdc_Int USBCDCD_LoggerIdle_sendData(xdc_UChar*,xdc_Int);


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[7];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[7];


/*
 * ======== xdc.runtime.SysCallback DECLARATIONS ========
 */

/* --> UARTUtils_systemAbort */
extern xdc_Void UARTUtils_systemAbort(xdc_CString);

/* --> xdc_runtime_SysCallback_defaultExit */
extern xdc_Void xdc_runtime_SysCallback_defaultExit(xdc_Int);

/* --> xdc_runtime_SysCallback_defaultFlush */
extern xdc_Void xdc_runtime_SysCallback_defaultFlush(xdc_Void);

/* --> UARTUtils_systemPutch */
extern xdc_Void UARTUtils_systemPutch(xdc_Char);

/* --> UARTUtils_systemReady */
extern xdc_Bool UARTUtils_systemReady(xdc_Void);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7147];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/Tiago/Documents/GitHub/AutomacaoEstufa/Workspace_CCS/uartconsole_TivaTM4C1294NCPDT/Debug/configPkg/package/cfg/uartconsole_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32770, &xdc_runtime_Main_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[7];
    xdc_runtime_Startup_startModsFxn__C(state, 7);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[3];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockFreqSet((ULong)
        (-251656576), (ULong)(120000000));
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Clock_workFunc__E(0, 0);
    }
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}
#if defined(__ti__)

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}
#endif

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
#if defined(__ti__)
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();
#endif

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
#if defined(__ti__)
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
#endif
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the default/user's Error.raiseHook */
    if (ti_sysbios_BIOS_installedErrorHook != NULL) {
        ti_sysbios_BIOS_installedErrorHook(eb);
    }
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.uia.sysbios.LoggerIdle TEMPLATE ========
 */


#include <xdc/std.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/sysbios/LoggerIdle.h>


/*
 *  ======== isThereSpace =========
 *  Returns true if there is enough space to write to the buffer.
 */
static inline Bool ti_uia_sysbios_LoggerIdle_isThereSpace(
        UInt32 *writePtr, SizeT numBits32ToWrite)
{
    UInt32 space;

    space = ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead - writePtr;

    if (ti_uia_sysbios_LoggerIdle_Module__state__V.empty ||
            (writePtr > ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead)) {
        return (TRUE);
    }

    /*
     *  bufferRead >= writePtr
     *  TODO: Check why we need the condition
     *      LoggerIdle_module->bufferRead <= LoggerIdle_module->bufferEnd
     *  It seems like that condition cannot exist when this function is
     *  called.
     */
    if ((space >= numBits32ToWrite) && (ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead <=
                ti_uia_sysbios_LoggerIdle_Module__state__V.bufferEnd)) {
        return (TRUE);
    }

    return (FALSE);
}

/*
 *  ======== writeStart =========
 *  Writes the event header, timestamp and event and module ID for all events.
 *
 *  Checks if the event should be written and writes the event header.
 *  If timestamps are enabled it writes timestamp, and for all types
 *  write the event and module ID. Returns false if the event is not written.
 */
static inline UInt32 *ti_uia_sysbios_LoggerIdle_writeStart(
        UInt32 *writePtr, SizeT numBits32ToWrite,
        xdc_runtime_Log_Event evt, xdc_runtime_Types_ModuleId mid)
{
    xdc_runtime_Types_Timestamp64 tstamp;
    UInt32 totalBits32ToWrite = numBits32ToWrite;
    UInt32 length;

    /* Logger is disabled. */
    if (!ti_uia_sysbios_LoggerIdle_Module__state__V.enabled) {
        return NULL;
    }

    totalBits32ToWrite += 2;

    /* Check if there's enough space for event with timestamp */
    while (!ti_uia_sysbios_LoggerIdle_isThereSpace(writePtr,
                   totalBits32ToWrite)) {
        /*
         *  Adjust bufferRead to the next record that won't be
         *  overwritten
         */
        xdc_runtime_Assert_isTrue(ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead <
                ti_uia_sysbios_LoggerIdle_Module__state__V.bufferPad, NULL);

        /* Length in 32-bit words */
        length = ti_uia_runtime_EventHdr_getLength(
            *(ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead)) / 4;

        ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead += length;

        if ((Bits32)ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead >
                (Bits32)ti_uia_sysbios_LoggerIdle_Module__state__V.bufferPad) {
            ti_uia_sysbios_LoggerIdle_Module__state__V.bufferRead = ti_uia_sysbios_LoggerIdle_Module__state__V.idleBuffer;
        }
    }

    /* Write timestamp event header */
    *writePtr++ = ti_uia_runtime_EventHdr_genEventHdrWord1(
                ((totalBits32ToWrite) * 4),
                ti_uia_sysbios_LoggerIdle_Module__state__V.eventSequenceNum,
                ti_uia_runtime_EventHdr_HdrType_EventWithTimestamp);

    /* Get and write the timestamp */
    xdc_runtime_Timestamp_get64(&tstamp);
    *writePtr++ = tstamp.lo;
    *writePtr++ = tstamp.hi;

    return (writePtr);
}

/*
 *  ======== writeFinish =========
 *  Incrememnt write pointer and mark buffer not empty.
 */
static inline Void ti_uia_sysbios_LoggerIdle_writeFinish(UInt32 *writePtr)
{
    /*
     *  If write pointer is inside the pad, set the pad pointer to its
     *  location and set the write pointer to the begining of the buffer.
     *  Else increment the pointer normally.
     */
    if (writePtr > ti_uia_sysbios_LoggerIdle_Module__state__V.bufferEnd) {
        ti_uia_sysbios_LoggerIdle_Module__state__V.bufferPad = (writePtr - 1);
        ti_uia_sysbios_LoggerIdle_Module__state__V.bufferWrite = ti_uia_sysbios_LoggerIdle_Module__state__V.idleBuffer;
    }
    else {
        ti_uia_sysbios_LoggerIdle_Module__state__V.bufferWrite = writePtr;
    }
    ti_uia_sysbios_LoggerIdle_Module__state__V.empty = FALSE;      /* Buffer now has data in it */
}

/*
 *  ======== LoggerIdle_write =========
 */
Void ti_uia_sysbios_LoggerIdle_write__I(xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg numEventWords,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    register UInt32 *writePtr = ti_uia_sysbios_LoggerIdle_Module__state__V.bufferWrite;

    ti_uia_sysbios_LoggerIdle_Module__state__V.eventSequenceNum++;

    if (writePtr == NULL) {
        ti_sysbios_hal_Hwi_restore(key);
        return;
    }

    if (!ti_uia_sysbios_LoggerIdle_Module__state__V.enabled) {
        ti_sysbios_hal_Hwi_restore(key);
        return;
    }

    writePtr = ti_uia_sysbios_LoggerIdle_writeStart(writePtr,
            numEventWords, evt, mid);

    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt),
            mid);

    if (numEventWords >= 3) {
        *writePtr++ = a1;

        if (numEventWords >= 4) {
            *writePtr++ = a2;

            if (numEventWords >= 6) {
                *writePtr++ = a3;
                *writePtr++ = a4;

                if (numEventWords == 10) {
                    *writePtr++ = a5;
                    *writePtr++ = a6;
                    *writePtr++ = a7;
                    *writePtr++ = a8;
                }
            }
        }
    }

    ti_uia_sysbios_LoggerIdle_writeFinish(writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x14;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x7270e00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x22;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x7270e00,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 0;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x800;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x1d4c0,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[8] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x4f,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x51,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
    {
        (xdc_UInt)0x72,  /* intNum */
        ((xdc_Ptr)(0x400e0000)),  /* baseAddr */
    },  /* [6] */
    {
        (xdc_UInt)0x74,  /* intNum */
        ((xdc_Ptr)(0x400e1000)),  /* baseAddr */
    },  /* [7] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[8] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0xfc,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x30;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4539) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4575) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4614) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0xff;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x2f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x300,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x2a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6985) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7055) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)2373) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4053) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4101) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4149) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4354) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4382) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4392) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4408) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4438) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4468) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4485) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4506) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4521) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)0);

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)0);

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x2b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x2c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x2d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x2e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2786) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x1f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4016) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x800)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x31;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3308) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3344) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3389) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4762) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3280) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    0,  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x15;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4974) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4996) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5014) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)559) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)640) << 16 | 16);

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x18;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_sysbios_LoggerIdle_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5046) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5100) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)710) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)757) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)796) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)902) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_uia_sysbios_LoggerIdle_idleWriteEvent__I)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x16;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x17;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x19;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x1a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5181) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5211) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1050) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1170) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1224) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x600,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)consoleFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x1b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_sysbios_LoggerIdle_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5254) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5322) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5367) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5408) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5440) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5488) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5544) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5575) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5658) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5744) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3891) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3934) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3985) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1424) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1493) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1547) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1601) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1664) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1714) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1749) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1782) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1866) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x4;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 0;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x2,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x21;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)5814) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)5831) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)5849) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)5867) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x24;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x25;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)5896) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)5918) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)5945) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)5970) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6000) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6028) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6061) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6092) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6128) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6153) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6187) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6225) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6261) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6307) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6341) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6373) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6407) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6453) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6518) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6557) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6601) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6638) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6687) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6723) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x26;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6786) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6810) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6839) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)6861) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)6888) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)6911) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)6940) << 16 | 32768);


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x27;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x28;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== ti.uia.sysbios.LoggerIdle INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_sysbios_LoggerIdle_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__PARAMS__C, ".const:ti_uia_sysbios_LoggerIdle_Object__PARAMS__C");
__FAR__ const ti_uia_sysbios_LoggerIdle_Params ti_uia_sysbios_LoggerIdle_Object__PARAMS__C = {
    sizeof (ti_uia_sysbios_LoggerIdle_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_sysbios_LoggerIdle_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_uia_sysbios_LoggerIdle_Module__ ti_uia_sysbios_LoggerIdle_Module__root__V = {
    {&ti_uia_sysbios_LoggerIdle_Module__root__V.link,  /* link.next */
    &ti_uia_sysbios_LoggerIdle_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_sysbios_LoggerIdle_Object__ ti_uia_sysbios_LoggerIdle_Object__table__V[1] = {
    {/* instance#0 */
        &ti_uia_sysbios_LoggerIdle_Module__FXNS__C,
    },
};

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1024];

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A[16];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_sysbios_LoggerIdle_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
ti_uia_sysbios_LoggerIdle_Module_State__ ti_uia_sysbios_LoggerIdle_Module__state__V __attribute__ ((section(".data_ti_uia_sysbios_LoggerIdle_Module__state__V")));
#endif
#endif
ti_uia_sysbios_LoggerIdle_Module_State__ ti_uia_sysbios_LoggerIdle_Module__state__V = {
    ((xdc_Int(*)(xdc_UChar*,xdc_Int))((xdc_Fxn)USBCDCD_LoggerIdle_sendData)),  /* loggerFxn */
    1,  /* enabled */
    1,  /* empty */
    (xdc_UInt)0x400,  /* bufferSize */
    ((void*)ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A),  /* idleBuffer */
    ((void*)ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A),  /* tempBuffer */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[0])),  /* bufferRead */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[0])),  /* bufferWrite */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1023])),  /* bufferPad */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1012])),  /* bufferEnd */
    (xdc_UInt16)0x0,  /* eventSequenceNum */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsEnabled ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsIncluded ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsMask__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsMask__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsMask ti_uia_sysbios_LoggerIdle_Module__diagsMask__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__gateObj__C, ".const:ti_uia_sysbios_LoggerIdle_Module__gateObj__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__gateObj ti_uia_sysbios_LoggerIdle_Module__gateObj__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__gatePrms__C, ".const:ti_uia_sysbios_LoggerIdle_Module__gatePrms__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__gatePrms ti_uia_sysbios_LoggerIdle_Module__gatePrms__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__id__C, ".const:ti_uia_sysbios_LoggerIdle_Module__id__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__id ti_uia_sysbios_LoggerIdle_Module__id__C = (xdc_Bits16)0x29;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerDefined ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerObj__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerObj__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerObj ti_uia_sysbios_LoggerIdle_Module__loggerObj__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn0 ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn1 ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn2 ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn4 ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn8 ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C, ".const:ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__count__C, ".const:ti_uia_sysbios_LoggerIdle_Object__count__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__count ti_uia_sysbios_LoggerIdle_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__heap__C, ".const:ti_uia_sysbios_LoggerIdle_Object__heap__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__heap ti_uia_sysbios_LoggerIdle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__sizeof__C, ".const:ti_uia_sysbios_LoggerIdle_Object__sizeof__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__sizeof ti_uia_sysbios_LoggerIdle_Object__sizeof__C = sizeof(ti_uia_sysbios_LoggerIdle_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__table__C, ".const:ti_uia_sysbios_LoggerIdle_Object__table__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__table ti_uia_sysbios_LoggerIdle_Object__table__C = ti_uia_sysbios_LoggerIdle_Object__table__V;

/* bufferSize__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_bufferSize__C, ".const:ti_uia_sysbios_LoggerIdle_bufferSize__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_bufferSize ti_uia_sysbios_LoggerIdle_bufferSize__C = (xdc_SizeT)0x400;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C, ".const:ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_isTimestampEnabled ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C = 1;

/* customTransportType__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_customTransportType__C, ".const:ti_uia_sysbios_LoggerIdle_customTransportType__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_customTransportType ti_uia_sysbios_LoggerIdle_customTransportType__C = 0;

/* transportFxn__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_transportFxn__C, ".const:ti_uia_sysbios_LoggerIdle_transportFxn__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_transportFxn ti_uia_sysbios_LoggerIdle_transportFxn__C = ((CT__ti_uia_sysbios_LoggerIdle_transportFxn)((xdc_Fxn)USBCDCD_LoggerIdle_sendData));

/* writeWhenFull__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_writeWhenFull__C, ".const:ti_uia_sysbios_LoggerIdle_writeWhenFull__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_writeWhenFull ti_uia_sysbios_LoggerIdle_writeWhenFull__C = 0;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_L_test__C, ".const:ti_uia_sysbios_LoggerIdle_L_test__C");
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_L_test ti_uia_sysbios_LoggerIdle_L_test__C = (((xdc_runtime_Log_Event)6974) << 16 | 256);


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3651) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3673) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3677) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3711) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4798) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4822) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4843) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4862) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4879) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4893) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4909) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4916) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4927) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4937) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4956) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_sysbios_LoggerIdle_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x8;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_sysbios_LoggerIdle_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_sysbios_LoggerIdle_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[7] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [6] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[7] = {
    1,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    1,  /* [5] */
    0,  /* [6] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x9;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysCallback INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsEnabled__C, ".const:xdc_runtime_SysCallback_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsIncluded__C, ".const:xdc_runtime_SysCallback_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsMask__C, ".const:xdc_runtime_SysCallback_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C = ((CT__xdc_runtime_SysCallback_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gateObj__C, ".const:xdc_runtime_SysCallback_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C = ((CT__xdc_runtime_SysCallback_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gatePrms__C, ".const:xdc_runtime_SysCallback_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C = ((CT__xdc_runtime_SysCallback_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__id__C, ".const:xdc_runtime_SysCallback_Module__id__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C = (xdc_Bits16)0xb;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerDefined__C, ".const:xdc_runtime_SysCallback_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerObj__C, ".const:xdc_runtime_SysCallback_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C = ((CT__xdc_runtime_SysCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn0__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn1__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn2__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn4__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn8__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_SysCallback_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_Module__startupDoneFxn xdc_runtime_SysCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysCallback_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__count__C, ".const:xdc_runtime_SysCallback_Object__count__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__heap__C, ".const:xdc_runtime_SysCallback_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__sizeof__C, ".const:xdc_runtime_SysCallback_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__table__C, ".const:xdc_runtime_SysCallback_Object__table__C");
__FAR__ const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C = 0;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_abortFxn__C, ".const:xdc_runtime_SysCallback_abortFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_abortFxn xdc_runtime_SysCallback_abortFxn__C = ((CT__xdc_runtime_SysCallback_abortFxn)((xdc_Fxn)UARTUtils_systemAbort));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_exitFxn__C, ".const:xdc_runtime_SysCallback_exitFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_exitFxn xdc_runtime_SysCallback_exitFxn__C = ((CT__xdc_runtime_SysCallback_exitFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultExit));

/* flushFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_flushFxn__C, ".const:xdc_runtime_SysCallback_flushFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_flushFxn xdc_runtime_SysCallback_flushFxn__C = ((CT__xdc_runtime_SysCallback_flushFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultFlush));

/* putchFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_putchFxn__C, ".const:xdc_runtime_SysCallback_putchFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_putchFxn xdc_runtime_SysCallback_putchFxn__C = ((CT__xdc_runtime_SysCallback_putchFxn)((xdc_Fxn)UARTUtils_systemPutch));

/* readyFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysCallback_readyFxn__C, ".const:xdc_runtime_SysCallback_readyFxn__C");
__FAR__ const CT__xdc_runtime_SysCallback_readyFxn xdc_runtime_SysCallback_readyFxn__C = ((CT__xdc_runtime_SysCallback_readyFxn)((xdc_Fxn)UARTUtils_systemReady));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xa;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined (__GNUC__)
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7147] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x63,  /* [561] */
    (xdc_Char)0x6c,  /* [562] */
    (xdc_Char)0x6f,  /* [563] */
    (xdc_Char)0x63,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x44,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x73,  /* [568] */
    (xdc_Char)0x61,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x6c,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x3a,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x43,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x6f,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x63,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x65,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x74,  /* [587] */
    (xdc_Char)0x65,  /* [588] */
    (xdc_Char)0x20,  /* [589] */
    (xdc_Char)0x61,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x6c,  /* [593] */
    (xdc_Char)0x6f,  /* [594] */
    (xdc_Char)0x63,  /* [595] */
    (xdc_Char)0x6b,  /* [596] */
    (xdc_Char)0x20,  /* [597] */
    (xdc_Char)0x69,  /* [598] */
    (xdc_Char)0x6e,  /* [599] */
    (xdc_Char)0x73,  /* [600] */
    (xdc_Char)0x74,  /* [601] */
    (xdc_Char)0x61,  /* [602] */
    (xdc_Char)0x6e,  /* [603] */
    (xdc_Char)0x63,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x20,  /* [606] */
    (xdc_Char)0x77,  /* [607] */
    (xdc_Char)0x68,  /* [608] */
    (xdc_Char)0x65,  /* [609] */
    (xdc_Char)0x6e,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x42,  /* [612] */
    (xdc_Char)0x49,  /* [613] */
    (xdc_Char)0x4f,  /* [614] */
    (xdc_Char)0x53,  /* [615] */
    (xdc_Char)0x2e,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x45,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x61,  /* [624] */
    (xdc_Char)0x62,  /* [625] */
    (xdc_Char)0x6c,  /* [626] */
    (xdc_Char)0x65,  /* [627] */
    (xdc_Char)0x64,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x69,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x66,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x6c,  /* [635] */
    (xdc_Char)0x73,  /* [636] */
    (xdc_Char)0x65,  /* [637] */
    (xdc_Char)0x2e,  /* [638] */
    (xdc_Char)0x0,  /* [639] */
    (xdc_Char)0x41,  /* [640] */
    (xdc_Char)0x5f,  /* [641] */
    (xdc_Char)0x62,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x68,  /* [646] */
    (xdc_Char)0x72,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x64,  /* [650] */
    (xdc_Char)0x54,  /* [651] */
    (xdc_Char)0x79,  /* [652] */
    (xdc_Char)0x70,  /* [653] */
    (xdc_Char)0x65,  /* [654] */
    (xdc_Char)0x3a,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x43,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x6f,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x63,  /* [664] */
    (xdc_Char)0x72,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x74,  /* [668] */
    (xdc_Char)0x65,  /* [669] */
    (xdc_Char)0x2f,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x65,  /* [674] */
    (xdc_Char)0x74,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x61,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x43,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x63,  /* [683] */
    (xdc_Char)0x6b,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x66,  /* [686] */
    (xdc_Char)0x72,  /* [687] */
    (xdc_Char)0x6f,  /* [688] */
    (xdc_Char)0x6d,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x48,  /* [691] */
    (xdc_Char)0x77,  /* [692] */
    (xdc_Char)0x69,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x6f,  /* [695] */
    (xdc_Char)0x72,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x53,  /* [698] */
    (xdc_Char)0x77,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x74,  /* [702] */
    (xdc_Char)0x68,  /* [703] */
    (xdc_Char)0x72,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x61,  /* [706] */
    (xdc_Char)0x64,  /* [707] */
    (xdc_Char)0x2e,  /* [708] */
    (xdc_Char)0x0,  /* [709] */
    (xdc_Char)0x41,  /* [710] */
    (xdc_Char)0x5f,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x75,  /* [713] */
    (xdc_Char)0x6c,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x45,  /* [716] */
    (xdc_Char)0x76,  /* [717] */
    (xdc_Char)0x65,  /* [718] */
    (xdc_Char)0x6e,  /* [719] */
    (xdc_Char)0x74,  /* [720] */
    (xdc_Char)0x4d,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x73,  /* [723] */
    (xdc_Char)0x6b,  /* [724] */
    (xdc_Char)0x73,  /* [725] */
    (xdc_Char)0x3a,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x6f,  /* [728] */
    (xdc_Char)0x72,  /* [729] */
    (xdc_Char)0x4d,  /* [730] */
    (xdc_Char)0x61,  /* [731] */
    (xdc_Char)0x73,  /* [732] */
    (xdc_Char)0x6b,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x6e,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x4d,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x73,  /* [744] */
    (xdc_Char)0x6b,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x61,  /* [747] */
    (xdc_Char)0x72,  /* [748] */
    (xdc_Char)0x65,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6e,  /* [751] */
    (xdc_Char)0x75,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x2e,  /* [755] */
    (xdc_Char)0x0,  /* [756] */
    (xdc_Char)0x41,  /* [757] */
    (xdc_Char)0x5f,  /* [758] */
    (xdc_Char)0x6e,  /* [759] */
    (xdc_Char)0x75,  /* [760] */
    (xdc_Char)0x6c,  /* [761] */
    (xdc_Char)0x6c,  /* [762] */
    (xdc_Char)0x45,  /* [763] */
    (xdc_Char)0x76,  /* [764] */
    (xdc_Char)0x65,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x74,  /* [767] */
    (xdc_Char)0x49,  /* [768] */
    (xdc_Char)0x64,  /* [769] */
    (xdc_Char)0x3a,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x70,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x73,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x64,  /* [777] */
    (xdc_Char)0x20,  /* [778] */
    (xdc_Char)0x65,  /* [779] */
    (xdc_Char)0x76,  /* [780] */
    (xdc_Char)0x65,  /* [781] */
    (xdc_Char)0x6e,  /* [782] */
    (xdc_Char)0x74,  /* [783] */
    (xdc_Char)0x49,  /* [784] */
    (xdc_Char)0x64,  /* [785] */
    (xdc_Char)0x20,  /* [786] */
    (xdc_Char)0x69,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x75,  /* [791] */
    (xdc_Char)0x6c,  /* [792] */
    (xdc_Char)0x6c,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x65,  /* [798] */
    (xdc_Char)0x76,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x6e,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x49,  /* [803] */
    (xdc_Char)0x6e,  /* [804] */
    (xdc_Char)0x55,  /* [805] */
    (xdc_Char)0x73,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x45,  /* [810] */
    (xdc_Char)0x76,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x74,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x6f,  /* [816] */
    (xdc_Char)0x62,  /* [817] */
    (xdc_Char)0x6a,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x63,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x61,  /* [823] */
    (xdc_Char)0x6c,  /* [824] */
    (xdc_Char)0x72,  /* [825] */
    (xdc_Char)0x65,  /* [826] */
    (xdc_Char)0x61,  /* [827] */
    (xdc_Char)0x64,  /* [828] */
    (xdc_Char)0x79,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x69,  /* [831] */
    (xdc_Char)0x6e,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x75,  /* [834] */
    (xdc_Char)0x73,  /* [835] */
    (xdc_Char)0x65,  /* [836] */
    (xdc_Char)0x2e,  /* [837] */
    (xdc_Char)0x0,  /* [838] */
    (xdc_Char)0x41,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x62,  /* [841] */
    (xdc_Char)0x61,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x43,  /* [844] */
    (xdc_Char)0x6f,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x65,  /* [848] */
    (xdc_Char)0x78,  /* [849] */
    (xdc_Char)0x74,  /* [850] */
    (xdc_Char)0x3a,  /* [851] */
    (xdc_Char)0x20,  /* [852] */
    (xdc_Char)0x62,  /* [853] */
    (xdc_Char)0x61,  /* [854] */
    (xdc_Char)0x64,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x6e,  /* [862] */
    (xdc_Char)0x67,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x63,  /* [865] */
    (xdc_Char)0x6f,  /* [866] */
    (xdc_Char)0x6e,  /* [867] */
    (xdc_Char)0x74,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x78,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x2e,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x75,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x62,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x20,  /* [881] */
    (xdc_Char)0x63,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x6c,  /* [884] */
    (xdc_Char)0x6c,  /* [885] */
    (xdc_Char)0x65,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x20,  /* [888] */
    (xdc_Char)0x66,  /* [889] */
    (xdc_Char)0x72,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x6d,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x61,  /* [894] */
    (xdc_Char)0x20,  /* [895] */
    (xdc_Char)0x54,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x73,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x2e,  /* [900] */
    (xdc_Char)0x0,  /* [901] */
    (xdc_Char)0x41,  /* [902] */
    (xdc_Char)0x5f,  /* [903] */
    (xdc_Char)0x70,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x6e,  /* [906] */
    (xdc_Char)0x64,  /* [907] */
    (xdc_Char)0x54,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x73,  /* [910] */
    (xdc_Char)0x6b,  /* [911] */
    (xdc_Char)0x44,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x61,  /* [915] */
    (xdc_Char)0x62,  /* [916] */
    (xdc_Char)0x6c,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x64,  /* [919] */
    (xdc_Char)0x3a,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x43,  /* [922] */
    (xdc_Char)0x61,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x63,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x6c,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x20,  /* [933] */
    (xdc_Char)0x45,  /* [934] */
    (xdc_Char)0x76,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x6e,  /* [937] */
    (xdc_Char)0x74,  /* [938] */
    (xdc_Char)0x5f,  /* [939] */
    (xdc_Char)0x70,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x6e,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x28,  /* [944] */
    (xdc_Char)0x29,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x77,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x69,  /* [949] */
    (xdc_Char)0x6c,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x20,  /* [952] */
    (xdc_Char)0x74,  /* [953] */
    (xdc_Char)0x68,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x20,  /* [956] */
    (xdc_Char)0x54,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x53,  /* [965] */
    (xdc_Char)0x77,  /* [966] */
    (xdc_Char)0x69,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x73,  /* [969] */
    (xdc_Char)0x63,  /* [970] */
    (xdc_Char)0x68,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x64,  /* [973] */
    (xdc_Char)0x75,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x72,  /* [977] */
    (xdc_Char)0x20,  /* [978] */
    (xdc_Char)0x69,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x20,  /* [981] */
    (xdc_Char)0x64,  /* [982] */
    (xdc_Char)0x69,  /* [983] */
    (xdc_Char)0x73,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x62,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x65,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x4d,  /* [992] */
    (xdc_Char)0x61,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6c,  /* [995] */
    (xdc_Char)0x62,  /* [996] */
    (xdc_Char)0x6f,  /* [997] */
    (xdc_Char)0x78,  /* [998] */
    (xdc_Char)0x5f,  /* [999] */
    (xdc_Char)0x63,  /* [1000] */
    (xdc_Char)0x72,  /* [1001] */
    (xdc_Char)0x65,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x65,  /* [1005] */
    (xdc_Char)0x27,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x62,  /* [1009] */
    (xdc_Char)0x75,  /* [1010] */
    (xdc_Char)0x66,  /* [1011] */
    (xdc_Char)0x53,  /* [1012] */
    (xdc_Char)0x69,  /* [1013] */
    (xdc_Char)0x7a,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x61,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x6d,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x65,  /* [1024] */
    (xdc_Char)0x72,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x69,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x69,  /* [1030] */
    (xdc_Char)0x6e,  /* [1031] */
    (xdc_Char)0x76,  /* [1032] */
    (xdc_Char)0x61,  /* [1033] */
    (xdc_Char)0x6c,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x64,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x28,  /* [1038] */
    (xdc_Char)0x74,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x6f,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x6d,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x6c,  /* [1046] */
    (xdc_Char)0x6c,  /* [1047] */
    (xdc_Char)0x29,  /* [1048] */
    (xdc_Char)0x0,  /* [1049] */
    (xdc_Char)0x41,  /* [1050] */
    (xdc_Char)0x5f,  /* [1051] */
    (xdc_Char)0x6e,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x45,  /* [1054] */
    (xdc_Char)0x76,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x6e,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x73,  /* [1059] */
    (xdc_Char)0x3a,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x54,  /* [1062] */
    (xdc_Char)0x68,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x20,  /* [1065] */
    (xdc_Char)0x45,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x2e,  /* [1071] */
    (xdc_Char)0x73,  /* [1072] */
    (xdc_Char)0x75,  /* [1073] */
    (xdc_Char)0x70,  /* [1074] */
    (xdc_Char)0x70,  /* [1075] */
    (xdc_Char)0x6f,  /* [1076] */
    (xdc_Char)0x72,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x45,  /* [1080] */
    (xdc_Char)0x76,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x6e,  /* [1083] */
    (xdc_Char)0x74,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x66,  /* [1087] */
    (xdc_Char)0x6c,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x67,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x69,  /* [1092] */
    (xdc_Char)0x73,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x69,  /* [1096] */
    (xdc_Char)0x73,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x62,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x69,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x76,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x69,  /* [1111] */
    (xdc_Char)0x6d,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6f,  /* [1114] */
    (xdc_Char)0x75,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x43,  /* [1119] */
    (xdc_Char)0x61,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x27,  /* [1122] */
    (xdc_Char)0x74,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x75,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x65,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x42,  /* [1129] */
    (xdc_Char)0x49,  /* [1130] */
    (xdc_Char)0x4f,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x45,  /* [1134] */
    (xdc_Char)0x56,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x4e,  /* [1137] */
    (xdc_Char)0x54,  /* [1138] */
    (xdc_Char)0x5f,  /* [1139] */
    (xdc_Char)0x41,  /* [1140] */
    (xdc_Char)0x43,  /* [1141] */
    (xdc_Char)0x51,  /* [1142] */
    (xdc_Char)0x55,  /* [1143] */
    (xdc_Char)0x49,  /* [1144] */
    (xdc_Char)0x52,  /* [1145] */
    (xdc_Char)0x45,  /* [1146] */
    (xdc_Char)0x44,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x77,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x74,  /* [1151] */
    (xdc_Char)0x68,  /* [1152] */
    (xdc_Char)0x20,  /* [1153] */
    (xdc_Char)0x74,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x69,  /* [1156] */
    (xdc_Char)0x73,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x53,  /* [1159] */
    (xdc_Char)0x65,  /* [1160] */
    (xdc_Char)0x6d,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x70,  /* [1163] */
    (xdc_Char)0x68,  /* [1164] */
    (xdc_Char)0x6f,  /* [1165] */
    (xdc_Char)0x72,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x2e,  /* [1168] */
    (xdc_Char)0x0,  /* [1169] */
    (xdc_Char)0x41,  /* [1170] */
    (xdc_Char)0x5f,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x76,  /* [1173] */
    (xdc_Char)0x65,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x66,  /* [1176] */
    (xdc_Char)0x6c,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x77,  /* [1179] */
    (xdc_Char)0x3a,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x43,  /* [1182] */
    (xdc_Char)0x6f,  /* [1183] */
    (xdc_Char)0x75,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x68,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x73,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x78,  /* [1193] */
    (xdc_Char)0x63,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x64,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x36,  /* [1201] */
    (xdc_Char)0x35,  /* [1202] */
    (xdc_Char)0x35,  /* [1203] */
    (xdc_Char)0x33,  /* [1204] */
    (xdc_Char)0x35,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6e,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x72,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x6c,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x6f,  /* [1218] */
    (xdc_Char)0x76,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x72,  /* [1221] */
    (xdc_Char)0x2e,  /* [1222] */
    (xdc_Char)0x0,  /* [1223] */
    (xdc_Char)0x41,  /* [1224] */
    (xdc_Char)0x5f,  /* [1225] */
    (xdc_Char)0x70,  /* [1226] */
    (xdc_Char)0x65,  /* [1227] */
    (xdc_Char)0x6e,  /* [1228] */
    (xdc_Char)0x64,  /* [1229] */
    (xdc_Char)0x54,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x6b,  /* [1233] */
    (xdc_Char)0x44,  /* [1234] */
    (xdc_Char)0x69,  /* [1235] */
    (xdc_Char)0x73,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x62,  /* [1238] */
    (xdc_Char)0x6c,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x64,  /* [1241] */
    (xdc_Char)0x3a,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x43,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x6e,  /* [1247] */
    (xdc_Char)0x6f,  /* [1248] */
    (xdc_Char)0x74,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x63,  /* [1251] */
    (xdc_Char)0x61,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x6c,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x53,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x6d,  /* [1258] */
    (xdc_Char)0x61,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x68,  /* [1261] */
    (xdc_Char)0x6f,  /* [1262] */
    (xdc_Char)0x72,  /* [1263] */
    (xdc_Char)0x65,  /* [1264] */
    (xdc_Char)0x5f,  /* [1265] */
    (xdc_Char)0x70,  /* [1266] */
    (xdc_Char)0x65,  /* [1267] */
    (xdc_Char)0x6e,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x28,  /* [1270] */
    (xdc_Char)0x29,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x77,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x69,  /* [1275] */
    (xdc_Char)0x6c,  /* [1276] */
    (xdc_Char)0x65,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x74,  /* [1279] */
    (xdc_Char)0x68,  /* [1280] */
    (xdc_Char)0x65,  /* [1281] */
    (xdc_Char)0x20,  /* [1282] */
    (xdc_Char)0x54,  /* [1283] */
    (xdc_Char)0x61,  /* [1284] */
    (xdc_Char)0x73,  /* [1285] */
    (xdc_Char)0x6b,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x6f,  /* [1288] */
    (xdc_Char)0x72,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x53,  /* [1291] */
    (xdc_Char)0x77,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x63,  /* [1296] */
    (xdc_Char)0x68,  /* [1297] */
    (xdc_Char)0x65,  /* [1298] */
    (xdc_Char)0x64,  /* [1299] */
    (xdc_Char)0x75,  /* [1300] */
    (xdc_Char)0x6c,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x69,  /* [1305] */
    (xdc_Char)0x73,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x64,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x61,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x6c,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x73,  /* [1320] */
    (xdc_Char)0x77,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x44,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x73,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x62,  /* [1327] */
    (xdc_Char)0x6c,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x3a,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x43,  /* [1333] */
    (xdc_Char)0x61,  /* [1334] */
    (xdc_Char)0x6e,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x6f,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x63,  /* [1340] */
    (xdc_Char)0x72,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x61,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x53,  /* [1349] */
    (xdc_Char)0x77,  /* [1350] */
    (xdc_Char)0x69,  /* [1351] */
    (xdc_Char)0x20,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x68,  /* [1354] */
    (xdc_Char)0x65,  /* [1355] */
    (xdc_Char)0x6e,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x53,  /* [1358] */
    (xdc_Char)0x77,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x73,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x69,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x61,  /* [1368] */
    (xdc_Char)0x62,  /* [1369] */
    (xdc_Char)0x6c,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x64,  /* [1372] */
    (xdc_Char)0x2e,  /* [1373] */
    (xdc_Char)0x0,  /* [1374] */
    (xdc_Char)0x41,  /* [1375] */
    (xdc_Char)0x5f,  /* [1376] */
    (xdc_Char)0x62,  /* [1377] */
    (xdc_Char)0x61,  /* [1378] */
    (xdc_Char)0x64,  /* [1379] */
    (xdc_Char)0x50,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x69,  /* [1382] */
    (xdc_Char)0x6f,  /* [1383] */
    (xdc_Char)0x72,  /* [1384] */
    (xdc_Char)0x69,  /* [1385] */
    (xdc_Char)0x74,  /* [1386] */
    (xdc_Char)0x79,  /* [1387] */
    (xdc_Char)0x3a,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x41,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x69,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x76,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x69,  /* [1398] */
    (xdc_Char)0x64,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x53,  /* [1401] */
    (xdc_Char)0x77,  /* [1402] */
    (xdc_Char)0x69,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x70,  /* [1405] */
    (xdc_Char)0x72,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x72,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x74,  /* [1411] */
    (xdc_Char)0x79,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x77,  /* [1414] */
    (xdc_Char)0x61,  /* [1415] */
    (xdc_Char)0x73,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x75,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x2e,  /* [1422] */
    (xdc_Char)0x0,  /* [1423] */
    (xdc_Char)0x41,  /* [1424] */
    (xdc_Char)0x5f,  /* [1425] */
    (xdc_Char)0x62,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x68,  /* [1430] */
    (xdc_Char)0x72,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x61,  /* [1433] */
    (xdc_Char)0x64,  /* [1434] */
    (xdc_Char)0x54,  /* [1435] */
    (xdc_Char)0x79,  /* [1436] */
    (xdc_Char)0x70,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x3a,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x43,  /* [1441] */
    (xdc_Char)0x61,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x6f,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x63,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x65,  /* [1453] */
    (xdc_Char)0x2f,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x6c,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x65,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x61,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x61,  /* [1465] */
    (xdc_Char)0x73,  /* [1466] */
    (xdc_Char)0x6b,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x66,  /* [1469] */
    (xdc_Char)0x72,  /* [1470] */
    (xdc_Char)0x6f,  /* [1471] */
    (xdc_Char)0x6d,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x48,  /* [1474] */
    (xdc_Char)0x77,  /* [1475] */
    (xdc_Char)0x69,  /* [1476] */
    (xdc_Char)0x20,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x72,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x53,  /* [1481] */
    (xdc_Char)0x77,  /* [1482] */
    (xdc_Char)0x69,  /* [1483] */
    (xdc_Char)0x20,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x2e,  /* [1491] */
    (xdc_Char)0x0,  /* [1492] */
    (xdc_Char)0x41,  /* [1493] */
    (xdc_Char)0x5f,  /* [1494] */
    (xdc_Char)0x62,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x64,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x74,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x3a,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x43,  /* [1509] */
    (xdc_Char)0x61,  /* [1510] */
    (xdc_Char)0x6e,  /* [1511] */
    (xdc_Char)0x27,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x64,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x6c,  /* [1517] */
    (xdc_Char)0x65,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x20,  /* [1521] */
    (xdc_Char)0x61,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x74,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x73,  /* [1526] */
    (xdc_Char)0x6b,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x69,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x52,  /* [1532] */
    (xdc_Char)0x55,  /* [1533] */
    (xdc_Char)0x4e,  /* [1534] */
    (xdc_Char)0x4e,  /* [1535] */
    (xdc_Char)0x49,  /* [1536] */
    (xdc_Char)0x4e,  /* [1537] */
    (xdc_Char)0x47,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x74,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x2e,  /* [1545] */
    (xdc_Char)0x0,  /* [1546] */
    (xdc_Char)0x41,  /* [1547] */
    (xdc_Char)0x5f,  /* [1548] */
    (xdc_Char)0x6e,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x50,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x6e,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x45,  /* [1555] */
    (xdc_Char)0x6c,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x6d,  /* [1558] */
    (xdc_Char)0x3a,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x4e,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x74,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x65,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x6f,  /* [1567] */
    (xdc_Char)0x75,  /* [1568] */
    (xdc_Char)0x67,  /* [1569] */
    (xdc_Char)0x68,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x69,  /* [1572] */
    (xdc_Char)0x6e,  /* [1573] */
    (xdc_Char)0x66,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x74,  /* [1577] */
    (xdc_Char)0x6f,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x65,  /* [1581] */
    (xdc_Char)0x6c,  /* [1582] */
    (xdc_Char)0x65,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x20,  /* [1586] */
    (xdc_Char)0x42,  /* [1587] */
    (xdc_Char)0x4c,  /* [1588] */
    (xdc_Char)0x4f,  /* [1589] */
    (xdc_Char)0x43,  /* [1590] */
    (xdc_Char)0x4b,  /* [1591] */
    (xdc_Char)0x45,  /* [1592] */
    (xdc_Char)0x44,  /* [1593] */
    (xdc_Char)0x20,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x61,  /* [1596] */
    (xdc_Char)0x73,  /* [1597] */
    (xdc_Char)0x6b,  /* [1598] */
    (xdc_Char)0x2e,  /* [1599] */
    (xdc_Char)0x0,  /* [1600] */
    (xdc_Char)0x41,  /* [1601] */
    (xdc_Char)0x5f,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x73,  /* [1605] */
    (xdc_Char)0x6b,  /* [1606] */
    (xdc_Char)0x44,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x73,  /* [1609] */
    (xdc_Char)0x61,  /* [1610] */
    (xdc_Char)0x62,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x43,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x6e,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x6f,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x20,  /* [1623] */
    (xdc_Char)0x63,  /* [1624] */
    (xdc_Char)0x72,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x61,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x65,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x61,  /* [1634] */
    (xdc_Char)0x73,  /* [1635] */
    (xdc_Char)0x6b,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x77,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x74,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x73,  /* [1645] */
    (xdc_Char)0x6b,  /* [1646] */
    (xdc_Char)0x69,  /* [1647] */
    (xdc_Char)0x6e,  /* [1648] */
    (xdc_Char)0x67,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x64,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x73,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x62,  /* [1658] */
    (xdc_Char)0x6c,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x64,  /* [1661] */
    (xdc_Char)0x2e,  /* [1662] */
    (xdc_Char)0x0,  /* [1663] */
    (xdc_Char)0x41,  /* [1664] */
    (xdc_Char)0x5f,  /* [1665] */
    (xdc_Char)0x62,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x50,  /* [1669] */
    (xdc_Char)0x72,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x6f,  /* [1672] */
    (xdc_Char)0x72,  /* [1673] */
    (xdc_Char)0x69,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x79,  /* [1676] */
    (xdc_Char)0x3a,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x41,  /* [1679] */
    (xdc_Char)0x6e,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x76,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x6c,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x64,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x61,  /* [1691] */
    (xdc_Char)0x73,  /* [1692] */
    (xdc_Char)0x6b,  /* [1693] */
    (xdc_Char)0x20,  /* [1694] */
    (xdc_Char)0x70,  /* [1695] */
    (xdc_Char)0x72,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x6f,  /* [1698] */
    (xdc_Char)0x72,  /* [1699] */
    (xdc_Char)0x69,  /* [1700] */
    (xdc_Char)0x74,  /* [1701] */
    (xdc_Char)0x79,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x77,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x75,  /* [1708] */
    (xdc_Char)0x73,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x64,  /* [1711] */
    (xdc_Char)0x2e,  /* [1712] */
    (xdc_Char)0x0,  /* [1713] */
    (xdc_Char)0x41,  /* [1714] */
    (xdc_Char)0x5f,  /* [1715] */
    (xdc_Char)0x62,  /* [1716] */
    (xdc_Char)0x61,  /* [1717] */
    (xdc_Char)0x64,  /* [1718] */
    (xdc_Char)0x54,  /* [1719] */
    (xdc_Char)0x69,  /* [1720] */
    (xdc_Char)0x6d,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x6f,  /* [1723] */
    (xdc_Char)0x75,  /* [1724] */
    (xdc_Char)0x74,  /* [1725] */
    (xdc_Char)0x3a,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x43,  /* [1728] */
    (xdc_Char)0x61,  /* [1729] */
    (xdc_Char)0x6e,  /* [1730] */
    (xdc_Char)0x27,  /* [1731] */
    (xdc_Char)0x74,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x70,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x46,  /* [1740] */
    (xdc_Char)0x4f,  /* [1741] */
    (xdc_Char)0x52,  /* [1742] */
    (xdc_Char)0x45,  /* [1743] */
    (xdc_Char)0x56,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x52,  /* [1746] */
    (xdc_Char)0x2e,  /* [1747] */
    (xdc_Char)0x0,  /* [1748] */
    (xdc_Char)0x41,  /* [1749] */
    (xdc_Char)0x5f,  /* [1750] */
    (xdc_Char)0x62,  /* [1751] */
    (xdc_Char)0x61,  /* [1752] */
    (xdc_Char)0x64,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x66,  /* [1755] */
    (xdc_Char)0x66,  /* [1756] */
    (xdc_Char)0x69,  /* [1757] */
    (xdc_Char)0x6e,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x79,  /* [1761] */
    (xdc_Char)0x3a,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x49,  /* [1764] */
    (xdc_Char)0x6e,  /* [1765] */
    (xdc_Char)0x76,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x6c,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x64,  /* [1770] */
    (xdc_Char)0x20,  /* [1771] */
    (xdc_Char)0x61,  /* [1772] */
    (xdc_Char)0x66,  /* [1773] */
    (xdc_Char)0x66,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x6e,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x79,  /* [1779] */
    (xdc_Char)0x2e,  /* [1780] */
    (xdc_Char)0x0,  /* [1781] */
    (xdc_Char)0x41,  /* [1782] */
    (xdc_Char)0x5f,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x6c,  /* [1785] */
    (xdc_Char)0x65,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x70,  /* [1788] */
    (xdc_Char)0x54,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x73,  /* [1791] */
    (xdc_Char)0x6b,  /* [1792] */
    (xdc_Char)0x44,  /* [1793] */
    (xdc_Char)0x69,  /* [1794] */
    (xdc_Char)0x73,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x62,  /* [1797] */
    (xdc_Char)0x6c,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x64,  /* [1800] */
    (xdc_Char)0x3a,  /* [1801] */
    (xdc_Char)0x20,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x6e,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x6f,  /* [1807] */
    (xdc_Char)0x74,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x63,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x6c,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x54,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x73,  /* [1817] */
    (xdc_Char)0x6b,  /* [1818] */
    (xdc_Char)0x5f,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x70,  /* [1824] */
    (xdc_Char)0x28,  /* [1825] */
    (xdc_Char)0x29,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x77,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x69,  /* [1830] */
    (xdc_Char)0x6c,  /* [1831] */
    (xdc_Char)0x65,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x68,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x54,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6b,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x73,  /* [1843] */
    (xdc_Char)0x63,  /* [1844] */
    (xdc_Char)0x68,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x75,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x72,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x73,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x73,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x62,  /* [1860] */
    (xdc_Char)0x6c,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x2e,  /* [1864] */
    (xdc_Char)0x0,  /* [1865] */
    (xdc_Char)0x41,  /* [1866] */
    (xdc_Char)0x5f,  /* [1867] */
    (xdc_Char)0x69,  /* [1868] */
    (xdc_Char)0x6e,  /* [1869] */
    (xdc_Char)0x76,  /* [1870] */
    (xdc_Char)0x61,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x64,  /* [1874] */
    (xdc_Char)0x43,  /* [1875] */
    (xdc_Char)0x6f,  /* [1876] */
    (xdc_Char)0x72,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x49,  /* [1879] */
    (xdc_Char)0x64,  /* [1880] */
    (xdc_Char)0x3a,  /* [1881] */
    (xdc_Char)0x20,  /* [1882] */
    (xdc_Char)0x43,  /* [1883] */
    (xdc_Char)0x61,  /* [1884] */
    (xdc_Char)0x6e,  /* [1885] */
    (xdc_Char)0x6e,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x74,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x70,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x73,  /* [1892] */
    (xdc_Char)0x73,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x6e,  /* [1897] */
    (xdc_Char)0x6f,  /* [1898] */
    (xdc_Char)0x6e,  /* [1899] */
    (xdc_Char)0x2d,  /* [1900] */
    (xdc_Char)0x7a,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x72,  /* [1903] */
    (xdc_Char)0x6f,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x43,  /* [1906] */
    (xdc_Char)0x6f,  /* [1907] */
    (xdc_Char)0x72,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x49,  /* [1910] */
    (xdc_Char)0x64,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x6e,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x61,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x6f,  /* [1919] */
    (xdc_Char)0x6e,  /* [1920] */
    (xdc_Char)0x2d,  /* [1921] */
    (xdc_Char)0x53,  /* [1922] */
    (xdc_Char)0x4d,  /* [1923] */
    (xdc_Char)0x50,  /* [1924] */
    (xdc_Char)0x20,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x70,  /* [1927] */
    (xdc_Char)0x70,  /* [1928] */
    (xdc_Char)0x6c,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x63,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x74,  /* [1933] */
    (xdc_Char)0x69,  /* [1934] */
    (xdc_Char)0x6f,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x2e,  /* [1937] */
    (xdc_Char)0x0,  /* [1938] */
    (xdc_Char)0x41,  /* [1939] */
    (xdc_Char)0x5f,  /* [1940] */
    (xdc_Char)0x69,  /* [1941] */
    (xdc_Char)0x70,  /* [1942] */
    (xdc_Char)0x63,  /* [1943] */
    (xdc_Char)0x46,  /* [1944] */
    (xdc_Char)0x61,  /* [1945] */
    (xdc_Char)0x69,  /* [1946] */
    (xdc_Char)0x6c,  /* [1947] */
    (xdc_Char)0x65,  /* [1948] */
    (xdc_Char)0x64,  /* [1949] */
    (xdc_Char)0x3a,  /* [1950] */
    (xdc_Char)0x20,  /* [1951] */
    (xdc_Char)0x55,  /* [1952] */
    (xdc_Char)0x6e,  /* [1953] */
    (xdc_Char)0x65,  /* [1954] */
    (xdc_Char)0x78,  /* [1955] */
    (xdc_Char)0x70,  /* [1956] */
    (xdc_Char)0x65,  /* [1957] */
    (xdc_Char)0x63,  /* [1958] */
    (xdc_Char)0x74,  /* [1959] */
    (xdc_Char)0x65,  /* [1960] */
    (xdc_Char)0x64,  /* [1961] */
    (xdc_Char)0x20,  /* [1962] */
    (xdc_Char)0x4d,  /* [1963] */
    (xdc_Char)0x65,  /* [1964] */
    (xdc_Char)0x73,  /* [1965] */
    (xdc_Char)0x73,  /* [1966] */
    (xdc_Char)0x61,  /* [1967] */
    (xdc_Char)0x67,  /* [1968] */
    (xdc_Char)0x65,  /* [1969] */
    (xdc_Char)0x51,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x66,  /* [1972] */
    (xdc_Char)0x61,  /* [1973] */
    (xdc_Char)0x69,  /* [1974] */
    (xdc_Char)0x6c,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x64,  /* [1977] */
    (xdc_Char)0x0,  /* [1978] */
    (xdc_Char)0x41,  /* [1979] */
    (xdc_Char)0x5f,  /* [1980] */
    (xdc_Char)0x69,  /* [1981] */
    (xdc_Char)0x6e,  /* [1982] */
    (xdc_Char)0x76,  /* [1983] */
    (xdc_Char)0x61,  /* [1984] */
    (xdc_Char)0x6c,  /* [1985] */
    (xdc_Char)0x69,  /* [1986] */
    (xdc_Char)0x64,  /* [1987] */
    (xdc_Char)0x48,  /* [1988] */
    (xdc_Char)0x64,  /* [1989] */
    (xdc_Char)0x72,  /* [1990] */
    (xdc_Char)0x54,  /* [1991] */
    (xdc_Char)0x79,  /* [1992] */
    (xdc_Char)0x70,  /* [1993] */
    (xdc_Char)0x65,  /* [1994] */
    (xdc_Char)0x3a,  /* [1995] */
    (xdc_Char)0x20,  /* [1996] */
    (xdc_Char)0x49,  /* [1997] */
    (xdc_Char)0x6e,  /* [1998] */
    (xdc_Char)0x76,  /* [1999] */
    (xdc_Char)0x61,  /* [2000] */
    (xdc_Char)0x6c,  /* [2001] */
    (xdc_Char)0x69,  /* [2002] */
    (xdc_Char)0x64,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x48,  /* [2005] */
    (xdc_Char)0x64,  /* [2006] */
    (xdc_Char)0x72,  /* [2007] */
    (xdc_Char)0x54,  /* [2008] */
    (xdc_Char)0x79,  /* [2009] */
    (xdc_Char)0x70,  /* [2010] */
    (xdc_Char)0x65,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x73,  /* [2013] */
    (xdc_Char)0x70,  /* [2014] */
    (xdc_Char)0x65,  /* [2015] */
    (xdc_Char)0x63,  /* [2016] */
    (xdc_Char)0x69,  /* [2017] */
    (xdc_Char)0x66,  /* [2018] */
    (xdc_Char)0x69,  /* [2019] */
    (xdc_Char)0x65,  /* [2020] */
    (xdc_Char)0x64,  /* [2021] */
    (xdc_Char)0x0,  /* [2022] */
    (xdc_Char)0x41,  /* [2023] */
    (xdc_Char)0x5f,  /* [2024] */
    (xdc_Char)0x69,  /* [2025] */
    (xdc_Char)0x6e,  /* [2026] */
    (xdc_Char)0x76,  /* [2027] */
    (xdc_Char)0x61,  /* [2028] */
    (xdc_Char)0x6c,  /* [2029] */
    (xdc_Char)0x69,  /* [2030] */
    (xdc_Char)0x64,  /* [2031] */
    (xdc_Char)0x53,  /* [2032] */
    (xdc_Char)0x65,  /* [2033] */
    (xdc_Char)0x72,  /* [2034] */
    (xdc_Char)0x76,  /* [2035] */
    (xdc_Char)0x69,  /* [2036] */
    (xdc_Char)0x63,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x49,  /* [2039] */
    (xdc_Char)0x64,  /* [2040] */
    (xdc_Char)0x3a,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x53,  /* [2043] */
    (xdc_Char)0x65,  /* [2044] */
    (xdc_Char)0x72,  /* [2045] */
    (xdc_Char)0x76,  /* [2046] */
    (xdc_Char)0x69,  /* [2047] */
    (xdc_Char)0x63,  /* [2048] */
    (xdc_Char)0x65,  /* [2049] */
    (xdc_Char)0x49,  /* [2050] */
    (xdc_Char)0x64,  /* [2051] */
    (xdc_Char)0x20,  /* [2052] */
    (xdc_Char)0x6f,  /* [2053] */
    (xdc_Char)0x75,  /* [2054] */
    (xdc_Char)0x74,  /* [2055] */
    (xdc_Char)0x20,  /* [2056] */
    (xdc_Char)0x6f,  /* [2057] */
    (xdc_Char)0x66,  /* [2058] */
    (xdc_Char)0x20,  /* [2059] */
    (xdc_Char)0x72,  /* [2060] */
    (xdc_Char)0x61,  /* [2061] */
    (xdc_Char)0x6e,  /* [2062] */
    (xdc_Char)0x67,  /* [2063] */
    (xdc_Char)0x65,  /* [2064] */
    (xdc_Char)0x0,  /* [2065] */
    (xdc_Char)0x41,  /* [2066] */
    (xdc_Char)0x5f,  /* [2067] */
    (xdc_Char)0x69,  /* [2068] */
    (xdc_Char)0x6e,  /* [2069] */
    (xdc_Char)0x76,  /* [2070] */
    (xdc_Char)0x61,  /* [2071] */
    (xdc_Char)0x6c,  /* [2072] */
    (xdc_Char)0x69,  /* [2073] */
    (xdc_Char)0x64,  /* [2074] */
    (xdc_Char)0x50,  /* [2075] */
    (xdc_Char)0x72,  /* [2076] */
    (xdc_Char)0x6f,  /* [2077] */
    (xdc_Char)0x63,  /* [2078] */
    (xdc_Char)0x65,  /* [2079] */
    (xdc_Char)0x73,  /* [2080] */
    (xdc_Char)0x73,  /* [2081] */
    (xdc_Char)0x43,  /* [2082] */
    (xdc_Char)0x61,  /* [2083] */
    (xdc_Char)0x6c,  /* [2084] */
    (xdc_Char)0x6c,  /* [2085] */
    (xdc_Char)0x62,  /* [2086] */
    (xdc_Char)0x61,  /* [2087] */
    (xdc_Char)0x63,  /* [2088] */
    (xdc_Char)0x6b,  /* [2089] */
    (xdc_Char)0x46,  /* [2090] */
    (xdc_Char)0x78,  /* [2091] */
    (xdc_Char)0x6e,  /* [2092] */
    (xdc_Char)0x3a,  /* [2093] */
    (xdc_Char)0x20,  /* [2094] */
    (xdc_Char)0x43,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x6c,  /* [2097] */
    (xdc_Char)0x6c,  /* [2098] */
    (xdc_Char)0x62,  /* [2099] */
    (xdc_Char)0x61,  /* [2100] */
    (xdc_Char)0x63,  /* [2101] */
    (xdc_Char)0x6b,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x63,  /* [2104] */
    (xdc_Char)0x61,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x6e,  /* [2107] */
    (xdc_Char)0x6f,  /* [2108] */
    (xdc_Char)0x74,  /* [2109] */
    (xdc_Char)0x20,  /* [2110] */
    (xdc_Char)0x62,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x20,  /* [2113] */
    (xdc_Char)0x4e,  /* [2114] */
    (xdc_Char)0x55,  /* [2115] */
    (xdc_Char)0x4c,  /* [2116] */
    (xdc_Char)0x4c,  /* [2117] */
    (xdc_Char)0x0,  /* [2118] */
    (xdc_Char)0x41,  /* [2119] */
    (xdc_Char)0x5f,  /* [2120] */
    (xdc_Char)0x7a,  /* [2121] */
    (xdc_Char)0x65,  /* [2122] */
    (xdc_Char)0x72,  /* [2123] */
    (xdc_Char)0x6f,  /* [2124] */
    (xdc_Char)0x54,  /* [2125] */
    (xdc_Char)0x69,  /* [2126] */
    (xdc_Char)0x6d,  /* [2127] */
    (xdc_Char)0x65,  /* [2128] */
    (xdc_Char)0x6f,  /* [2129] */
    (xdc_Char)0x75,  /* [2130] */
    (xdc_Char)0x74,  /* [2131] */
    (xdc_Char)0x3a,  /* [2132] */
    (xdc_Char)0x20,  /* [2133] */
    (xdc_Char)0x54,  /* [2134] */
    (xdc_Char)0x69,  /* [2135] */
    (xdc_Char)0x6d,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x6f,  /* [2138] */
    (xdc_Char)0x75,  /* [2139] */
    (xdc_Char)0x74,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x76,  /* [2142] */
    (xdc_Char)0x61,  /* [2143] */
    (xdc_Char)0x6c,  /* [2144] */
    (xdc_Char)0x75,  /* [2145] */
    (xdc_Char)0x65,  /* [2146] */
    (xdc_Char)0x20,  /* [2147] */
    (xdc_Char)0x61,  /* [2148] */
    (xdc_Char)0x6e,  /* [2149] */
    (xdc_Char)0x6e,  /* [2150] */
    (xdc_Char)0x6f,  /* [2151] */
    (xdc_Char)0x74,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x62,  /* [2154] */
    (xdc_Char)0x65,  /* [2155] */
    (xdc_Char)0x20,  /* [2156] */
    (xdc_Char)0x7a,  /* [2157] */
    (xdc_Char)0x65,  /* [2158] */
    (xdc_Char)0x72,  /* [2159] */
    (xdc_Char)0x6f,  /* [2160] */
    (xdc_Char)0x0,  /* [2161] */
    (xdc_Char)0x41,  /* [2162] */
    (xdc_Char)0x5f,  /* [2163] */
    (xdc_Char)0x69,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x76,  /* [2166] */
    (xdc_Char)0x61,  /* [2167] */
    (xdc_Char)0x6c,  /* [2168] */
    (xdc_Char)0x69,  /* [2169] */
    (xdc_Char)0x64,  /* [2170] */
    (xdc_Char)0x4b,  /* [2171] */
    (xdc_Char)0x65,  /* [2172] */
    (xdc_Char)0x79,  /* [2173] */
    (xdc_Char)0x3a,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x74,  /* [2176] */
    (xdc_Char)0x68,  /* [2177] */
    (xdc_Char)0x65,  /* [2178] */
    (xdc_Char)0x20,  /* [2179] */
    (xdc_Char)0x6b,  /* [2180] */
    (xdc_Char)0x65,  /* [2181] */
    (xdc_Char)0x79,  /* [2182] */
    (xdc_Char)0x20,  /* [2183] */
    (xdc_Char)0x6d,  /* [2184] */
    (xdc_Char)0x75,  /* [2185] */
    (xdc_Char)0x73,  /* [2186] */
    (xdc_Char)0x74,  /* [2187] */
    (xdc_Char)0x20,  /* [2188] */
    (xdc_Char)0x62,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x73,  /* [2192] */
    (xdc_Char)0x65,  /* [2193] */
    (xdc_Char)0x74,  /* [2194] */
    (xdc_Char)0x20,  /* [2195] */
    (xdc_Char)0x74,  /* [2196] */
    (xdc_Char)0x6f,  /* [2197] */
    (xdc_Char)0x20,  /* [2198] */
    (xdc_Char)0x61,  /* [2199] */
    (xdc_Char)0x20,  /* [2200] */
    (xdc_Char)0x6e,  /* [2201] */
    (xdc_Char)0x6f,  /* [2202] */
    (xdc_Char)0x6e,  /* [2203] */
    (xdc_Char)0x2d,  /* [2204] */
    (xdc_Char)0x64,  /* [2205] */
    (xdc_Char)0x65,  /* [2206] */
    (xdc_Char)0x66,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x75,  /* [2209] */
    (xdc_Char)0x6c,  /* [2210] */
    (xdc_Char)0x74,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x76,  /* [2213] */
    (xdc_Char)0x61,  /* [2214] */
    (xdc_Char)0x6c,  /* [2215] */
    (xdc_Char)0x75,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x0,  /* [2218] */
    (xdc_Char)0x41,  /* [2219] */
    (xdc_Char)0x5f,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x75,  /* [2222] */
    (xdc_Char)0x6c,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x48,  /* [2225] */
    (xdc_Char)0x61,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x64,  /* [2228] */
    (xdc_Char)0x6c,  /* [2229] */
    (xdc_Char)0x65,  /* [2230] */
    (xdc_Char)0x3a,  /* [2231] */
    (xdc_Char)0x20,  /* [2232] */
    (xdc_Char)0x4e,  /* [2233] */
    (xdc_Char)0x75,  /* [2234] */
    (xdc_Char)0x6c,  /* [2235] */
    (xdc_Char)0x6c,  /* [2236] */
    (xdc_Char)0x20,  /* [2237] */
    (xdc_Char)0x68,  /* [2238] */
    (xdc_Char)0x61,  /* [2239] */
    (xdc_Char)0x6e,  /* [2240] */
    (xdc_Char)0x64,  /* [2241] */
    (xdc_Char)0x6c,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x20,  /* [2244] */
    (xdc_Char)0x70,  /* [2245] */
    (xdc_Char)0x61,  /* [2246] */
    (xdc_Char)0x73,  /* [2247] */
    (xdc_Char)0x73,  /* [2248] */
    (xdc_Char)0x65,  /* [2249] */
    (xdc_Char)0x64,  /* [2250] */
    (xdc_Char)0x20,  /* [2251] */
    (xdc_Char)0x74,  /* [2252] */
    (xdc_Char)0x6f,  /* [2253] */
    (xdc_Char)0x20,  /* [2254] */
    (xdc_Char)0x63,  /* [2255] */
    (xdc_Char)0x72,  /* [2256] */
    (xdc_Char)0x65,  /* [2257] */
    (xdc_Char)0x61,  /* [2258] */
    (xdc_Char)0x74,  /* [2259] */
    (xdc_Char)0x65,  /* [2260] */
    (xdc_Char)0x0,  /* [2261] */
    (xdc_Char)0x41,  /* [2262] */
    (xdc_Char)0x5f,  /* [2263] */
    (xdc_Char)0x49,  /* [2264] */
    (xdc_Char)0x70,  /* [2265] */
    (xdc_Char)0x63,  /* [2266] */
    (xdc_Char)0x4d,  /* [2267] */
    (xdc_Char)0x50,  /* [2268] */
    (xdc_Char)0x46,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x69,  /* [2271] */
    (xdc_Char)0x6c,  /* [2272] */
    (xdc_Char)0x75,  /* [2273] */
    (xdc_Char)0x72,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x3a,  /* [2276] */
    (xdc_Char)0x20,  /* [2277] */
    (xdc_Char)0x55,  /* [2278] */
    (xdc_Char)0x6e,  /* [2279] */
    (xdc_Char)0x65,  /* [2280] */
    (xdc_Char)0x78,  /* [2281] */
    (xdc_Char)0x70,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x63,  /* [2284] */
    (xdc_Char)0x74,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x64,  /* [2287] */
    (xdc_Char)0x20,  /* [2288] */
    (xdc_Char)0x66,  /* [2289] */
    (xdc_Char)0x61,  /* [2290] */
    (xdc_Char)0x69,  /* [2291] */
    (xdc_Char)0x6c,  /* [2292] */
    (xdc_Char)0x75,  /* [2293] */
    (xdc_Char)0x72,  /* [2294] */
    (xdc_Char)0x65,  /* [2295] */
    (xdc_Char)0x20,  /* [2296] */
    (xdc_Char)0x77,  /* [2297] */
    (xdc_Char)0x69,  /* [2298] */
    (xdc_Char)0x74,  /* [2299] */
    (xdc_Char)0x68,  /* [2300] */
    (xdc_Char)0x20,  /* [2301] */
    (xdc_Char)0x74,  /* [2302] */
    (xdc_Char)0x68,  /* [2303] */
    (xdc_Char)0x65,  /* [2304] */
    (xdc_Char)0x20,  /* [2305] */
    (xdc_Char)0x49,  /* [2306] */
    (xdc_Char)0x70,  /* [2307] */
    (xdc_Char)0x63,  /* [2308] */
    (xdc_Char)0x4d,  /* [2309] */
    (xdc_Char)0x50,  /* [2310] */
    (xdc_Char)0x0,  /* [2311] */
    (xdc_Char)0x4c,  /* [2312] */
    (xdc_Char)0x6f,  /* [2313] */
    (xdc_Char)0x67,  /* [2314] */
    (xdc_Char)0x67,  /* [2315] */
    (xdc_Char)0x65,  /* [2316] */
    (xdc_Char)0x72,  /* [2317] */
    (xdc_Char)0x53,  /* [2318] */
    (xdc_Char)0x74,  /* [2319] */
    (xdc_Char)0x72,  /* [2320] */
    (xdc_Char)0x65,  /* [2321] */
    (xdc_Char)0x61,  /* [2322] */
    (xdc_Char)0x6d,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x72,  /* [2325] */
    (xdc_Char)0x32,  /* [2326] */
    (xdc_Char)0x5f,  /* [2327] */
    (xdc_Char)0x63,  /* [2328] */
    (xdc_Char)0x72,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x61,  /* [2331] */
    (xdc_Char)0x74,  /* [2332] */
    (xdc_Char)0x65,  /* [2333] */
    (xdc_Char)0x27,  /* [2334] */
    (xdc_Char)0x73,  /* [2335] */
    (xdc_Char)0x20,  /* [2336] */
    (xdc_Char)0x62,  /* [2337] */
    (xdc_Char)0x75,  /* [2338] */
    (xdc_Char)0x66,  /* [2339] */
    (xdc_Char)0x66,  /* [2340] */
    (xdc_Char)0x65,  /* [2341] */
    (xdc_Char)0x72,  /* [2342] */
    (xdc_Char)0x20,  /* [2343] */
    (xdc_Char)0x72,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x74,  /* [2346] */
    (xdc_Char)0x75,  /* [2347] */
    (xdc_Char)0x72,  /* [2348] */
    (xdc_Char)0x6e,  /* [2349] */
    (xdc_Char)0x65,  /* [2350] */
    (xdc_Char)0x64,  /* [2351] */
    (xdc_Char)0x20,  /* [2352] */
    (xdc_Char)0x62,  /* [2353] */
    (xdc_Char)0x79,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x70,  /* [2356] */
    (xdc_Char)0x72,  /* [2357] */
    (xdc_Char)0x69,  /* [2358] */
    (xdc_Char)0x6d,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x46,  /* [2361] */
    (xdc_Char)0x78,  /* [2362] */
    (xdc_Char)0x6e,  /* [2363] */
    (xdc_Char)0x20,  /* [2364] */
    (xdc_Char)0x69,  /* [2365] */
    (xdc_Char)0x73,  /* [2366] */
    (xdc_Char)0x20,  /* [2367] */
    (xdc_Char)0x4e,  /* [2368] */
    (xdc_Char)0x55,  /* [2369] */
    (xdc_Char)0x4c,  /* [2370] */
    (xdc_Char)0x4c,  /* [2371] */
    (xdc_Char)0x0,  /* [2372] */
    (xdc_Char)0x41,  /* [2373] */
    (xdc_Char)0x5f,  /* [2374] */
    (xdc_Char)0x75,  /* [2375] */
    (xdc_Char)0x6e,  /* [2376] */
    (xdc_Char)0x73,  /* [2377] */
    (xdc_Char)0x75,  /* [2378] */
    (xdc_Char)0x70,  /* [2379] */
    (xdc_Char)0x70,  /* [2380] */
    (xdc_Char)0x6f,  /* [2381] */
    (xdc_Char)0x72,  /* [2382] */
    (xdc_Char)0x74,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x64,  /* [2385] */
    (xdc_Char)0x4d,  /* [2386] */
    (xdc_Char)0x61,  /* [2387] */
    (xdc_Char)0x73,  /* [2388] */
    (xdc_Char)0x6b,  /* [2389] */
    (xdc_Char)0x69,  /* [2390] */
    (xdc_Char)0x6e,  /* [2391] */
    (xdc_Char)0x67,  /* [2392] */
    (xdc_Char)0x4f,  /* [2393] */
    (xdc_Char)0x70,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x69,  /* [2396] */
    (xdc_Char)0x6f,  /* [2397] */
    (xdc_Char)0x6e,  /* [2398] */
    (xdc_Char)0x3a,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x75,  /* [2401] */
    (xdc_Char)0x6e,  /* [2402] */
    (xdc_Char)0x73,  /* [2403] */
    (xdc_Char)0x75,  /* [2404] */
    (xdc_Char)0x70,  /* [2405] */
    (xdc_Char)0x70,  /* [2406] */
    (xdc_Char)0x6f,  /* [2407] */
    (xdc_Char)0x72,  /* [2408] */
    (xdc_Char)0x74,  /* [2409] */
    (xdc_Char)0x65,  /* [2410] */
    (xdc_Char)0x64,  /* [2411] */
    (xdc_Char)0x20,  /* [2412] */
    (xdc_Char)0x6d,  /* [2413] */
    (xdc_Char)0x61,  /* [2414] */
    (xdc_Char)0x73,  /* [2415] */
    (xdc_Char)0x6b,  /* [2416] */
    (xdc_Char)0x53,  /* [2417] */
    (xdc_Char)0x65,  /* [2418] */
    (xdc_Char)0x74,  /* [2419] */
    (xdc_Char)0x74,  /* [2420] */
    (xdc_Char)0x69,  /* [2421] */
    (xdc_Char)0x6e,  /* [2422] */
    (xdc_Char)0x67,  /* [2423] */
    (xdc_Char)0x2e,  /* [2424] */
    (xdc_Char)0x0,  /* [2425] */
    (xdc_Char)0x41,  /* [2426] */
    (xdc_Char)0x5f,  /* [2427] */
    (xdc_Char)0x62,  /* [2428] */
    (xdc_Char)0x61,  /* [2429] */
    (xdc_Char)0x64,  /* [2430] */
    (xdc_Char)0x43,  /* [2431] */
    (xdc_Char)0x6f,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x74,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x78,  /* [2436] */
    (xdc_Char)0x74,  /* [2437] */
    (xdc_Char)0x3a,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x62,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x64,  /* [2442] */
    (xdc_Char)0x20,  /* [2443] */
    (xdc_Char)0x63,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x6c,  /* [2446] */
    (xdc_Char)0x6c,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x6e,  /* [2449] */
    (xdc_Char)0x67,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x63,  /* [2452] */
    (xdc_Char)0x6f,  /* [2453] */
    (xdc_Char)0x6e,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x78,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x2e,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x4d,  /* [2461] */
    (xdc_Char)0x61,  /* [2462] */
    (xdc_Char)0x79,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x6f,  /* [2466] */
    (xdc_Char)0x74,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x62,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x6e,  /* [2473] */
    (xdc_Char)0x74,  /* [2474] */
    (xdc_Char)0x65,  /* [2475] */
    (xdc_Char)0x72,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x66,  /* [2480] */
    (xdc_Char)0x72,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x6d,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x61,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x68,  /* [2487] */
    (xdc_Char)0x61,  /* [2488] */
    (xdc_Char)0x72,  /* [2489] */
    (xdc_Char)0x64,  /* [2490] */
    (xdc_Char)0x77,  /* [2491] */
    (xdc_Char)0x61,  /* [2492] */
    (xdc_Char)0x72,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x69,  /* [2496] */
    (xdc_Char)0x6e,  /* [2497] */
    (xdc_Char)0x74,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x72,  /* [2500] */
    (xdc_Char)0x72,  /* [2501] */
    (xdc_Char)0x75,  /* [2502] */
    (xdc_Char)0x70,  /* [2503] */
    (xdc_Char)0x74,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x74,  /* [2506] */
    (xdc_Char)0x68,  /* [2507] */
    (xdc_Char)0x72,  /* [2508] */
    (xdc_Char)0x65,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x64,  /* [2511] */
    (xdc_Char)0x2e,  /* [2512] */
    (xdc_Char)0x0,  /* [2513] */
    (xdc_Char)0x41,  /* [2514] */
    (xdc_Char)0x5f,  /* [2515] */
    (xdc_Char)0x62,  /* [2516] */
    (xdc_Char)0x61,  /* [2517] */
    (xdc_Char)0x64,  /* [2518] */
    (xdc_Char)0x43,  /* [2519] */
    (xdc_Char)0x6f,  /* [2520] */
    (xdc_Char)0x6e,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x78,  /* [2524] */
    (xdc_Char)0x74,  /* [2525] */
    (xdc_Char)0x3a,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x64,  /* [2530] */
    (xdc_Char)0x20,  /* [2531] */
    (xdc_Char)0x63,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x6c,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x69,  /* [2536] */
    (xdc_Char)0x6e,  /* [2537] */
    (xdc_Char)0x67,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x63,  /* [2540] */
    (xdc_Char)0x6f,  /* [2541] */
    (xdc_Char)0x6e,  /* [2542] */
    (xdc_Char)0x74,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x78,  /* [2545] */
    (xdc_Char)0x74,  /* [2546] */
    (xdc_Char)0x2e,  /* [2547] */
    (xdc_Char)0x20,  /* [2548] */
    (xdc_Char)0x4d,  /* [2549] */
    (xdc_Char)0x61,  /* [2550] */
    (xdc_Char)0x79,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x6e,  /* [2553] */
    (xdc_Char)0x6f,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x62,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x65,  /* [2560] */
    (xdc_Char)0x6e,  /* [2561] */
    (xdc_Char)0x74,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x72,  /* [2564] */
    (xdc_Char)0x65,  /* [2565] */
    (xdc_Char)0x64,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x66,  /* [2568] */
    (xdc_Char)0x72,  /* [2569] */
    (xdc_Char)0x6f,  /* [2570] */
    (xdc_Char)0x6d,  /* [2571] */
    (xdc_Char)0x20,  /* [2572] */
    (xdc_Char)0x61,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x73,  /* [2575] */
    (xdc_Char)0x6f,  /* [2576] */
    (xdc_Char)0x66,  /* [2577] */
    (xdc_Char)0x74,  /* [2578] */
    (xdc_Char)0x77,  /* [2579] */
    (xdc_Char)0x61,  /* [2580] */
    (xdc_Char)0x72,  /* [2581] */
    (xdc_Char)0x65,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x6f,  /* [2584] */
    (xdc_Char)0x72,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x68,  /* [2587] */
    (xdc_Char)0x61,  /* [2588] */
    (xdc_Char)0x72,  /* [2589] */
    (xdc_Char)0x64,  /* [2590] */
    (xdc_Char)0x77,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x72,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x69,  /* [2596] */
    (xdc_Char)0x6e,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x72,  /* [2600] */
    (xdc_Char)0x72,  /* [2601] */
    (xdc_Char)0x75,  /* [2602] */
    (xdc_Char)0x70,  /* [2603] */
    (xdc_Char)0x74,  /* [2604] */
    (xdc_Char)0x20,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x68,  /* [2607] */
    (xdc_Char)0x72,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x61,  /* [2610] */
    (xdc_Char)0x64,  /* [2611] */
    (xdc_Char)0x2e,  /* [2612] */
    (xdc_Char)0x0,  /* [2613] */
    (xdc_Char)0x41,  /* [2614] */
    (xdc_Char)0x5f,  /* [2615] */
    (xdc_Char)0x62,  /* [2616] */
    (xdc_Char)0x61,  /* [2617] */
    (xdc_Char)0x64,  /* [2618] */
    (xdc_Char)0x43,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x6e,  /* [2621] */
    (xdc_Char)0x74,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x78,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x3a,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x62,  /* [2628] */
    (xdc_Char)0x61,  /* [2629] */
    (xdc_Char)0x64,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x63,  /* [2632] */
    (xdc_Char)0x61,  /* [2633] */
    (xdc_Char)0x6c,  /* [2634] */
    (xdc_Char)0x6c,  /* [2635] */
    (xdc_Char)0x69,  /* [2636] */
    (xdc_Char)0x6e,  /* [2637] */
    (xdc_Char)0x67,  /* [2638] */
    (xdc_Char)0x20,  /* [2639] */
    (xdc_Char)0x63,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x6e,  /* [2642] */
    (xdc_Char)0x74,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x78,  /* [2645] */
    (xdc_Char)0x74,  /* [2646] */
    (xdc_Char)0x2e,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x53,  /* [2649] */
    (xdc_Char)0x65,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x47,  /* [2653] */
    (xdc_Char)0x61,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x4d,  /* [2657] */
    (xdc_Char)0x75,  /* [2658] */
    (xdc_Char)0x74,  /* [2659] */
    (xdc_Char)0x65,  /* [2660] */
    (xdc_Char)0x78,  /* [2661] */
    (xdc_Char)0x50,  /* [2662] */
    (xdc_Char)0x72,  /* [2663] */
    (xdc_Char)0x69,  /* [2664] */
    (xdc_Char)0x20,  /* [2665] */
    (xdc_Char)0x41,  /* [2666] */
    (xdc_Char)0x50,  /* [2667] */
    (xdc_Char)0x49,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x64,  /* [2670] */
    (xdc_Char)0x6f,  /* [2671] */
    (xdc_Char)0x63,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x66,  /* [2674] */
    (xdc_Char)0x6f,  /* [2675] */
    (xdc_Char)0x72,  /* [2676] */
    (xdc_Char)0x20,  /* [2677] */
    (xdc_Char)0x64,  /* [2678] */
    (xdc_Char)0x65,  /* [2679] */
    (xdc_Char)0x74,  /* [2680] */
    (xdc_Char)0x61,  /* [2681] */
    (xdc_Char)0x69,  /* [2682] */
    (xdc_Char)0x6c,  /* [2683] */
    (xdc_Char)0x73,  /* [2684] */
    (xdc_Char)0x2e,  /* [2685] */
    (xdc_Char)0x0,  /* [2686] */
    (xdc_Char)0x41,  /* [2687] */
    (xdc_Char)0x5f,  /* [2688] */
    (xdc_Char)0x65,  /* [2689] */
    (xdc_Char)0x6e,  /* [2690] */
    (xdc_Char)0x74,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x72,  /* [2693] */
    (xdc_Char)0x54,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x73,  /* [2696] */
    (xdc_Char)0x6b,  /* [2697] */
    (xdc_Char)0x44,  /* [2698] */
    (xdc_Char)0x69,  /* [2699] */
    (xdc_Char)0x73,  /* [2700] */
    (xdc_Char)0x61,  /* [2701] */
    (xdc_Char)0x62,  /* [2702] */
    (xdc_Char)0x6c,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x64,  /* [2705] */
    (xdc_Char)0x3a,  /* [2706] */
    (xdc_Char)0x20,  /* [2707] */
    (xdc_Char)0x43,  /* [2708] */
    (xdc_Char)0x61,  /* [2709] */
    (xdc_Char)0x6e,  /* [2710] */
    (xdc_Char)0x6e,  /* [2711] */
    (xdc_Char)0x6f,  /* [2712] */
    (xdc_Char)0x74,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x63,  /* [2715] */
    (xdc_Char)0x61,  /* [2716] */
    (xdc_Char)0x6c,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x20,  /* [2719] */
    (xdc_Char)0x47,  /* [2720] */
    (xdc_Char)0x61,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x4d,  /* [2724] */
    (xdc_Char)0x75,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x78,  /* [2728] */
    (xdc_Char)0x50,  /* [2729] */
    (xdc_Char)0x72,  /* [2730] */
    (xdc_Char)0x69,  /* [2731] */
    (xdc_Char)0x5f,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x6e,  /* [2734] */
    (xdc_Char)0x74,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x72,  /* [2737] */
    (xdc_Char)0x28,  /* [2738] */
    (xdc_Char)0x29,  /* [2739] */
    (xdc_Char)0x20,  /* [2740] */
    (xdc_Char)0x77,  /* [2741] */
    (xdc_Char)0x68,  /* [2742] */
    (xdc_Char)0x69,  /* [2743] */
    (xdc_Char)0x6c,  /* [2744] */
    (xdc_Char)0x65,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x74,  /* [2747] */
    (xdc_Char)0x68,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x20,  /* [2750] */
    (xdc_Char)0x54,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x73,  /* [2753] */
    (xdc_Char)0x6b,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x6f,  /* [2756] */
    (xdc_Char)0x72,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x53,  /* [2759] */
    (xdc_Char)0x77,  /* [2760] */
    (xdc_Char)0x69,  /* [2761] */
    (xdc_Char)0x20,  /* [2762] */
    (xdc_Char)0x73,  /* [2763] */
    (xdc_Char)0x63,  /* [2764] */
    (xdc_Char)0x68,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x64,  /* [2767] */
    (xdc_Char)0x75,  /* [2768] */
    (xdc_Char)0x6c,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x72,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x69,  /* [2773] */
    (xdc_Char)0x73,  /* [2774] */
    (xdc_Char)0x20,  /* [2775] */
    (xdc_Char)0x64,  /* [2776] */
    (xdc_Char)0x69,  /* [2777] */
    (xdc_Char)0x73,  /* [2778] */
    (xdc_Char)0x61,  /* [2779] */
    (xdc_Char)0x62,  /* [2780] */
    (xdc_Char)0x6c,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x64,  /* [2783] */
    (xdc_Char)0x2e,  /* [2784] */
    (xdc_Char)0x0,  /* [2785] */
    (xdc_Char)0x41,  /* [2786] */
    (xdc_Char)0x5f,  /* [2787] */
    (xdc_Char)0x62,  /* [2788] */
    (xdc_Char)0x61,  /* [2789] */
    (xdc_Char)0x64,  /* [2790] */
    (xdc_Char)0x43,  /* [2791] */
    (xdc_Char)0x6f,  /* [2792] */
    (xdc_Char)0x6e,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x65,  /* [2795] */
    (xdc_Char)0x78,  /* [2796] */
    (xdc_Char)0x74,  /* [2797] */
    (xdc_Char)0x3a,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x62,  /* [2800] */
    (xdc_Char)0x61,  /* [2801] */
    (xdc_Char)0x64,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x63,  /* [2804] */
    (xdc_Char)0x61,  /* [2805] */
    (xdc_Char)0x6c,  /* [2806] */
    (xdc_Char)0x6c,  /* [2807] */
    (xdc_Char)0x69,  /* [2808] */
    (xdc_Char)0x6e,  /* [2809] */
    (xdc_Char)0x67,  /* [2810] */
    (xdc_Char)0x20,  /* [2811] */
    (xdc_Char)0x63,  /* [2812] */
    (xdc_Char)0x6f,  /* [2813] */
    (xdc_Char)0x6e,  /* [2814] */
    (xdc_Char)0x74,  /* [2815] */
    (xdc_Char)0x65,  /* [2816] */
    (xdc_Char)0x78,  /* [2817] */
    (xdc_Char)0x74,  /* [2818] */
    (xdc_Char)0x2e,  /* [2819] */
    (xdc_Char)0x20,  /* [2820] */
    (xdc_Char)0x53,  /* [2821] */
    (xdc_Char)0x65,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x20,  /* [2824] */
    (xdc_Char)0x47,  /* [2825] */
    (xdc_Char)0x61,  /* [2826] */
    (xdc_Char)0x74,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x4d,  /* [2829] */
    (xdc_Char)0x75,  /* [2830] */
    (xdc_Char)0x74,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x78,  /* [2833] */
    (xdc_Char)0x20,  /* [2834] */
    (xdc_Char)0x41,  /* [2835] */
    (xdc_Char)0x50,  /* [2836] */
    (xdc_Char)0x49,  /* [2837] */
    (xdc_Char)0x20,  /* [2838] */
    (xdc_Char)0x64,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x63,  /* [2841] */
    (xdc_Char)0x20,  /* [2842] */
    (xdc_Char)0x66,  /* [2843] */
    (xdc_Char)0x6f,  /* [2844] */
    (xdc_Char)0x72,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x64,  /* [2847] */
    (xdc_Char)0x65,  /* [2848] */
    (xdc_Char)0x74,  /* [2849] */
    (xdc_Char)0x61,  /* [2850] */
    (xdc_Char)0x69,  /* [2851] */
    (xdc_Char)0x6c,  /* [2852] */
    (xdc_Char)0x73,  /* [2853] */
    (xdc_Char)0x2e,  /* [2854] */
    (xdc_Char)0x0,  /* [2855] */
    (xdc_Char)0x62,  /* [2856] */
    (xdc_Char)0x75,  /* [2857] */
    (xdc_Char)0x66,  /* [2858] */
    (xdc_Char)0x20,  /* [2859] */
    (xdc_Char)0x70,  /* [2860] */
    (xdc_Char)0x61,  /* [2861] */
    (xdc_Char)0x72,  /* [2862] */
    (xdc_Char)0x61,  /* [2863] */
    (xdc_Char)0x6d,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x74,  /* [2866] */
    (xdc_Char)0x65,  /* [2867] */
    (xdc_Char)0x72,  /* [2868] */
    (xdc_Char)0x20,  /* [2869] */
    (xdc_Char)0x63,  /* [2870] */
    (xdc_Char)0x61,  /* [2871] */
    (xdc_Char)0x6e,  /* [2872] */
    (xdc_Char)0x6e,  /* [2873] */
    (xdc_Char)0x6f,  /* [2874] */
    (xdc_Char)0x74,  /* [2875] */
    (xdc_Char)0x20,  /* [2876] */
    (xdc_Char)0x62,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x75,  /* [2881] */
    (xdc_Char)0x6c,  /* [2882] */
    (xdc_Char)0x6c,  /* [2883] */
    (xdc_Char)0x0,  /* [2884] */
    (xdc_Char)0x62,  /* [2885] */
    (xdc_Char)0x75,  /* [2886] */
    (xdc_Char)0x66,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x6e,  /* [2889] */
    (xdc_Char)0x6f,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x70,  /* [2893] */
    (xdc_Char)0x72,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x70,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x72,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x79,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x61,  /* [2902] */
    (xdc_Char)0x6c,  /* [2903] */
    (xdc_Char)0x69,  /* [2904] */
    (xdc_Char)0x67,  /* [2905] */
    (xdc_Char)0x6e,  /* [2906] */
    (xdc_Char)0x65,  /* [2907] */
    (xdc_Char)0x64,  /* [2908] */
    (xdc_Char)0x0,  /* [2909] */
    (xdc_Char)0x61,  /* [2910] */
    (xdc_Char)0x6c,  /* [2911] */
    (xdc_Char)0x69,  /* [2912] */
    (xdc_Char)0x67,  /* [2913] */
    (xdc_Char)0x6e,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x70,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x72,  /* [2918] */
    (xdc_Char)0x61,  /* [2919] */
    (xdc_Char)0x6d,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x74,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x72,  /* [2924] */
    (xdc_Char)0x20,  /* [2925] */
    (xdc_Char)0x6d,  /* [2926] */
    (xdc_Char)0x75,  /* [2927] */
    (xdc_Char)0x73,  /* [2928] */
    (xdc_Char)0x74,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x62,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x30,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x6f,  /* [2936] */
    (xdc_Char)0x72,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x61,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x70,  /* [2941] */
    (xdc_Char)0x6f,  /* [2942] */
    (xdc_Char)0x77,  /* [2943] */
    (xdc_Char)0x65,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x20,  /* [2946] */
    (xdc_Char)0x6f,  /* [2947] */
    (xdc_Char)0x66,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x32,  /* [2950] */
    (xdc_Char)0x20,  /* [2951] */
    (xdc_Char)0x3e,  /* [2952] */
    (xdc_Char)0x3d,  /* [2953] */
    (xdc_Char)0x20,  /* [2954] */
    (xdc_Char)0x74,  /* [2955] */
    (xdc_Char)0x68,  /* [2956] */
    (xdc_Char)0x65,  /* [2957] */
    (xdc_Char)0x20,  /* [2958] */
    (xdc_Char)0x76,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x6c,  /* [2961] */
    (xdc_Char)0x75,  /* [2962] */
    (xdc_Char)0x65,  /* [2963] */
    (xdc_Char)0x20,  /* [2964] */
    (xdc_Char)0x6f,  /* [2965] */
    (xdc_Char)0x66,  /* [2966] */
    (xdc_Char)0x20,  /* [2967] */
    (xdc_Char)0x4d,  /* [2968] */
    (xdc_Char)0x65,  /* [2969] */
    (xdc_Char)0x6d,  /* [2970] */
    (xdc_Char)0x6f,  /* [2971] */
    (xdc_Char)0x72,  /* [2972] */
    (xdc_Char)0x79,  /* [2973] */
    (xdc_Char)0x5f,  /* [2974] */
    (xdc_Char)0x67,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x74,  /* [2977] */
    (xdc_Char)0x4d,  /* [2978] */
    (xdc_Char)0x61,  /* [2979] */
    (xdc_Char)0x78,  /* [2980] */
    (xdc_Char)0x44,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x66,  /* [2983] */
    (xdc_Char)0x61,  /* [2984] */
    (xdc_Char)0x75,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x74,  /* [2987] */
    (xdc_Char)0x54,  /* [2988] */
    (xdc_Char)0x79,  /* [2989] */
    (xdc_Char)0x70,  /* [2990] */
    (xdc_Char)0x65,  /* [2991] */
    (xdc_Char)0x41,  /* [2992] */
    (xdc_Char)0x6c,  /* [2993] */
    (xdc_Char)0x69,  /* [2994] */
    (xdc_Char)0x67,  /* [2995] */
    (xdc_Char)0x6e,  /* [2996] */
    (xdc_Char)0x28,  /* [2997] */
    (xdc_Char)0x29,  /* [2998] */
    (xdc_Char)0x0,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x6c,  /* [3001] */
    (xdc_Char)0x69,  /* [3002] */
    (xdc_Char)0x67,  /* [3003] */
    (xdc_Char)0x6e,  /* [3004] */
    (xdc_Char)0x20,  /* [3005] */
    (xdc_Char)0x70,  /* [3006] */
    (xdc_Char)0x61,  /* [3007] */
    (xdc_Char)0x72,  /* [3008] */
    (xdc_Char)0x61,  /* [3009] */
    (xdc_Char)0x6d,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x74,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x72,  /* [3014] */
    (xdc_Char)0x20,  /* [3015] */
    (xdc_Char)0x31,  /* [3016] */
    (xdc_Char)0x29,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x6d,  /* [3019] */
    (xdc_Char)0x75,  /* [3020] */
    (xdc_Char)0x73,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x62,  /* [3024] */
    (xdc_Char)0x65,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x30,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x6f,  /* [3029] */
    (xdc_Char)0x72,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x61,  /* [3032] */
    (xdc_Char)0x20,  /* [3033] */
    (xdc_Char)0x70,  /* [3034] */
    (xdc_Char)0x6f,  /* [3035] */
    (xdc_Char)0x77,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x72,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x6f,  /* [3040] */
    (xdc_Char)0x66,  /* [3041] */
    (xdc_Char)0x20,  /* [3042] */
    (xdc_Char)0x32,  /* [3043] */
    (xdc_Char)0x20,  /* [3044] */
    (xdc_Char)0x61,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x64,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x32,  /* [3049] */
    (xdc_Char)0x29,  /* [3050] */
    (xdc_Char)0x20,  /* [3051] */
    (xdc_Char)0x6e,  /* [3052] */
    (xdc_Char)0x6f,  /* [3053] */
    (xdc_Char)0x74,  /* [3054] */
    (xdc_Char)0x20,  /* [3055] */
    (xdc_Char)0x67,  /* [3056] */
    (xdc_Char)0x72,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x61,  /* [3059] */
    (xdc_Char)0x74,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x72,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x74,  /* [3064] */
    (xdc_Char)0x68,  /* [3065] */
    (xdc_Char)0x61,  /* [3066] */
    (xdc_Char)0x6e,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x74,  /* [3069] */
    (xdc_Char)0x68,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x20,  /* [3072] */
    (xdc_Char)0x68,  /* [3073] */
    (xdc_Char)0x65,  /* [3074] */
    (xdc_Char)0x61,  /* [3075] */
    (xdc_Char)0x70,  /* [3076] */
    (xdc_Char)0x73,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x61,  /* [3079] */
    (xdc_Char)0x6c,  /* [3080] */
    (xdc_Char)0x69,  /* [3081] */
    (xdc_Char)0x67,  /* [3082] */
    (xdc_Char)0x6e,  /* [3083] */
    (xdc_Char)0x6d,  /* [3084] */
    (xdc_Char)0x65,  /* [3085] */
    (xdc_Char)0x6e,  /* [3086] */
    (xdc_Char)0x74,  /* [3087] */
    (xdc_Char)0x0,  /* [3088] */
    (xdc_Char)0x62,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x6f,  /* [3091] */
    (xdc_Char)0x63,  /* [3092] */
    (xdc_Char)0x6b,  /* [3093] */
    (xdc_Char)0x53,  /* [3094] */
    (xdc_Char)0x69,  /* [3095] */
    (xdc_Char)0x7a,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x20,  /* [3098] */
    (xdc_Char)0x63,  /* [3099] */
    (xdc_Char)0x61,  /* [3100] */
    (xdc_Char)0x6e,  /* [3101] */
    (xdc_Char)0x6e,  /* [3102] */
    (xdc_Char)0x6f,  /* [3103] */
    (xdc_Char)0x74,  /* [3104] */
    (xdc_Char)0x20,  /* [3105] */
    (xdc_Char)0x62,  /* [3106] */
    (xdc_Char)0x65,  /* [3107] */
    (xdc_Char)0x20,  /* [3108] */
    (xdc_Char)0x7a,  /* [3109] */
    (xdc_Char)0x65,  /* [3110] */
    (xdc_Char)0x72,  /* [3111] */
    (xdc_Char)0x6f,  /* [3112] */
    (xdc_Char)0x0,  /* [3113] */
    (xdc_Char)0x6e,  /* [3114] */
    (xdc_Char)0x75,  /* [3115] */
    (xdc_Char)0x6d,  /* [3116] */
    (xdc_Char)0x42,  /* [3117] */
    (xdc_Char)0x6c,  /* [3118] */
    (xdc_Char)0x6f,  /* [3119] */
    (xdc_Char)0x63,  /* [3120] */
    (xdc_Char)0x6b,  /* [3121] */
    (xdc_Char)0x73,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x63,  /* [3124] */
    (xdc_Char)0x61,  /* [3125] */
    (xdc_Char)0x6e,  /* [3126] */
    (xdc_Char)0x6e,  /* [3127] */
    (xdc_Char)0x6f,  /* [3128] */
    (xdc_Char)0x74,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x62,  /* [3131] */
    (xdc_Char)0x65,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x7a,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x72,  /* [3136] */
    (xdc_Char)0x6f,  /* [3137] */
    (xdc_Char)0x0,  /* [3138] */
    (xdc_Char)0x62,  /* [3139] */
    (xdc_Char)0x75,  /* [3140] */
    (xdc_Char)0x66,  /* [3141] */
    (xdc_Char)0x53,  /* [3142] */
    (xdc_Char)0x69,  /* [3143] */
    (xdc_Char)0x7a,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x20,  /* [3146] */
    (xdc_Char)0x63,  /* [3147] */
    (xdc_Char)0x61,  /* [3148] */
    (xdc_Char)0x6e,  /* [3149] */
    (xdc_Char)0x6e,  /* [3150] */
    (xdc_Char)0x6f,  /* [3151] */
    (xdc_Char)0x74,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x62,  /* [3154] */
    (xdc_Char)0x65,  /* [3155] */
    (xdc_Char)0x20,  /* [3156] */
    (xdc_Char)0x7a,  /* [3157] */
    (xdc_Char)0x65,  /* [3158] */
    (xdc_Char)0x72,  /* [3159] */
    (xdc_Char)0x6f,  /* [3160] */
    (xdc_Char)0x0,  /* [3161] */
    (xdc_Char)0x48,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x61,  /* [3164] */
    (xdc_Char)0x70,  /* [3165] */
    (xdc_Char)0x42,  /* [3166] */
    (xdc_Char)0x75,  /* [3167] */
    (xdc_Char)0x66,  /* [3168] */
    (xdc_Char)0x5f,  /* [3169] */
    (xdc_Char)0x63,  /* [3170] */
    (xdc_Char)0x72,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x74,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x27,  /* [3176] */
    (xdc_Char)0x73,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x62,  /* [3179] */
    (xdc_Char)0x75,  /* [3180] */
    (xdc_Char)0x66,  /* [3181] */
    (xdc_Char)0x53,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x7a,  /* [3184] */
    (xdc_Char)0x65,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x70,  /* [3187] */
    (xdc_Char)0x61,  /* [3188] */
    (xdc_Char)0x72,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x6d,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x74,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x20,  /* [3196] */
    (xdc_Char)0x69,  /* [3197] */
    (xdc_Char)0x73,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x69,  /* [3200] */
    (xdc_Char)0x6e,  /* [3201] */
    (xdc_Char)0x76,  /* [3202] */
    (xdc_Char)0x61,  /* [3203] */
    (xdc_Char)0x6c,  /* [3204] */
    (xdc_Char)0x69,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x28,  /* [3208] */
    (xdc_Char)0x74,  /* [3209] */
    (xdc_Char)0x6f,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x20,  /* [3212] */
    (xdc_Char)0x73,  /* [3213] */
    (xdc_Char)0x6d,  /* [3214] */
    (xdc_Char)0x61,  /* [3215] */
    (xdc_Char)0x6c,  /* [3216] */
    (xdc_Char)0x6c,  /* [3217] */
    (xdc_Char)0x29,  /* [3218] */
    (xdc_Char)0x0,  /* [3219] */
    (xdc_Char)0x43,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x6e,  /* [3222] */
    (xdc_Char)0x6e,  /* [3223] */
    (xdc_Char)0x6f,  /* [3224] */
    (xdc_Char)0x74,  /* [3225] */
    (xdc_Char)0x20,  /* [3226] */
    (xdc_Char)0x63,  /* [3227] */
    (xdc_Char)0x61,  /* [3228] */
    (xdc_Char)0x6c,  /* [3229] */
    (xdc_Char)0x6c,  /* [3230] */
    (xdc_Char)0x20,  /* [3231] */
    (xdc_Char)0x48,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x61,  /* [3234] */
    (xdc_Char)0x70,  /* [3235] */
    (xdc_Char)0x42,  /* [3236] */
    (xdc_Char)0x75,  /* [3237] */
    (xdc_Char)0x66,  /* [3238] */
    (xdc_Char)0x5f,  /* [3239] */
    (xdc_Char)0x66,  /* [3240] */
    (xdc_Char)0x72,  /* [3241] */
    (xdc_Char)0x65,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x20,  /* [3244] */
    (xdc_Char)0x77,  /* [3245] */
    (xdc_Char)0x68,  /* [3246] */
    (xdc_Char)0x65,  /* [3247] */
    (xdc_Char)0x6e,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x6e,  /* [3250] */
    (xdc_Char)0x6f,  /* [3251] */
    (xdc_Char)0x20,  /* [3252] */
    (xdc_Char)0x62,  /* [3253] */
    (xdc_Char)0x6c,  /* [3254] */
    (xdc_Char)0x6f,  /* [3255] */
    (xdc_Char)0x63,  /* [3256] */
    (xdc_Char)0x6b,  /* [3257] */
    (xdc_Char)0x73,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x68,  /* [3260] */
    (xdc_Char)0x61,  /* [3261] */
    (xdc_Char)0x76,  /* [3262] */
    (xdc_Char)0x65,  /* [3263] */
    (xdc_Char)0x20,  /* [3264] */
    (xdc_Char)0x62,  /* [3265] */
    (xdc_Char)0x65,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x6e,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x61,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x6c,  /* [3272] */
    (xdc_Char)0x6f,  /* [3273] */
    (xdc_Char)0x63,  /* [3274] */
    (xdc_Char)0x61,  /* [3275] */
    (xdc_Char)0x74,  /* [3276] */
    (xdc_Char)0x65,  /* [3277] */
    (xdc_Char)0x64,  /* [3278] */
    (xdc_Char)0x0,  /* [3279] */
    (xdc_Char)0x41,  /* [3280] */
    (xdc_Char)0x5f,  /* [3281] */
    (xdc_Char)0x69,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x76,  /* [3284] */
    (xdc_Char)0x61,  /* [3285] */
    (xdc_Char)0x6c,  /* [3286] */
    (xdc_Char)0x69,  /* [3287] */
    (xdc_Char)0x64,  /* [3288] */
    (xdc_Char)0x46,  /* [3289] */
    (xdc_Char)0x72,  /* [3290] */
    (xdc_Char)0x65,  /* [3291] */
    (xdc_Char)0x65,  /* [3292] */
    (xdc_Char)0x3a,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x49,  /* [3295] */
    (xdc_Char)0x6e,  /* [3296] */
    (xdc_Char)0x76,  /* [3297] */
    (xdc_Char)0x61,  /* [3298] */
    (xdc_Char)0x6c,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x64,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x66,  /* [3303] */
    (xdc_Char)0x72,  /* [3304] */
    (xdc_Char)0x65,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x0,  /* [3307] */
    (xdc_Char)0x41,  /* [3308] */
    (xdc_Char)0x5f,  /* [3309] */
    (xdc_Char)0x7a,  /* [3310] */
    (xdc_Char)0x65,  /* [3311] */
    (xdc_Char)0x72,  /* [3312] */
    (xdc_Char)0x6f,  /* [3313] */
    (xdc_Char)0x42,  /* [3314] */
    (xdc_Char)0x6c,  /* [3315] */
    (xdc_Char)0x6f,  /* [3316] */
    (xdc_Char)0x63,  /* [3317] */
    (xdc_Char)0x6b,  /* [3318] */
    (xdc_Char)0x3a,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x43,  /* [3321] */
    (xdc_Char)0x61,  /* [3322] */
    (xdc_Char)0x6e,  /* [3323] */
    (xdc_Char)0x6e,  /* [3324] */
    (xdc_Char)0x6f,  /* [3325] */
    (xdc_Char)0x74,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x61,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x6c,  /* [3330] */
    (xdc_Char)0x6f,  /* [3331] */
    (xdc_Char)0x63,  /* [3332] */
    (xdc_Char)0x61,  /* [3333] */
    (xdc_Char)0x74,  /* [3334] */
    (xdc_Char)0x65,  /* [3335] */
    (xdc_Char)0x20,  /* [3336] */
    (xdc_Char)0x73,  /* [3337] */
    (xdc_Char)0x69,  /* [3338] */
    (xdc_Char)0x7a,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x20,  /* [3341] */
    (xdc_Char)0x30,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x41,  /* [3344] */
    (xdc_Char)0x5f,  /* [3345] */
    (xdc_Char)0x68,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x70,  /* [3349] */
    (xdc_Char)0x53,  /* [3350] */
    (xdc_Char)0x69,  /* [3351] */
    (xdc_Char)0x7a,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x3a,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x52,  /* [3356] */
    (xdc_Char)0x65,  /* [3357] */
    (xdc_Char)0x71,  /* [3358] */
    (xdc_Char)0x75,  /* [3359] */
    (xdc_Char)0x65,  /* [3360] */
    (xdc_Char)0x73,  /* [3361] */
    (xdc_Char)0x74,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x64,  /* [3364] */
    (xdc_Char)0x20,  /* [3365] */
    (xdc_Char)0x68,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x70,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x73,  /* [3371] */
    (xdc_Char)0x69,  /* [3372] */
    (xdc_Char)0x7a,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x69,  /* [3376] */
    (xdc_Char)0x73,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x74,  /* [3379] */
    (xdc_Char)0x6f,  /* [3380] */
    (xdc_Char)0x6f,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x73,  /* [3383] */
    (xdc_Char)0x6d,  /* [3384] */
    (xdc_Char)0x61,  /* [3385] */
    (xdc_Char)0x6c,  /* [3386] */
    (xdc_Char)0x6c,  /* [3387] */
    (xdc_Char)0x0,  /* [3388] */
    (xdc_Char)0x41,  /* [3389] */
    (xdc_Char)0x5f,  /* [3390] */
    (xdc_Char)0x61,  /* [3391] */
    (xdc_Char)0x6c,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x67,  /* [3394] */
    (xdc_Char)0x6e,  /* [3395] */
    (xdc_Char)0x3a,  /* [3396] */
    (xdc_Char)0x20,  /* [3397] */
    (xdc_Char)0x52,  /* [3398] */
    (xdc_Char)0x65,  /* [3399] */
    (xdc_Char)0x71,  /* [3400] */
    (xdc_Char)0x75,  /* [3401] */
    (xdc_Char)0x65,  /* [3402] */
    (xdc_Char)0x73,  /* [3403] */
    (xdc_Char)0x74,  /* [3404] */
    (xdc_Char)0x65,  /* [3405] */
    (xdc_Char)0x64,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x61,  /* [3408] */
    (xdc_Char)0x6c,  /* [3409] */
    (xdc_Char)0x69,  /* [3410] */
    (xdc_Char)0x67,  /* [3411] */
    (xdc_Char)0x6e,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x69,  /* [3414] */
    (xdc_Char)0x73,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x6e,  /* [3417] */
    (xdc_Char)0x6f,  /* [3418] */
    (xdc_Char)0x74,  /* [3419] */
    (xdc_Char)0x20,  /* [3420] */
    (xdc_Char)0x61,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x70,  /* [3423] */
    (xdc_Char)0x6f,  /* [3424] */
    (xdc_Char)0x77,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x72,  /* [3427] */
    (xdc_Char)0x20,  /* [3428] */
    (xdc_Char)0x6f,  /* [3429] */
    (xdc_Char)0x66,  /* [3430] */
    (xdc_Char)0x20,  /* [3431] */
    (xdc_Char)0x32,  /* [3432] */
    (xdc_Char)0x0,  /* [3433] */
    (xdc_Char)0x49,  /* [3434] */
    (xdc_Char)0x6e,  /* [3435] */
    (xdc_Char)0x76,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x6c,  /* [3438] */
    (xdc_Char)0x69,  /* [3439] */
    (xdc_Char)0x64,  /* [3440] */
    (xdc_Char)0x20,  /* [3441] */
    (xdc_Char)0x62,  /* [3442] */
    (xdc_Char)0x6c,  /* [3443] */
    (xdc_Char)0x6f,  /* [3444] */
    (xdc_Char)0x63,  /* [3445] */
    (xdc_Char)0x6b,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x61,  /* [3448] */
    (xdc_Char)0x64,  /* [3449] */
    (xdc_Char)0x64,  /* [3450] */
    (xdc_Char)0x72,  /* [3451] */
    (xdc_Char)0x65,  /* [3452] */
    (xdc_Char)0x73,  /* [3453] */
    (xdc_Char)0x73,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x6e,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x74,  /* [3459] */
    (xdc_Char)0x68,  /* [3460] */
    (xdc_Char)0x65,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x66,  /* [3463] */
    (xdc_Char)0x72,  /* [3464] */
    (xdc_Char)0x65,  /* [3465] */
    (xdc_Char)0x65,  /* [3466] */
    (xdc_Char)0x2e,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x46,  /* [3469] */
    (xdc_Char)0x61,  /* [3470] */
    (xdc_Char)0x69,  /* [3471] */
    (xdc_Char)0x6c,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x64,  /* [3474] */
    (xdc_Char)0x20,  /* [3475] */
    (xdc_Char)0x74,  /* [3476] */
    (xdc_Char)0x6f,  /* [3477] */
    (xdc_Char)0x20,  /* [3478] */
    (xdc_Char)0x66,  /* [3479] */
    (xdc_Char)0x72,  /* [3480] */
    (xdc_Char)0x65,  /* [3481] */
    (xdc_Char)0x65,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x62,  /* [3484] */
    (xdc_Char)0x6c,  /* [3485] */
    (xdc_Char)0x6f,  /* [3486] */
    (xdc_Char)0x63,  /* [3487] */
    (xdc_Char)0x6b,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x62,  /* [3490] */
    (xdc_Char)0x61,  /* [3491] */
    (xdc_Char)0x63,  /* [3492] */
    (xdc_Char)0x6b,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x74,  /* [3495] */
    (xdc_Char)0x6f,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x68,  /* [3498] */
    (xdc_Char)0x65,  /* [3499] */
    (xdc_Char)0x61,  /* [3500] */
    (xdc_Char)0x70,  /* [3501] */
    (xdc_Char)0x2e,  /* [3502] */
    (xdc_Char)0x0,  /* [3503] */
    (xdc_Char)0x41,  /* [3504] */
    (xdc_Char)0x5f,  /* [3505] */
    (xdc_Char)0x64,  /* [3506] */
    (xdc_Char)0x6f,  /* [3507] */
    (xdc_Char)0x75,  /* [3508] */
    (xdc_Char)0x62,  /* [3509] */
    (xdc_Char)0x6c,  /* [3510] */
    (xdc_Char)0x65,  /* [3511] */
    (xdc_Char)0x46,  /* [3512] */
    (xdc_Char)0x72,  /* [3513] */
    (xdc_Char)0x65,  /* [3514] */
    (xdc_Char)0x65,  /* [3515] */
    (xdc_Char)0x3a,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x42,  /* [3518] */
    (xdc_Char)0x75,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x66,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x72,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x61,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x61,  /* [3529] */
    (xdc_Char)0x64,  /* [3530] */
    (xdc_Char)0x79,  /* [3531] */
    (xdc_Char)0x20,  /* [3532] */
    (xdc_Char)0x66,  /* [3533] */
    (xdc_Char)0x72,  /* [3534] */
    (xdc_Char)0x65,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x0,  /* [3537] */
    (xdc_Char)0x41,  /* [3538] */
    (xdc_Char)0x5f,  /* [3539] */
    (xdc_Char)0x62,  /* [3540] */
    (xdc_Char)0x75,  /* [3541] */
    (xdc_Char)0x66,  /* [3542] */
    (xdc_Char)0x4f,  /* [3543] */
    (xdc_Char)0x76,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x72,  /* [3546] */
    (xdc_Char)0x66,  /* [3547] */
    (xdc_Char)0x6c,  /* [3548] */
    (xdc_Char)0x6f,  /* [3549] */
    (xdc_Char)0x77,  /* [3550] */
    (xdc_Char)0x3a,  /* [3551] */
    (xdc_Char)0x20,  /* [3552] */
    (xdc_Char)0x42,  /* [3553] */
    (xdc_Char)0x75,  /* [3554] */
    (xdc_Char)0x66,  /* [3555] */
    (xdc_Char)0x66,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x72,  /* [3558] */
    (xdc_Char)0x20,  /* [3559] */
    (xdc_Char)0x6f,  /* [3560] */
    (xdc_Char)0x76,  /* [3561] */
    (xdc_Char)0x65,  /* [3562] */
    (xdc_Char)0x72,  /* [3563] */
    (xdc_Char)0x66,  /* [3564] */
    (xdc_Char)0x6c,  /* [3565] */
    (xdc_Char)0x6f,  /* [3566] */
    (xdc_Char)0x77,  /* [3567] */
    (xdc_Char)0x0,  /* [3568] */
    (xdc_Char)0x41,  /* [3569] */
    (xdc_Char)0x5f,  /* [3570] */
    (xdc_Char)0x6e,  /* [3571] */
    (xdc_Char)0x6f,  /* [3572] */
    (xdc_Char)0x74,  /* [3573] */
    (xdc_Char)0x45,  /* [3574] */
    (xdc_Char)0x6d,  /* [3575] */
    (xdc_Char)0x70,  /* [3576] */
    (xdc_Char)0x74,  /* [3577] */
    (xdc_Char)0x79,  /* [3578] */
    (xdc_Char)0x3a,  /* [3579] */
    (xdc_Char)0x20,  /* [3580] */
    (xdc_Char)0x48,  /* [3581] */
    (xdc_Char)0x65,  /* [3582] */
    (xdc_Char)0x61,  /* [3583] */
    (xdc_Char)0x70,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x6e,  /* [3586] */
    (xdc_Char)0x6f,  /* [3587] */
    (xdc_Char)0x74,  /* [3588] */
    (xdc_Char)0x20,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x6d,  /* [3591] */
    (xdc_Char)0x70,  /* [3592] */
    (xdc_Char)0x74,  /* [3593] */
    (xdc_Char)0x79,  /* [3594] */
    (xdc_Char)0x0,  /* [3595] */
    (xdc_Char)0x41,  /* [3596] */
    (xdc_Char)0x5f,  /* [3597] */
    (xdc_Char)0x6e,  /* [3598] */
    (xdc_Char)0x75,  /* [3599] */
    (xdc_Char)0x6c,  /* [3600] */
    (xdc_Char)0x6c,  /* [3601] */
    (xdc_Char)0x4f,  /* [3602] */
    (xdc_Char)0x62,  /* [3603] */
    (xdc_Char)0x6a,  /* [3604] */
    (xdc_Char)0x65,  /* [3605] */
    (xdc_Char)0x63,  /* [3606] */
    (xdc_Char)0x74,  /* [3607] */
    (xdc_Char)0x3a,  /* [3608] */
    (xdc_Char)0x20,  /* [3609] */
    (xdc_Char)0x48,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x61,  /* [3612] */
    (xdc_Char)0x70,  /* [3613] */
    (xdc_Char)0x54,  /* [3614] */
    (xdc_Char)0x72,  /* [3615] */
    (xdc_Char)0x61,  /* [3616] */
    (xdc_Char)0x63,  /* [3617] */
    (xdc_Char)0x6b,  /* [3618] */
    (xdc_Char)0x5f,  /* [3619] */
    (xdc_Char)0x70,  /* [3620] */
    (xdc_Char)0x72,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6e,  /* [3623] */
    (xdc_Char)0x74,  /* [3624] */
    (xdc_Char)0x48,  /* [3625] */
    (xdc_Char)0x65,  /* [3626] */
    (xdc_Char)0x61,  /* [3627] */
    (xdc_Char)0x70,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x63,  /* [3630] */
    (xdc_Char)0x61,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x6c,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x64,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x77,  /* [3637] */
    (xdc_Char)0x69,  /* [3638] */
    (xdc_Char)0x74,  /* [3639] */
    (xdc_Char)0x68,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x6e,  /* [3642] */
    (xdc_Char)0x75,  /* [3643] */
    (xdc_Char)0x6c,  /* [3644] */
    (xdc_Char)0x6c,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x6f,  /* [3647] */
    (xdc_Char)0x62,  /* [3648] */
    (xdc_Char)0x6a,  /* [3649] */
    (xdc_Char)0x0,  /* [3650] */
    (xdc_Char)0x61,  /* [3651] */
    (xdc_Char)0x73,  /* [3652] */
    (xdc_Char)0x73,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x72,  /* [3655] */
    (xdc_Char)0x74,  /* [3656] */
    (xdc_Char)0x69,  /* [3657] */
    (xdc_Char)0x6f,  /* [3658] */
    (xdc_Char)0x6e,  /* [3659] */
    (xdc_Char)0x20,  /* [3660] */
    (xdc_Char)0x66,  /* [3661] */
    (xdc_Char)0x61,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x6c,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x72,  /* [3666] */
    (xdc_Char)0x65,  /* [3667] */
    (xdc_Char)0x25,  /* [3668] */
    (xdc_Char)0x73,  /* [3669] */
    (xdc_Char)0x25,  /* [3670] */
    (xdc_Char)0x73,  /* [3671] */
    (xdc_Char)0x0,  /* [3672] */
    (xdc_Char)0x25,  /* [3673] */
    (xdc_Char)0x24,  /* [3674] */
    (xdc_Char)0x53,  /* [3675] */
    (xdc_Char)0x0,  /* [3676] */
    (xdc_Char)0x6f,  /* [3677] */
    (xdc_Char)0x75,  /* [3678] */
    (xdc_Char)0x74,  /* [3679] */
    (xdc_Char)0x20,  /* [3680] */
    (xdc_Char)0x6f,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x6d,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x6d,  /* [3686] */
    (xdc_Char)0x6f,  /* [3687] */
    (xdc_Char)0x72,  /* [3688] */
    (xdc_Char)0x79,  /* [3689] */
    (xdc_Char)0x3a,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x68,  /* [3692] */
    (xdc_Char)0x65,  /* [3693] */
    (xdc_Char)0x61,  /* [3694] */
    (xdc_Char)0x70,  /* [3695] */
    (xdc_Char)0x3d,  /* [3696] */
    (xdc_Char)0x30,  /* [3697] */
    (xdc_Char)0x78,  /* [3698] */
    (xdc_Char)0x25,  /* [3699] */
    (xdc_Char)0x78,  /* [3700] */
    (xdc_Char)0x2c,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x73,  /* [3703] */
    (xdc_Char)0x69,  /* [3704] */
    (xdc_Char)0x7a,  /* [3705] */
    (xdc_Char)0x65,  /* [3706] */
    (xdc_Char)0x3d,  /* [3707] */
    (xdc_Char)0x25,  /* [3708] */
    (xdc_Char)0x75,  /* [3709] */
    (xdc_Char)0x0,  /* [3710] */
    (xdc_Char)0x25,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x20,  /* [3713] */
    (xdc_Char)0x30,  /* [3714] */
    (xdc_Char)0x78,  /* [3715] */
    (xdc_Char)0x25,  /* [3716] */
    (xdc_Char)0x78,  /* [3717] */
    (xdc_Char)0x0,  /* [3718] */
    (xdc_Char)0x45,  /* [3719] */
    (xdc_Char)0x5f,  /* [3720] */
    (xdc_Char)0x62,  /* [3721] */
    (xdc_Char)0x61,  /* [3722] */
    (xdc_Char)0x64,  /* [3723] */
    (xdc_Char)0x4c,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x76,  /* [3726] */
    (xdc_Char)0x65,  /* [3727] */
    (xdc_Char)0x6c,  /* [3728] */
    (xdc_Char)0x3a,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x42,  /* [3731] */
    (xdc_Char)0x61,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x66,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x6c,  /* [3737] */
    (xdc_Char)0x74,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x72,  /* [3740] */
    (xdc_Char)0x20,  /* [3741] */
    (xdc_Char)0x6c,  /* [3742] */
    (xdc_Char)0x65,  /* [3743] */
    (xdc_Char)0x76,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x6c,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x76,  /* [3748] */
    (xdc_Char)0x61,  /* [3749] */
    (xdc_Char)0x6c,  /* [3750] */
    (xdc_Char)0x75,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x3a,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x25,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x0,  /* [3757] */
    (xdc_Char)0x66,  /* [3758] */
    (xdc_Char)0x72,  /* [3759] */
    (xdc_Char)0x65,  /* [3760] */
    (xdc_Char)0x65,  /* [3761] */
    (xdc_Char)0x28,  /* [3762] */
    (xdc_Char)0x29,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x69,  /* [3765] */
    (xdc_Char)0x6e,  /* [3766] */
    (xdc_Char)0x76,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x6c,  /* [3769] */
    (xdc_Char)0x69,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x69,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x67,  /* [3776] */
    (xdc_Char)0x72,  /* [3777] */
    (xdc_Char)0x6f,  /* [3778] */
    (xdc_Char)0x77,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x68,  /* [3781] */
    (xdc_Char)0x2d,  /* [3782] */
    (xdc_Char)0x6f,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x6c,  /* [3785] */
    (xdc_Char)0x79,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x48,  /* [3788] */
    (xdc_Char)0x65,  /* [3789] */
    (xdc_Char)0x61,  /* [3790] */
    (xdc_Char)0x70,  /* [3791] */
    (xdc_Char)0x4d,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x6e,  /* [3794] */
    (xdc_Char)0x0,  /* [3795] */
    (xdc_Char)0x54,  /* [3796] */
    (xdc_Char)0x68,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x52,  /* [3800] */
    (xdc_Char)0x54,  /* [3801] */
    (xdc_Char)0x53,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x68,  /* [3804] */
    (xdc_Char)0x65,  /* [3805] */
    (xdc_Char)0x61,  /* [3806] */
    (xdc_Char)0x70,  /* [3807] */
    (xdc_Char)0x20,  /* [3808] */
    (xdc_Char)0x69,  /* [3809] */
    (xdc_Char)0x73,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x75,  /* [3812] */
    (xdc_Char)0x73,  /* [3813] */
    (xdc_Char)0x65,  /* [3814] */
    (xdc_Char)0x64,  /* [3815] */
    (xdc_Char)0x20,  /* [3816] */
    (xdc_Char)0x75,  /* [3817] */
    (xdc_Char)0x70,  /* [3818] */
    (xdc_Char)0x2e,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x45,  /* [3821] */
    (xdc_Char)0x78,  /* [3822] */
    (xdc_Char)0x61,  /* [3823] */
    (xdc_Char)0x6d,  /* [3824] */
    (xdc_Char)0x69,  /* [3825] */
    (xdc_Char)0x6e,  /* [3826] */
    (xdc_Char)0x65,  /* [3827] */
    (xdc_Char)0x20,  /* [3828] */
    (xdc_Char)0x50,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x6f,  /* [3831] */
    (xdc_Char)0x67,  /* [3832] */
    (xdc_Char)0x72,  /* [3833] */
    (xdc_Char)0x61,  /* [3834] */
    (xdc_Char)0x6d,  /* [3835] */
    (xdc_Char)0x2e,  /* [3836] */
    (xdc_Char)0x68,  /* [3837] */
    (xdc_Char)0x65,  /* [3838] */
    (xdc_Char)0x61,  /* [3839] */
    (xdc_Char)0x70,  /* [3840] */
    (xdc_Char)0x2e,  /* [3841] */
    (xdc_Char)0x0,  /* [3842] */
    (xdc_Char)0x45,  /* [3843] */
    (xdc_Char)0x5f,  /* [3844] */
    (xdc_Char)0x62,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x64,  /* [3847] */
    (xdc_Char)0x43,  /* [3848] */
    (xdc_Char)0x6f,  /* [3849] */
    (xdc_Char)0x6d,  /* [3850] */
    (xdc_Char)0x6d,  /* [3851] */
    (xdc_Char)0x61,  /* [3852] */
    (xdc_Char)0x6e,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x3a,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x52,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x63,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x69,  /* [3861] */
    (xdc_Char)0x76,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x64,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x69,  /* [3866] */
    (xdc_Char)0x6e,  /* [3867] */
    (xdc_Char)0x76,  /* [3868] */
    (xdc_Char)0x61,  /* [3869] */
    (xdc_Char)0x6c,  /* [3870] */
    (xdc_Char)0x69,  /* [3871] */
    (xdc_Char)0x64,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x63,  /* [3874] */
    (xdc_Char)0x6f,  /* [3875] */
    (xdc_Char)0x6d,  /* [3876] */
    (xdc_Char)0x6d,  /* [3877] */
    (xdc_Char)0x61,  /* [3878] */
    (xdc_Char)0x6e,  /* [3879] */
    (xdc_Char)0x64,  /* [3880] */
    (xdc_Char)0x2c,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x69,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x3a,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x25,  /* [3887] */
    (xdc_Char)0x64,  /* [3888] */
    (xdc_Char)0x2e,  /* [3889] */
    (xdc_Char)0x0,  /* [3890] */
    (xdc_Char)0x45,  /* [3891] */
    (xdc_Char)0x5f,  /* [3892] */
    (xdc_Char)0x73,  /* [3893] */
    (xdc_Char)0x74,  /* [3894] */
    (xdc_Char)0x61,  /* [3895] */
    (xdc_Char)0x63,  /* [3896] */
    (xdc_Char)0x6b,  /* [3897] */
    (xdc_Char)0x4f,  /* [3898] */
    (xdc_Char)0x76,  /* [3899] */
    (xdc_Char)0x65,  /* [3900] */
    (xdc_Char)0x72,  /* [3901] */
    (xdc_Char)0x66,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x6f,  /* [3904] */
    (xdc_Char)0x77,  /* [3905] */
    (xdc_Char)0x3a,  /* [3906] */
    (xdc_Char)0x20,  /* [3907] */
    (xdc_Char)0x54,  /* [3908] */
    (xdc_Char)0x61,  /* [3909] */
    (xdc_Char)0x73,  /* [3910] */
    (xdc_Char)0x6b,  /* [3911] */
    (xdc_Char)0x20,  /* [3912] */
    (xdc_Char)0x30,  /* [3913] */
    (xdc_Char)0x78,  /* [3914] */
    (xdc_Char)0x25,  /* [3915] */
    (xdc_Char)0x78,  /* [3916] */
    (xdc_Char)0x20,  /* [3917] */
    (xdc_Char)0x73,  /* [3918] */
    (xdc_Char)0x74,  /* [3919] */
    (xdc_Char)0x61,  /* [3920] */
    (xdc_Char)0x63,  /* [3921] */
    (xdc_Char)0x6b,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x76,  /* [3925] */
    (xdc_Char)0x65,  /* [3926] */
    (xdc_Char)0x72,  /* [3927] */
    (xdc_Char)0x66,  /* [3928] */
    (xdc_Char)0x6c,  /* [3929] */
    (xdc_Char)0x6f,  /* [3930] */
    (xdc_Char)0x77,  /* [3931] */
    (xdc_Char)0x2e,  /* [3932] */
    (xdc_Char)0x0,  /* [3933] */
    (xdc_Char)0x45,  /* [3934] */
    (xdc_Char)0x5f,  /* [3935] */
    (xdc_Char)0x73,  /* [3936] */
    (xdc_Char)0x70,  /* [3937] */
    (xdc_Char)0x4f,  /* [3938] */
    (xdc_Char)0x75,  /* [3939] */
    (xdc_Char)0x74,  /* [3940] */
    (xdc_Char)0x4f,  /* [3941] */
    (xdc_Char)0x66,  /* [3942] */
    (xdc_Char)0x42,  /* [3943] */
    (xdc_Char)0x6f,  /* [3944] */
    (xdc_Char)0x75,  /* [3945] */
    (xdc_Char)0x6e,  /* [3946] */
    (xdc_Char)0x64,  /* [3947] */
    (xdc_Char)0x73,  /* [3948] */
    (xdc_Char)0x3a,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x54,  /* [3951] */
    (xdc_Char)0x61,  /* [3952] */
    (xdc_Char)0x73,  /* [3953] */
    (xdc_Char)0x6b,  /* [3954] */
    (xdc_Char)0x20,  /* [3955] */
    (xdc_Char)0x30,  /* [3956] */
    (xdc_Char)0x78,  /* [3957] */
    (xdc_Char)0x25,  /* [3958] */
    (xdc_Char)0x78,  /* [3959] */
    (xdc_Char)0x20,  /* [3960] */
    (xdc_Char)0x73,  /* [3961] */
    (xdc_Char)0x74,  /* [3962] */
    (xdc_Char)0x61,  /* [3963] */
    (xdc_Char)0x63,  /* [3964] */
    (xdc_Char)0x6b,  /* [3965] */
    (xdc_Char)0x20,  /* [3966] */
    (xdc_Char)0x65,  /* [3967] */
    (xdc_Char)0x72,  /* [3968] */
    (xdc_Char)0x72,  /* [3969] */
    (xdc_Char)0x6f,  /* [3970] */
    (xdc_Char)0x72,  /* [3971] */
    (xdc_Char)0x2c,  /* [3972] */
    (xdc_Char)0x20,  /* [3973] */
    (xdc_Char)0x53,  /* [3974] */
    (xdc_Char)0x50,  /* [3975] */
    (xdc_Char)0x20,  /* [3976] */
    (xdc_Char)0x3d,  /* [3977] */
    (xdc_Char)0x20,  /* [3978] */
    (xdc_Char)0x30,  /* [3979] */
    (xdc_Char)0x78,  /* [3980] */
    (xdc_Char)0x25,  /* [3981] */
    (xdc_Char)0x78,  /* [3982] */
    (xdc_Char)0x2e,  /* [3983] */
    (xdc_Char)0x0,  /* [3984] */
    (xdc_Char)0x45,  /* [3985] */
    (xdc_Char)0x5f,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x65,  /* [3988] */
    (xdc_Char)0x6c,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x74,  /* [3991] */
    (xdc_Char)0x65,  /* [3992] */
    (xdc_Char)0x4e,  /* [3993] */
    (xdc_Char)0x6f,  /* [3994] */
    (xdc_Char)0x74,  /* [3995] */
    (xdc_Char)0x41,  /* [3996] */
    (xdc_Char)0x6c,  /* [3997] */
    (xdc_Char)0x6c,  /* [3998] */
    (xdc_Char)0x6f,  /* [3999] */
    (xdc_Char)0x77,  /* [4000] */
    (xdc_Char)0x65,  /* [4001] */
    (xdc_Char)0x64,  /* [4002] */
    (xdc_Char)0x3a,  /* [4003] */
    (xdc_Char)0x20,  /* [4004] */
    (xdc_Char)0x54,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x73,  /* [4007] */
    (xdc_Char)0x6b,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x30,  /* [4010] */
    (xdc_Char)0x78,  /* [4011] */
    (xdc_Char)0x25,  /* [4012] */
    (xdc_Char)0x78,  /* [4013] */
    (xdc_Char)0x2e,  /* [4014] */
    (xdc_Char)0x0,  /* [4015] */
    (xdc_Char)0x45,  /* [4016] */
    (xdc_Char)0x5f,  /* [4017] */
    (xdc_Char)0x73,  /* [4018] */
    (xdc_Char)0x74,  /* [4019] */
    (xdc_Char)0x61,  /* [4020] */
    (xdc_Char)0x63,  /* [4021] */
    (xdc_Char)0x6b,  /* [4022] */
    (xdc_Char)0x4f,  /* [4023] */
    (xdc_Char)0x76,  /* [4024] */
    (xdc_Char)0x65,  /* [4025] */
    (xdc_Char)0x72,  /* [4026] */
    (xdc_Char)0x66,  /* [4027] */
    (xdc_Char)0x6c,  /* [4028] */
    (xdc_Char)0x6f,  /* [4029] */
    (xdc_Char)0x77,  /* [4030] */
    (xdc_Char)0x3a,  /* [4031] */
    (xdc_Char)0x20,  /* [4032] */
    (xdc_Char)0x49,  /* [4033] */
    (xdc_Char)0x53,  /* [4034] */
    (xdc_Char)0x52,  /* [4035] */
    (xdc_Char)0x20,  /* [4036] */
    (xdc_Char)0x73,  /* [4037] */
    (xdc_Char)0x74,  /* [4038] */
    (xdc_Char)0x61,  /* [4039] */
    (xdc_Char)0x63,  /* [4040] */
    (xdc_Char)0x6b,  /* [4041] */
    (xdc_Char)0x20,  /* [4042] */
    (xdc_Char)0x6f,  /* [4043] */
    (xdc_Char)0x76,  /* [4044] */
    (xdc_Char)0x65,  /* [4045] */
    (xdc_Char)0x72,  /* [4046] */
    (xdc_Char)0x66,  /* [4047] */
    (xdc_Char)0x6c,  /* [4048] */
    (xdc_Char)0x6f,  /* [4049] */
    (xdc_Char)0x77,  /* [4050] */
    (xdc_Char)0x2e,  /* [4051] */
    (xdc_Char)0x0,  /* [4052] */
    (xdc_Char)0x45,  /* [4053] */
    (xdc_Char)0x5f,  /* [4054] */
    (xdc_Char)0x61,  /* [4055] */
    (xdc_Char)0x6c,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x61,  /* [4059] */
    (xdc_Char)0x64,  /* [4060] */
    (xdc_Char)0x79,  /* [4061] */
    (xdc_Char)0x44,  /* [4062] */
    (xdc_Char)0x65,  /* [4063] */
    (xdc_Char)0x66,  /* [4064] */
    (xdc_Char)0x69,  /* [4065] */
    (xdc_Char)0x6e,  /* [4066] */
    (xdc_Char)0x65,  /* [4067] */
    (xdc_Char)0x64,  /* [4068] */
    (xdc_Char)0x3a,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x48,  /* [4071] */
    (xdc_Char)0x77,  /* [4072] */
    (xdc_Char)0x69,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x6c,  /* [4076] */
    (xdc_Char)0x72,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x79,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x64,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x66,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x6e,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x64,  /* [4089] */
    (xdc_Char)0x3a,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x69,  /* [4092] */
    (xdc_Char)0x6e,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x72,  /* [4095] */
    (xdc_Char)0x23,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x25,  /* [4098] */
    (xdc_Char)0x64,  /* [4099] */
    (xdc_Char)0x0,  /* [4100] */
    (xdc_Char)0x45,  /* [4101] */
    (xdc_Char)0x5f,  /* [4102] */
    (xdc_Char)0x68,  /* [4103] */
    (xdc_Char)0x77,  /* [4104] */
    (xdc_Char)0x69,  /* [4105] */
    (xdc_Char)0x4c,  /* [4106] */
    (xdc_Char)0x69,  /* [4107] */
    (xdc_Char)0x6d,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x74,  /* [4110] */
    (xdc_Char)0x45,  /* [4111] */
    (xdc_Char)0x78,  /* [4112] */
    (xdc_Char)0x63,  /* [4113] */
    (xdc_Char)0x65,  /* [4114] */
    (xdc_Char)0x65,  /* [4115] */
    (xdc_Char)0x64,  /* [4116] */
    (xdc_Char)0x65,  /* [4117] */
    (xdc_Char)0x64,  /* [4118] */
    (xdc_Char)0x3a,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x54,  /* [4121] */
    (xdc_Char)0x6f,  /* [4122] */
    (xdc_Char)0x6f,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x6d,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x6e,  /* [4127] */
    (xdc_Char)0x79,  /* [4128] */
    (xdc_Char)0x20,  /* [4129] */
    (xdc_Char)0x69,  /* [4130] */
    (xdc_Char)0x6e,  /* [4131] */
    (xdc_Char)0x74,  /* [4132] */
    (xdc_Char)0x65,  /* [4133] */
    (xdc_Char)0x72,  /* [4134] */
    (xdc_Char)0x72,  /* [4135] */
    (xdc_Char)0x75,  /* [4136] */
    (xdc_Char)0x70,  /* [4137] */
    (xdc_Char)0x74,  /* [4138] */
    (xdc_Char)0x73,  /* [4139] */
    (xdc_Char)0x20,  /* [4140] */
    (xdc_Char)0x64,  /* [4141] */
    (xdc_Char)0x65,  /* [4142] */
    (xdc_Char)0x66,  /* [4143] */
    (xdc_Char)0x69,  /* [4144] */
    (xdc_Char)0x6e,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x64,  /* [4147] */
    (xdc_Char)0x0,  /* [4148] */
    (xdc_Char)0x45,  /* [4149] */
    (xdc_Char)0x5f,  /* [4150] */
    (xdc_Char)0x65,  /* [4151] */
    (xdc_Char)0x78,  /* [4152] */
    (xdc_Char)0x63,  /* [4153] */
    (xdc_Char)0x65,  /* [4154] */
    (xdc_Char)0x70,  /* [4155] */
    (xdc_Char)0x74,  /* [4156] */
    (xdc_Char)0x69,  /* [4157] */
    (xdc_Char)0x6f,  /* [4158] */
    (xdc_Char)0x6e,  /* [4159] */
    (xdc_Char)0x3a,  /* [4160] */
    (xdc_Char)0x20,  /* [4161] */
    (xdc_Char)0x69,  /* [4162] */
    (xdc_Char)0x64,  /* [4163] */
    (xdc_Char)0x20,  /* [4164] */
    (xdc_Char)0x3d,  /* [4165] */
    (xdc_Char)0x20,  /* [4166] */
    (xdc_Char)0x25,  /* [4167] */
    (xdc_Char)0x64,  /* [4168] */
    (xdc_Char)0x2c,  /* [4169] */
    (xdc_Char)0x20,  /* [4170] */
    (xdc_Char)0x70,  /* [4171] */
    (xdc_Char)0x63,  /* [4172] */
    (xdc_Char)0x20,  /* [4173] */
    (xdc_Char)0x3d,  /* [4174] */
    (xdc_Char)0x20,  /* [4175] */
    (xdc_Char)0x25,  /* [4176] */
    (xdc_Char)0x30,  /* [4177] */
    (xdc_Char)0x38,  /* [4178] */
    (xdc_Char)0x78,  /* [4179] */
    (xdc_Char)0x2e,  /* [4180] */
    (xdc_Char)0xa,  /* [4181] */
    (xdc_Char)0x54,  /* [4182] */
    (xdc_Char)0x6f,  /* [4183] */
    (xdc_Char)0x20,  /* [4184] */
    (xdc_Char)0x73,  /* [4185] */
    (xdc_Char)0x65,  /* [4186] */
    (xdc_Char)0x65,  /* [4187] */
    (xdc_Char)0x20,  /* [4188] */
    (xdc_Char)0x6d,  /* [4189] */
    (xdc_Char)0x6f,  /* [4190] */
    (xdc_Char)0x72,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x65,  /* [4194] */
    (xdc_Char)0x78,  /* [4195] */
    (xdc_Char)0x63,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x70,  /* [4198] */
    (xdc_Char)0x74,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x6f,  /* [4201] */
    (xdc_Char)0x6e,  /* [4202] */
    (xdc_Char)0x20,  /* [4203] */
    (xdc_Char)0x64,  /* [4204] */
    (xdc_Char)0x65,  /* [4205] */
    (xdc_Char)0x74,  /* [4206] */
    (xdc_Char)0x61,  /* [4207] */
    (xdc_Char)0x69,  /* [4208] */
    (xdc_Char)0x6c,  /* [4209] */
    (xdc_Char)0x2c,  /* [4210] */
    (xdc_Char)0x20,  /* [4211] */
    (xdc_Char)0x73,  /* [4212] */
    (xdc_Char)0x65,  /* [4213] */
    (xdc_Char)0x74,  /* [4214] */
    (xdc_Char)0x20,  /* [4215] */
    (xdc_Char)0x74,  /* [4216] */
    (xdc_Char)0x69,  /* [4217] */
    (xdc_Char)0x2e,  /* [4218] */
    (xdc_Char)0x73,  /* [4219] */
    (xdc_Char)0x79,  /* [4220] */
    (xdc_Char)0x73,  /* [4221] */
    (xdc_Char)0x62,  /* [4222] */
    (xdc_Char)0x69,  /* [4223] */
    (xdc_Char)0x6f,  /* [4224] */
    (xdc_Char)0x73,  /* [4225] */
    (xdc_Char)0x2e,  /* [4226] */
    (xdc_Char)0x66,  /* [4227] */
    (xdc_Char)0x61,  /* [4228] */
    (xdc_Char)0x6d,  /* [4229] */
    (xdc_Char)0x69,  /* [4230] */
    (xdc_Char)0x6c,  /* [4231] */
    (xdc_Char)0x79,  /* [4232] */
    (xdc_Char)0x2e,  /* [4233] */
    (xdc_Char)0x61,  /* [4234] */
    (xdc_Char)0x72,  /* [4235] */
    (xdc_Char)0x6d,  /* [4236] */
    (xdc_Char)0x2e,  /* [4237] */
    (xdc_Char)0x6d,  /* [4238] */
    (xdc_Char)0x33,  /* [4239] */
    (xdc_Char)0x2e,  /* [4240] */
    (xdc_Char)0x48,  /* [4241] */
    (xdc_Char)0x77,  /* [4242] */
    (xdc_Char)0x69,  /* [4243] */
    (xdc_Char)0x2e,  /* [4244] */
    (xdc_Char)0x65,  /* [4245] */
    (xdc_Char)0x6e,  /* [4246] */
    (xdc_Char)0x61,  /* [4247] */
    (xdc_Char)0x62,  /* [4248] */
    (xdc_Char)0x6c,  /* [4249] */
    (xdc_Char)0x65,  /* [4250] */
    (xdc_Char)0x45,  /* [4251] */
    (xdc_Char)0x78,  /* [4252] */
    (xdc_Char)0x63,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x70,  /* [4255] */
    (xdc_Char)0x74,  /* [4256] */
    (xdc_Char)0x69,  /* [4257] */
    (xdc_Char)0x6f,  /* [4258] */
    (xdc_Char)0x6e,  /* [4259] */
    (xdc_Char)0x20,  /* [4260] */
    (xdc_Char)0x3d,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x74,  /* [4263] */
    (xdc_Char)0x72,  /* [4264] */
    (xdc_Char)0x75,  /* [4265] */
    (xdc_Char)0x65,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x6f,  /* [4268] */
    (xdc_Char)0x72,  /* [4269] */
    (xdc_Char)0x2c,  /* [4270] */
    (xdc_Char)0xa,  /* [4271] */
    (xdc_Char)0x65,  /* [4272] */
    (xdc_Char)0x78,  /* [4273] */
    (xdc_Char)0x61,  /* [4274] */
    (xdc_Char)0x6d,  /* [4275] */
    (xdc_Char)0x69,  /* [4276] */
    (xdc_Char)0x6e,  /* [4277] */
    (xdc_Char)0x65,  /* [4278] */
    (xdc_Char)0x20,  /* [4279] */
    (xdc_Char)0x74,  /* [4280] */
    (xdc_Char)0x68,  /* [4281] */
    (xdc_Char)0x65,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x45,  /* [4284] */
    (xdc_Char)0x78,  /* [4285] */
    (xdc_Char)0x63,  /* [4286] */
    (xdc_Char)0x65,  /* [4287] */
    (xdc_Char)0x70,  /* [4288] */
    (xdc_Char)0x74,  /* [4289] */
    (xdc_Char)0x69,  /* [4290] */
    (xdc_Char)0x6f,  /* [4291] */
    (xdc_Char)0x6e,  /* [4292] */
    (xdc_Char)0x20,  /* [4293] */
    (xdc_Char)0x76,  /* [4294] */
    (xdc_Char)0x69,  /* [4295] */
    (xdc_Char)0x65,  /* [4296] */
    (xdc_Char)0x77,  /* [4297] */
    (xdc_Char)0x20,  /* [4298] */
    (xdc_Char)0x66,  /* [4299] */
    (xdc_Char)0x6f,  /* [4300] */
    (xdc_Char)0x72,  /* [4301] */
    (xdc_Char)0x20,  /* [4302] */
    (xdc_Char)0x74,  /* [4303] */
    (xdc_Char)0x68,  /* [4304] */
    (xdc_Char)0x65,  /* [4305] */
    (xdc_Char)0x20,  /* [4306] */
    (xdc_Char)0x74,  /* [4307] */
    (xdc_Char)0x69,  /* [4308] */
    (xdc_Char)0x2e,  /* [4309] */
    (xdc_Char)0x73,  /* [4310] */
    (xdc_Char)0x79,  /* [4311] */
    (xdc_Char)0x73,  /* [4312] */
    (xdc_Char)0x62,  /* [4313] */
    (xdc_Char)0x69,  /* [4314] */
    (xdc_Char)0x6f,  /* [4315] */
    (xdc_Char)0x73,  /* [4316] */
    (xdc_Char)0x2e,  /* [4317] */
    (xdc_Char)0x66,  /* [4318] */
    (xdc_Char)0x61,  /* [4319] */
    (xdc_Char)0x6d,  /* [4320] */
    (xdc_Char)0x69,  /* [4321] */
    (xdc_Char)0x6c,  /* [4322] */
    (xdc_Char)0x79,  /* [4323] */
    (xdc_Char)0x2e,  /* [4324] */
    (xdc_Char)0x61,  /* [4325] */
    (xdc_Char)0x72,  /* [4326] */
    (xdc_Char)0x6d,  /* [4327] */
    (xdc_Char)0x2e,  /* [4328] */
    (xdc_Char)0x6d,  /* [4329] */
    (xdc_Char)0x33,  /* [4330] */
    (xdc_Char)0x2e,  /* [4331] */
    (xdc_Char)0x48,  /* [4332] */
    (xdc_Char)0x77,  /* [4333] */
    (xdc_Char)0x69,  /* [4334] */
    (xdc_Char)0x20,  /* [4335] */
    (xdc_Char)0x6d,  /* [4336] */
    (xdc_Char)0x6f,  /* [4337] */
    (xdc_Char)0x64,  /* [4338] */
    (xdc_Char)0x75,  /* [4339] */
    (xdc_Char)0x6c,  /* [4340] */
    (xdc_Char)0x65,  /* [4341] */
    (xdc_Char)0x20,  /* [4342] */
    (xdc_Char)0x75,  /* [4343] */
    (xdc_Char)0x73,  /* [4344] */
    (xdc_Char)0x69,  /* [4345] */
    (xdc_Char)0x6e,  /* [4346] */
    (xdc_Char)0x67,  /* [4347] */
    (xdc_Char)0x20,  /* [4348] */
    (xdc_Char)0x52,  /* [4349] */
    (xdc_Char)0x4f,  /* [4350] */
    (xdc_Char)0x56,  /* [4351] */
    (xdc_Char)0x2e,  /* [4352] */
    (xdc_Char)0x0,  /* [4353] */
    (xdc_Char)0x45,  /* [4354] */
    (xdc_Char)0x5f,  /* [4355] */
    (xdc_Char)0x6e,  /* [4356] */
    (xdc_Char)0x6f,  /* [4357] */
    (xdc_Char)0x49,  /* [4358] */
    (xdc_Char)0x73,  /* [4359] */
    (xdc_Char)0x72,  /* [4360] */
    (xdc_Char)0x3a,  /* [4361] */
    (xdc_Char)0x20,  /* [4362] */
    (xdc_Char)0x69,  /* [4363] */
    (xdc_Char)0x64,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x3d,  /* [4366] */
    (xdc_Char)0x20,  /* [4367] */
    (xdc_Char)0x25,  /* [4368] */
    (xdc_Char)0x64,  /* [4369] */
    (xdc_Char)0x2c,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x70,  /* [4372] */
    (xdc_Char)0x63,  /* [4373] */
    (xdc_Char)0x20,  /* [4374] */
    (xdc_Char)0x3d,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x25,  /* [4377] */
    (xdc_Char)0x30,  /* [4378] */
    (xdc_Char)0x38,  /* [4379] */
    (xdc_Char)0x78,  /* [4380] */
    (xdc_Char)0x0,  /* [4381] */
    (xdc_Char)0x45,  /* [4382] */
    (xdc_Char)0x5f,  /* [4383] */
    (xdc_Char)0x4e,  /* [4384] */
    (xdc_Char)0x4d,  /* [4385] */
    (xdc_Char)0x49,  /* [4386] */
    (xdc_Char)0x3a,  /* [4387] */
    (xdc_Char)0x20,  /* [4388] */
    (xdc_Char)0x25,  /* [4389] */
    (xdc_Char)0x73,  /* [4390] */
    (xdc_Char)0x0,  /* [4391] */
    (xdc_Char)0x45,  /* [4392] */
    (xdc_Char)0x5f,  /* [4393] */
    (xdc_Char)0x68,  /* [4394] */
    (xdc_Char)0x61,  /* [4395] */
    (xdc_Char)0x72,  /* [4396] */
    (xdc_Char)0x64,  /* [4397] */
    (xdc_Char)0x46,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x75,  /* [4400] */
    (xdc_Char)0x6c,  /* [4401] */
    (xdc_Char)0x74,  /* [4402] */
    (xdc_Char)0x3a,  /* [4403] */
    (xdc_Char)0x20,  /* [4404] */
    (xdc_Char)0x25,  /* [4405] */
    (xdc_Char)0x73,  /* [4406] */
    (xdc_Char)0x0,  /* [4407] */
    (xdc_Char)0x45,  /* [4408] */
    (xdc_Char)0x5f,  /* [4409] */
    (xdc_Char)0x6d,  /* [4410] */
    (xdc_Char)0x65,  /* [4411] */
    (xdc_Char)0x6d,  /* [4412] */
    (xdc_Char)0x46,  /* [4413] */
    (xdc_Char)0x61,  /* [4414] */
    (xdc_Char)0x75,  /* [4415] */
    (xdc_Char)0x6c,  /* [4416] */
    (xdc_Char)0x74,  /* [4417] */
    (xdc_Char)0x3a,  /* [4418] */
    (xdc_Char)0x20,  /* [4419] */
    (xdc_Char)0x25,  /* [4420] */
    (xdc_Char)0x73,  /* [4421] */
    (xdc_Char)0x2c,  /* [4422] */
    (xdc_Char)0x20,  /* [4423] */
    (xdc_Char)0x61,  /* [4424] */
    (xdc_Char)0x64,  /* [4425] */
    (xdc_Char)0x64,  /* [4426] */
    (xdc_Char)0x72,  /* [4427] */
    (xdc_Char)0x65,  /* [4428] */
    (xdc_Char)0x73,  /* [4429] */
    (xdc_Char)0x73,  /* [4430] */
    (xdc_Char)0x3a,  /* [4431] */
    (xdc_Char)0x20,  /* [4432] */
    (xdc_Char)0x25,  /* [4433] */
    (xdc_Char)0x30,  /* [4434] */
    (xdc_Char)0x38,  /* [4435] */
    (xdc_Char)0x78,  /* [4436] */
    (xdc_Char)0x0,  /* [4437] */
    (xdc_Char)0x45,  /* [4438] */
    (xdc_Char)0x5f,  /* [4439] */
    (xdc_Char)0x62,  /* [4440] */
    (xdc_Char)0x75,  /* [4441] */
    (xdc_Char)0x73,  /* [4442] */
    (xdc_Char)0x46,  /* [4443] */
    (xdc_Char)0x61,  /* [4444] */
    (xdc_Char)0x75,  /* [4445] */
    (xdc_Char)0x6c,  /* [4446] */
    (xdc_Char)0x74,  /* [4447] */
    (xdc_Char)0x3a,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x25,  /* [4450] */
    (xdc_Char)0x73,  /* [4451] */
    (xdc_Char)0x2c,  /* [4452] */
    (xdc_Char)0x20,  /* [4453] */
    (xdc_Char)0x61,  /* [4454] */
    (xdc_Char)0x64,  /* [4455] */
    (xdc_Char)0x64,  /* [4456] */
    (xdc_Char)0x72,  /* [4457] */
    (xdc_Char)0x65,  /* [4458] */
    (xdc_Char)0x73,  /* [4459] */
    (xdc_Char)0x73,  /* [4460] */
    (xdc_Char)0x3a,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x25,  /* [4463] */
    (xdc_Char)0x30,  /* [4464] */
    (xdc_Char)0x38,  /* [4465] */
    (xdc_Char)0x78,  /* [4466] */
    (xdc_Char)0x0,  /* [4467] */
    (xdc_Char)0x45,  /* [4468] */
    (xdc_Char)0x5f,  /* [4469] */
    (xdc_Char)0x75,  /* [4470] */
    (xdc_Char)0x73,  /* [4471] */
    (xdc_Char)0x61,  /* [4472] */
    (xdc_Char)0x67,  /* [4473] */
    (xdc_Char)0x65,  /* [4474] */
    (xdc_Char)0x46,  /* [4475] */
    (xdc_Char)0x61,  /* [4476] */
    (xdc_Char)0x75,  /* [4477] */
    (xdc_Char)0x6c,  /* [4478] */
    (xdc_Char)0x74,  /* [4479] */
    (xdc_Char)0x3a,  /* [4480] */
    (xdc_Char)0x20,  /* [4481] */
    (xdc_Char)0x25,  /* [4482] */
    (xdc_Char)0x73,  /* [4483] */
    (xdc_Char)0x0,  /* [4484] */
    (xdc_Char)0x45,  /* [4485] */
    (xdc_Char)0x5f,  /* [4486] */
    (xdc_Char)0x73,  /* [4487] */
    (xdc_Char)0x76,  /* [4488] */
    (xdc_Char)0x43,  /* [4489] */
    (xdc_Char)0x61,  /* [4490] */
    (xdc_Char)0x6c,  /* [4491] */
    (xdc_Char)0x6c,  /* [4492] */
    (xdc_Char)0x3a,  /* [4493] */
    (xdc_Char)0x20,  /* [4494] */
    (xdc_Char)0x73,  /* [4495] */
    (xdc_Char)0x76,  /* [4496] */
    (xdc_Char)0x4e,  /* [4497] */
    (xdc_Char)0x75,  /* [4498] */
    (xdc_Char)0x6d,  /* [4499] */
    (xdc_Char)0x20,  /* [4500] */
    (xdc_Char)0x3d,  /* [4501] */
    (xdc_Char)0x20,  /* [4502] */
    (xdc_Char)0x25,  /* [4503] */
    (xdc_Char)0x64,  /* [4504] */
    (xdc_Char)0x0,  /* [4505] */
    (xdc_Char)0x45,  /* [4506] */
    (xdc_Char)0x5f,  /* [4507] */
    (xdc_Char)0x64,  /* [4508] */
    (xdc_Char)0x65,  /* [4509] */
    (xdc_Char)0x62,  /* [4510] */
    (xdc_Char)0x75,  /* [4511] */
    (xdc_Char)0x67,  /* [4512] */
    (xdc_Char)0x4d,  /* [4513] */
    (xdc_Char)0x6f,  /* [4514] */
    (xdc_Char)0x6e,  /* [4515] */
    (xdc_Char)0x3a,  /* [4516] */
    (xdc_Char)0x20,  /* [4517] */
    (xdc_Char)0x25,  /* [4518] */
    (xdc_Char)0x73,  /* [4519] */
    (xdc_Char)0x0,  /* [4520] */
    (xdc_Char)0x45,  /* [4521] */
    (xdc_Char)0x5f,  /* [4522] */
    (xdc_Char)0x72,  /* [4523] */
    (xdc_Char)0x65,  /* [4524] */
    (xdc_Char)0x73,  /* [4525] */
    (xdc_Char)0x65,  /* [4526] */
    (xdc_Char)0x72,  /* [4527] */
    (xdc_Char)0x76,  /* [4528] */
    (xdc_Char)0x65,  /* [4529] */
    (xdc_Char)0x64,  /* [4530] */
    (xdc_Char)0x3a,  /* [4531] */
    (xdc_Char)0x20,  /* [4532] */
    (xdc_Char)0x25,  /* [4533] */
    (xdc_Char)0x73,  /* [4534] */
    (xdc_Char)0x20,  /* [4535] */
    (xdc_Char)0x25,  /* [4536] */
    (xdc_Char)0x64,  /* [4537] */
    (xdc_Char)0x0,  /* [4538] */
    (xdc_Char)0x45,  /* [4539] */
    (xdc_Char)0x5f,  /* [4540] */
    (xdc_Char)0x69,  /* [4541] */
    (xdc_Char)0x6e,  /* [4542] */
    (xdc_Char)0x76,  /* [4543] */
    (xdc_Char)0x61,  /* [4544] */
    (xdc_Char)0x6c,  /* [4545] */
    (xdc_Char)0x69,  /* [4546] */
    (xdc_Char)0x64,  /* [4547] */
    (xdc_Char)0x54,  /* [4548] */
    (xdc_Char)0x69,  /* [4549] */
    (xdc_Char)0x6d,  /* [4550] */
    (xdc_Char)0x65,  /* [4551] */
    (xdc_Char)0x72,  /* [4552] */
    (xdc_Char)0x3a,  /* [4553] */
    (xdc_Char)0x20,  /* [4554] */
    (xdc_Char)0x49,  /* [4555] */
    (xdc_Char)0x6e,  /* [4556] */
    (xdc_Char)0x76,  /* [4557] */
    (xdc_Char)0x61,  /* [4558] */
    (xdc_Char)0x6c,  /* [4559] */
    (xdc_Char)0x69,  /* [4560] */
    (xdc_Char)0x64,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x54,  /* [4563] */
    (xdc_Char)0x69,  /* [4564] */
    (xdc_Char)0x6d,  /* [4565] */
    (xdc_Char)0x65,  /* [4566] */
    (xdc_Char)0x72,  /* [4567] */
    (xdc_Char)0x20,  /* [4568] */
    (xdc_Char)0x49,  /* [4569] */
    (xdc_Char)0x64,  /* [4570] */
    (xdc_Char)0x20,  /* [4571] */
    (xdc_Char)0x25,  /* [4572] */
    (xdc_Char)0x64,  /* [4573] */
    (xdc_Char)0x0,  /* [4574] */
    (xdc_Char)0x45,  /* [4575] */
    (xdc_Char)0x5f,  /* [4576] */
    (xdc_Char)0x6e,  /* [4577] */
    (xdc_Char)0x6f,  /* [4578] */
    (xdc_Char)0x74,  /* [4579] */
    (xdc_Char)0x41,  /* [4580] */
    (xdc_Char)0x76,  /* [4581] */
    (xdc_Char)0x61,  /* [4582] */
    (xdc_Char)0x69,  /* [4583] */
    (xdc_Char)0x6c,  /* [4584] */
    (xdc_Char)0x61,  /* [4585] */
    (xdc_Char)0x62,  /* [4586] */
    (xdc_Char)0x6c,  /* [4587] */
    (xdc_Char)0x65,  /* [4588] */
    (xdc_Char)0x3a,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x54,  /* [4591] */
    (xdc_Char)0x69,  /* [4592] */
    (xdc_Char)0x6d,  /* [4593] */
    (xdc_Char)0x65,  /* [4594] */
    (xdc_Char)0x72,  /* [4595] */
    (xdc_Char)0x20,  /* [4596] */
    (xdc_Char)0x6e,  /* [4597] */
    (xdc_Char)0x6f,  /* [4598] */
    (xdc_Char)0x74,  /* [4599] */
    (xdc_Char)0x20,  /* [4600] */
    (xdc_Char)0x61,  /* [4601] */
    (xdc_Char)0x76,  /* [4602] */
    (xdc_Char)0x61,  /* [4603] */
    (xdc_Char)0x69,  /* [4604] */
    (xdc_Char)0x6c,  /* [4605] */
    (xdc_Char)0x61,  /* [4606] */
    (xdc_Char)0x62,  /* [4607] */
    (xdc_Char)0x6c,  /* [4608] */
    (xdc_Char)0x65,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x25,  /* [4611] */
    (xdc_Char)0x64,  /* [4612] */
    (xdc_Char)0x0,  /* [4613] */
    (xdc_Char)0x45,  /* [4614] */
    (xdc_Char)0x5f,  /* [4615] */
    (xdc_Char)0x63,  /* [4616] */
    (xdc_Char)0x61,  /* [4617] */
    (xdc_Char)0x6e,  /* [4618] */
    (xdc_Char)0x6e,  /* [4619] */
    (xdc_Char)0x6f,  /* [4620] */
    (xdc_Char)0x74,  /* [4621] */
    (xdc_Char)0x53,  /* [4622] */
    (xdc_Char)0x75,  /* [4623] */
    (xdc_Char)0x70,  /* [4624] */
    (xdc_Char)0x70,  /* [4625] */
    (xdc_Char)0x6f,  /* [4626] */
    (xdc_Char)0x72,  /* [4627] */
    (xdc_Char)0x74,  /* [4628] */
    (xdc_Char)0x3a,  /* [4629] */
    (xdc_Char)0x20,  /* [4630] */
    (xdc_Char)0x54,  /* [4631] */
    (xdc_Char)0x69,  /* [4632] */
    (xdc_Char)0x6d,  /* [4633] */
    (xdc_Char)0x65,  /* [4634] */
    (xdc_Char)0x72,  /* [4635] */
    (xdc_Char)0x20,  /* [4636] */
    (xdc_Char)0x63,  /* [4637] */
    (xdc_Char)0x61,  /* [4638] */
    (xdc_Char)0x6e,  /* [4639] */
    (xdc_Char)0x6e,  /* [4640] */
    (xdc_Char)0x6f,  /* [4641] */
    (xdc_Char)0x74,  /* [4642] */
    (xdc_Char)0x20,  /* [4643] */
    (xdc_Char)0x73,  /* [4644] */
    (xdc_Char)0x75,  /* [4645] */
    (xdc_Char)0x70,  /* [4646] */
    (xdc_Char)0x70,  /* [4647] */
    (xdc_Char)0x6f,  /* [4648] */
    (xdc_Char)0x72,  /* [4649] */
    (xdc_Char)0x74,  /* [4650] */
    (xdc_Char)0x20,  /* [4651] */
    (xdc_Char)0x72,  /* [4652] */
    (xdc_Char)0x65,  /* [4653] */
    (xdc_Char)0x71,  /* [4654] */
    (xdc_Char)0x75,  /* [4655] */
    (xdc_Char)0x65,  /* [4656] */
    (xdc_Char)0x73,  /* [4657] */
    (xdc_Char)0x74,  /* [4658] */
    (xdc_Char)0x65,  /* [4659] */
    (xdc_Char)0x64,  /* [4660] */
    (xdc_Char)0x20,  /* [4661] */
    (xdc_Char)0x70,  /* [4662] */
    (xdc_Char)0x65,  /* [4663] */
    (xdc_Char)0x72,  /* [4664] */
    (xdc_Char)0x69,  /* [4665] */
    (xdc_Char)0x6f,  /* [4666] */
    (xdc_Char)0x64,  /* [4667] */
    (xdc_Char)0x20,  /* [4668] */
    (xdc_Char)0x25,  /* [4669] */
    (xdc_Char)0x64,  /* [4670] */
    (xdc_Char)0x0,  /* [4671] */
    (xdc_Char)0x45,  /* [4672] */
    (xdc_Char)0x5f,  /* [4673] */
    (xdc_Char)0x70,  /* [4674] */
    (xdc_Char)0x72,  /* [4675] */
    (xdc_Char)0x69,  /* [4676] */
    (xdc_Char)0x6f,  /* [4677] */
    (xdc_Char)0x72,  /* [4678] */
    (xdc_Char)0x69,  /* [4679] */
    (xdc_Char)0x74,  /* [4680] */
    (xdc_Char)0x79,  /* [4681] */
    (xdc_Char)0x3a,  /* [4682] */
    (xdc_Char)0x20,  /* [4683] */
    (xdc_Char)0x54,  /* [4684] */
    (xdc_Char)0x68,  /* [4685] */
    (xdc_Char)0x72,  /* [4686] */
    (xdc_Char)0x65,  /* [4687] */
    (xdc_Char)0x61,  /* [4688] */
    (xdc_Char)0x64,  /* [4689] */
    (xdc_Char)0x20,  /* [4690] */
    (xdc_Char)0x70,  /* [4691] */
    (xdc_Char)0x72,  /* [4692] */
    (xdc_Char)0x69,  /* [4693] */
    (xdc_Char)0x6f,  /* [4694] */
    (xdc_Char)0x72,  /* [4695] */
    (xdc_Char)0x69,  /* [4696] */
    (xdc_Char)0x74,  /* [4697] */
    (xdc_Char)0x79,  /* [4698] */
    (xdc_Char)0x20,  /* [4699] */
    (xdc_Char)0x69,  /* [4700] */
    (xdc_Char)0x73,  /* [4701] */
    (xdc_Char)0x20,  /* [4702] */
    (xdc_Char)0x69,  /* [4703] */
    (xdc_Char)0x6e,  /* [4704] */
    (xdc_Char)0x76,  /* [4705] */
    (xdc_Char)0x61,  /* [4706] */
    (xdc_Char)0x6c,  /* [4707] */
    (xdc_Char)0x69,  /* [4708] */
    (xdc_Char)0x64,  /* [4709] */
    (xdc_Char)0x20,  /* [4710] */
    (xdc_Char)0x25,  /* [4711] */
    (xdc_Char)0x64,  /* [4712] */
    (xdc_Char)0x0,  /* [4713] */
    (xdc_Char)0x72,  /* [4714] */
    (xdc_Char)0x65,  /* [4715] */
    (xdc_Char)0x71,  /* [4716] */
    (xdc_Char)0x75,  /* [4717] */
    (xdc_Char)0x65,  /* [4718] */
    (xdc_Char)0x73,  /* [4719] */
    (xdc_Char)0x74,  /* [4720] */
    (xdc_Char)0x65,  /* [4721] */
    (xdc_Char)0x64,  /* [4722] */
    (xdc_Char)0x20,  /* [4723] */
    (xdc_Char)0x73,  /* [4724] */
    (xdc_Char)0x69,  /* [4725] */
    (xdc_Char)0x7a,  /* [4726] */
    (xdc_Char)0x65,  /* [4727] */
    (xdc_Char)0x20,  /* [4728] */
    (xdc_Char)0x69,  /* [4729] */
    (xdc_Char)0x73,  /* [4730] */
    (xdc_Char)0x20,  /* [4731] */
    (xdc_Char)0x74,  /* [4732] */
    (xdc_Char)0x6f,  /* [4733] */
    (xdc_Char)0x6f,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x62,  /* [4736] */
    (xdc_Char)0x69,  /* [4737] */
    (xdc_Char)0x67,  /* [4738] */
    (xdc_Char)0x3a,  /* [4739] */
    (xdc_Char)0x20,  /* [4740] */
    (xdc_Char)0x68,  /* [4741] */
    (xdc_Char)0x61,  /* [4742] */
    (xdc_Char)0x6e,  /* [4743] */
    (xdc_Char)0x64,  /* [4744] */
    (xdc_Char)0x6c,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x3d,  /* [4747] */
    (xdc_Char)0x30,  /* [4748] */
    (xdc_Char)0x78,  /* [4749] */
    (xdc_Char)0x25,  /* [4750] */
    (xdc_Char)0x78,  /* [4751] */
    (xdc_Char)0x2c,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x73,  /* [4754] */
    (xdc_Char)0x69,  /* [4755] */
    (xdc_Char)0x7a,  /* [4756] */
    (xdc_Char)0x65,  /* [4757] */
    (xdc_Char)0x3d,  /* [4758] */
    (xdc_Char)0x25,  /* [4759] */
    (xdc_Char)0x75,  /* [4760] */
    (xdc_Char)0x0,  /* [4761] */
    (xdc_Char)0x6f,  /* [4762] */
    (xdc_Char)0x75,  /* [4763] */
    (xdc_Char)0x74,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x6f,  /* [4766] */
    (xdc_Char)0x66,  /* [4767] */
    (xdc_Char)0x20,  /* [4768] */
    (xdc_Char)0x6d,  /* [4769] */
    (xdc_Char)0x65,  /* [4770] */
    (xdc_Char)0x6d,  /* [4771] */
    (xdc_Char)0x6f,  /* [4772] */
    (xdc_Char)0x72,  /* [4773] */
    (xdc_Char)0x79,  /* [4774] */
    (xdc_Char)0x3a,  /* [4775] */
    (xdc_Char)0x20,  /* [4776] */
    (xdc_Char)0x68,  /* [4777] */
    (xdc_Char)0x61,  /* [4778] */
    (xdc_Char)0x6e,  /* [4779] */
    (xdc_Char)0x64,  /* [4780] */
    (xdc_Char)0x6c,  /* [4781] */
    (xdc_Char)0x65,  /* [4782] */
    (xdc_Char)0x3d,  /* [4783] */
    (xdc_Char)0x30,  /* [4784] */
    (xdc_Char)0x78,  /* [4785] */
    (xdc_Char)0x25,  /* [4786] */
    (xdc_Char)0x78,  /* [4787] */
    (xdc_Char)0x2c,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x73,  /* [4790] */
    (xdc_Char)0x69,  /* [4791] */
    (xdc_Char)0x7a,  /* [4792] */
    (xdc_Char)0x65,  /* [4793] */
    (xdc_Char)0x3d,  /* [4794] */
    (xdc_Char)0x25,  /* [4795] */
    (xdc_Char)0x75,  /* [4796] */
    (xdc_Char)0x0,  /* [4797] */
    (xdc_Char)0x3c,  /* [4798] */
    (xdc_Char)0x2d,  /* [4799] */
    (xdc_Char)0x2d,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x63,  /* [4802] */
    (xdc_Char)0x6f,  /* [4803] */
    (xdc_Char)0x6e,  /* [4804] */
    (xdc_Char)0x73,  /* [4805] */
    (xdc_Char)0x74,  /* [4806] */
    (xdc_Char)0x72,  /* [4807] */
    (xdc_Char)0x75,  /* [4808] */
    (xdc_Char)0x63,  /* [4809] */
    (xdc_Char)0x74,  /* [4810] */
    (xdc_Char)0x3a,  /* [4811] */
    (xdc_Char)0x20,  /* [4812] */
    (xdc_Char)0x25,  /* [4813] */
    (xdc_Char)0x70,  /* [4814] */
    (xdc_Char)0x28,  /* [4815] */
    (xdc_Char)0x27,  /* [4816] */
    (xdc_Char)0x25,  /* [4817] */
    (xdc_Char)0x73,  /* [4818] */
    (xdc_Char)0x27,  /* [4819] */
    (xdc_Char)0x29,  /* [4820] */
    (xdc_Char)0x0,  /* [4821] */
    (xdc_Char)0x3c,  /* [4822] */
    (xdc_Char)0x2d,  /* [4823] */
    (xdc_Char)0x2d,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x63,  /* [4826] */
    (xdc_Char)0x72,  /* [4827] */
    (xdc_Char)0x65,  /* [4828] */
    (xdc_Char)0x61,  /* [4829] */
    (xdc_Char)0x74,  /* [4830] */
    (xdc_Char)0x65,  /* [4831] */
    (xdc_Char)0x3a,  /* [4832] */
    (xdc_Char)0x20,  /* [4833] */
    (xdc_Char)0x25,  /* [4834] */
    (xdc_Char)0x70,  /* [4835] */
    (xdc_Char)0x28,  /* [4836] */
    (xdc_Char)0x27,  /* [4837] */
    (xdc_Char)0x25,  /* [4838] */
    (xdc_Char)0x73,  /* [4839] */
    (xdc_Char)0x27,  /* [4840] */
    (xdc_Char)0x29,  /* [4841] */
    (xdc_Char)0x0,  /* [4842] */
    (xdc_Char)0x2d,  /* [4843] */
    (xdc_Char)0x2d,  /* [4844] */
    (xdc_Char)0x3e,  /* [4845] */
    (xdc_Char)0x20,  /* [4846] */
    (xdc_Char)0x64,  /* [4847] */
    (xdc_Char)0x65,  /* [4848] */
    (xdc_Char)0x73,  /* [4849] */
    (xdc_Char)0x74,  /* [4850] */
    (xdc_Char)0x72,  /* [4851] */
    (xdc_Char)0x75,  /* [4852] */
    (xdc_Char)0x63,  /* [4853] */
    (xdc_Char)0x74,  /* [4854] */
    (xdc_Char)0x3a,  /* [4855] */
    (xdc_Char)0x20,  /* [4856] */
    (xdc_Char)0x28,  /* [4857] */
    (xdc_Char)0x25,  /* [4858] */
    (xdc_Char)0x70,  /* [4859] */
    (xdc_Char)0x29,  /* [4860] */
    (xdc_Char)0x0,  /* [4861] */
    (xdc_Char)0x2d,  /* [4862] */
    (xdc_Char)0x2d,  /* [4863] */
    (xdc_Char)0x3e,  /* [4864] */
    (xdc_Char)0x20,  /* [4865] */
    (xdc_Char)0x64,  /* [4866] */
    (xdc_Char)0x65,  /* [4867] */
    (xdc_Char)0x6c,  /* [4868] */
    (xdc_Char)0x65,  /* [4869] */
    (xdc_Char)0x74,  /* [4870] */
    (xdc_Char)0x65,  /* [4871] */
    (xdc_Char)0x3a,  /* [4872] */
    (xdc_Char)0x20,  /* [4873] */
    (xdc_Char)0x28,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x70,  /* [4876] */
    (xdc_Char)0x29,  /* [4877] */
    (xdc_Char)0x0,  /* [4878] */
    (xdc_Char)0x45,  /* [4879] */
    (xdc_Char)0x52,  /* [4880] */
    (xdc_Char)0x52,  /* [4881] */
    (xdc_Char)0x4f,  /* [4882] */
    (xdc_Char)0x52,  /* [4883] */
    (xdc_Char)0x3a,  /* [4884] */
    (xdc_Char)0x20,  /* [4885] */
    (xdc_Char)0x25,  /* [4886] */
    (xdc_Char)0x24,  /* [4887] */
    (xdc_Char)0x46,  /* [4888] */
    (xdc_Char)0x25,  /* [4889] */
    (xdc_Char)0x24,  /* [4890] */
    (xdc_Char)0x53,  /* [4891] */
    (xdc_Char)0x0,  /* [4892] */
    (xdc_Char)0x57,  /* [4893] */
    (xdc_Char)0x41,  /* [4894] */
    (xdc_Char)0x52,  /* [4895] */
    (xdc_Char)0x4e,  /* [4896] */
    (xdc_Char)0x49,  /* [4897] */
    (xdc_Char)0x4e,  /* [4898] */
    (xdc_Char)0x47,  /* [4899] */
    (xdc_Char)0x3a,  /* [4900] */
    (xdc_Char)0x20,  /* [4901] */
    (xdc_Char)0x25,  /* [4902] */
    (xdc_Char)0x24,  /* [4903] */
    (xdc_Char)0x46,  /* [4904] */
    (xdc_Char)0x25,  /* [4905] */
    (xdc_Char)0x24,  /* [4906] */
    (xdc_Char)0x53,  /* [4907] */
    (xdc_Char)0x0,  /* [4908] */
    (xdc_Char)0x25,  /* [4909] */
    (xdc_Char)0x24,  /* [4910] */
    (xdc_Char)0x46,  /* [4911] */
    (xdc_Char)0x25,  /* [4912] */
    (xdc_Char)0x24,  /* [4913] */
    (xdc_Char)0x53,  /* [4914] */
    (xdc_Char)0x0,  /* [4915] */
    (xdc_Char)0x53,  /* [4916] */
    (xdc_Char)0x74,  /* [4917] */
    (xdc_Char)0x61,  /* [4918] */
    (xdc_Char)0x72,  /* [4919] */
    (xdc_Char)0x74,  /* [4920] */
    (xdc_Char)0x3a,  /* [4921] */
    (xdc_Char)0x20,  /* [4922] */
    (xdc_Char)0x25,  /* [4923] */
    (xdc_Char)0x24,  /* [4924] */
    (xdc_Char)0x53,  /* [4925] */
    (xdc_Char)0x0,  /* [4926] */
    (xdc_Char)0x53,  /* [4927] */
    (xdc_Char)0x74,  /* [4928] */
    (xdc_Char)0x6f,  /* [4929] */
    (xdc_Char)0x70,  /* [4930] */
    (xdc_Char)0x3a,  /* [4931] */
    (xdc_Char)0x20,  /* [4932] */
    (xdc_Char)0x25,  /* [4933] */
    (xdc_Char)0x24,  /* [4934] */
    (xdc_Char)0x53,  /* [4935] */
    (xdc_Char)0x0,  /* [4936] */
    (xdc_Char)0x53,  /* [4937] */
    (xdc_Char)0x74,  /* [4938] */
    (xdc_Char)0x61,  /* [4939] */
    (xdc_Char)0x72,  /* [4940] */
    (xdc_Char)0x74,  /* [4941] */
    (xdc_Char)0x49,  /* [4942] */
    (xdc_Char)0x6e,  /* [4943] */
    (xdc_Char)0x73,  /* [4944] */
    (xdc_Char)0x74,  /* [4945] */
    (xdc_Char)0x61,  /* [4946] */
    (xdc_Char)0x6e,  /* [4947] */
    (xdc_Char)0x63,  /* [4948] */
    (xdc_Char)0x65,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x25,  /* [4952] */
    (xdc_Char)0x24,  /* [4953] */
    (xdc_Char)0x53,  /* [4954] */
    (xdc_Char)0x0,  /* [4955] */
    (xdc_Char)0x53,  /* [4956] */
    (xdc_Char)0x74,  /* [4957] */
    (xdc_Char)0x6f,  /* [4958] */
    (xdc_Char)0x70,  /* [4959] */
    (xdc_Char)0x49,  /* [4960] */
    (xdc_Char)0x6e,  /* [4961] */
    (xdc_Char)0x73,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x61,  /* [4964] */
    (xdc_Char)0x6e,  /* [4965] */
    (xdc_Char)0x63,  /* [4966] */
    (xdc_Char)0x65,  /* [4967] */
    (xdc_Char)0x3a,  /* [4968] */
    (xdc_Char)0x20,  /* [4969] */
    (xdc_Char)0x25,  /* [4970] */
    (xdc_Char)0x24,  /* [4971] */
    (xdc_Char)0x53,  /* [4972] */
    (xdc_Char)0x0,  /* [4973] */
    (xdc_Char)0x4c,  /* [4974] */
    (xdc_Char)0x57,  /* [4975] */
    (xdc_Char)0x5f,  /* [4976] */
    (xdc_Char)0x64,  /* [4977] */
    (xdc_Char)0x65,  /* [4978] */
    (xdc_Char)0x6c,  /* [4979] */
    (xdc_Char)0x61,  /* [4980] */
    (xdc_Char)0x79,  /* [4981] */
    (xdc_Char)0x65,  /* [4982] */
    (xdc_Char)0x64,  /* [4983] */
    (xdc_Char)0x3a,  /* [4984] */
    (xdc_Char)0x20,  /* [4985] */
    (xdc_Char)0x64,  /* [4986] */
    (xdc_Char)0x65,  /* [4987] */
    (xdc_Char)0x6c,  /* [4988] */
    (xdc_Char)0x61,  /* [4989] */
    (xdc_Char)0x79,  /* [4990] */
    (xdc_Char)0x3a,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x25,  /* [4993] */
    (xdc_Char)0x64,  /* [4994] */
    (xdc_Char)0x0,  /* [4995] */
    (xdc_Char)0x4c,  /* [4996] */
    (xdc_Char)0x4d,  /* [4997] */
    (xdc_Char)0x5f,  /* [4998] */
    (xdc_Char)0x74,  /* [4999] */
    (xdc_Char)0x69,  /* [5000] */
    (xdc_Char)0x63,  /* [5001] */
    (xdc_Char)0x6b,  /* [5002] */
    (xdc_Char)0x3a,  /* [5003] */
    (xdc_Char)0x20,  /* [5004] */
    (xdc_Char)0x74,  /* [5005] */
    (xdc_Char)0x69,  /* [5006] */
    (xdc_Char)0x63,  /* [5007] */
    (xdc_Char)0x6b,  /* [5008] */
    (xdc_Char)0x3a,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x25,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x4c,  /* [5014] */
    (xdc_Char)0x4d,  /* [5015] */
    (xdc_Char)0x5f,  /* [5016] */
    (xdc_Char)0x62,  /* [5017] */
    (xdc_Char)0x65,  /* [5018] */
    (xdc_Char)0x67,  /* [5019] */
    (xdc_Char)0x69,  /* [5020] */
    (xdc_Char)0x6e,  /* [5021] */
    (xdc_Char)0x3a,  /* [5022] */
    (xdc_Char)0x20,  /* [5023] */
    (xdc_Char)0x63,  /* [5024] */
    (xdc_Char)0x6c,  /* [5025] */
    (xdc_Char)0x6b,  /* [5026] */
    (xdc_Char)0x3a,  /* [5027] */
    (xdc_Char)0x20,  /* [5028] */
    (xdc_Char)0x30,  /* [5029] */
    (xdc_Char)0x78,  /* [5030] */
    (xdc_Char)0x25,  /* [5031] */
    (xdc_Char)0x78,  /* [5032] */
    (xdc_Char)0x2c,  /* [5033] */
    (xdc_Char)0x20,  /* [5034] */
    (xdc_Char)0x66,  /* [5035] */
    (xdc_Char)0x75,  /* [5036] */
    (xdc_Char)0x6e,  /* [5037] */
    (xdc_Char)0x63,  /* [5038] */
    (xdc_Char)0x3a,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x30,  /* [5041] */
    (xdc_Char)0x78,  /* [5042] */
    (xdc_Char)0x25,  /* [5043] */
    (xdc_Char)0x78,  /* [5044] */
    (xdc_Char)0x0,  /* [5045] */
    (xdc_Char)0x4c,  /* [5046] */
    (xdc_Char)0x4d,  /* [5047] */
    (xdc_Char)0x5f,  /* [5048] */
    (xdc_Char)0x70,  /* [5049] */
    (xdc_Char)0x6f,  /* [5050] */
    (xdc_Char)0x73,  /* [5051] */
    (xdc_Char)0x74,  /* [5052] */
    (xdc_Char)0x3a,  /* [5053] */
    (xdc_Char)0x20,  /* [5054] */
    (xdc_Char)0x65,  /* [5055] */
    (xdc_Char)0x76,  /* [5056] */
    (xdc_Char)0x65,  /* [5057] */
    (xdc_Char)0x6e,  /* [5058] */
    (xdc_Char)0x74,  /* [5059] */
    (xdc_Char)0x3a,  /* [5060] */
    (xdc_Char)0x20,  /* [5061] */
    (xdc_Char)0x30,  /* [5062] */
    (xdc_Char)0x78,  /* [5063] */
    (xdc_Char)0x25,  /* [5064] */
    (xdc_Char)0x78,  /* [5065] */
    (xdc_Char)0x2c,  /* [5066] */
    (xdc_Char)0x20,  /* [5067] */
    (xdc_Char)0x63,  /* [5068] */
    (xdc_Char)0x75,  /* [5069] */
    (xdc_Char)0x72,  /* [5070] */
    (xdc_Char)0x72,  /* [5071] */
    (xdc_Char)0x45,  /* [5072] */
    (xdc_Char)0x76,  /* [5073] */
    (xdc_Char)0x65,  /* [5074] */
    (xdc_Char)0x6e,  /* [5075] */
    (xdc_Char)0x74,  /* [5076] */
    (xdc_Char)0x73,  /* [5077] */
    (xdc_Char)0x3a,  /* [5078] */
    (xdc_Char)0x20,  /* [5079] */
    (xdc_Char)0x30,  /* [5080] */
    (xdc_Char)0x78,  /* [5081] */
    (xdc_Char)0x25,  /* [5082] */
    (xdc_Char)0x78,  /* [5083] */
    (xdc_Char)0x2c,  /* [5084] */
    (xdc_Char)0x20,  /* [5085] */
    (xdc_Char)0x65,  /* [5086] */
    (xdc_Char)0x76,  /* [5087] */
    (xdc_Char)0x65,  /* [5088] */
    (xdc_Char)0x6e,  /* [5089] */
    (xdc_Char)0x74,  /* [5090] */
    (xdc_Char)0x49,  /* [5091] */
    (xdc_Char)0x64,  /* [5092] */
    (xdc_Char)0x3a,  /* [5093] */
    (xdc_Char)0x20,  /* [5094] */
    (xdc_Char)0x30,  /* [5095] */
    (xdc_Char)0x78,  /* [5096] */
    (xdc_Char)0x25,  /* [5097] */
    (xdc_Char)0x78,  /* [5098] */
    (xdc_Char)0x0,  /* [5099] */
    (xdc_Char)0x4c,  /* [5100] */
    (xdc_Char)0x4d,  /* [5101] */
    (xdc_Char)0x5f,  /* [5102] */
    (xdc_Char)0x70,  /* [5103] */
    (xdc_Char)0x65,  /* [5104] */
    (xdc_Char)0x6e,  /* [5105] */
    (xdc_Char)0x64,  /* [5106] */
    (xdc_Char)0x3a,  /* [5107] */
    (xdc_Char)0x20,  /* [5108] */
    (xdc_Char)0x65,  /* [5109] */
    (xdc_Char)0x76,  /* [5110] */
    (xdc_Char)0x65,  /* [5111] */
    (xdc_Char)0x6e,  /* [5112] */
    (xdc_Char)0x74,  /* [5113] */
    (xdc_Char)0x3a,  /* [5114] */
    (xdc_Char)0x20,  /* [5115] */
    (xdc_Char)0x30,  /* [5116] */
    (xdc_Char)0x78,  /* [5117] */
    (xdc_Char)0x25,  /* [5118] */
    (xdc_Char)0x78,  /* [5119] */
    (xdc_Char)0x2c,  /* [5120] */
    (xdc_Char)0x20,  /* [5121] */
    (xdc_Char)0x63,  /* [5122] */
    (xdc_Char)0x75,  /* [5123] */
    (xdc_Char)0x72,  /* [5124] */
    (xdc_Char)0x72,  /* [5125] */
    (xdc_Char)0x45,  /* [5126] */
    (xdc_Char)0x76,  /* [5127] */
    (xdc_Char)0x65,  /* [5128] */
    (xdc_Char)0x6e,  /* [5129] */
    (xdc_Char)0x74,  /* [5130] */
    (xdc_Char)0x73,  /* [5131] */
    (xdc_Char)0x3a,  /* [5132] */
    (xdc_Char)0x20,  /* [5133] */
    (xdc_Char)0x30,  /* [5134] */
    (xdc_Char)0x78,  /* [5135] */
    (xdc_Char)0x25,  /* [5136] */
    (xdc_Char)0x78,  /* [5137] */
    (xdc_Char)0x2c,  /* [5138] */
    (xdc_Char)0x20,  /* [5139] */
    (xdc_Char)0x61,  /* [5140] */
    (xdc_Char)0x6e,  /* [5141] */
    (xdc_Char)0x64,  /* [5142] */
    (xdc_Char)0x4d,  /* [5143] */
    (xdc_Char)0x61,  /* [5144] */
    (xdc_Char)0x73,  /* [5145] */
    (xdc_Char)0x6b,  /* [5146] */
    (xdc_Char)0x3a,  /* [5147] */
    (xdc_Char)0x20,  /* [5148] */
    (xdc_Char)0x30,  /* [5149] */
    (xdc_Char)0x78,  /* [5150] */
    (xdc_Char)0x25,  /* [5151] */
    (xdc_Char)0x78,  /* [5152] */
    (xdc_Char)0x2c,  /* [5153] */
    (xdc_Char)0x20,  /* [5154] */
    (xdc_Char)0x6f,  /* [5155] */
    (xdc_Char)0x72,  /* [5156] */
    (xdc_Char)0x4d,  /* [5157] */
    (xdc_Char)0x61,  /* [5158] */
    (xdc_Char)0x73,  /* [5159] */
    (xdc_Char)0x6b,  /* [5160] */
    (xdc_Char)0x3a,  /* [5161] */
    (xdc_Char)0x20,  /* [5162] */
    (xdc_Char)0x30,  /* [5163] */
    (xdc_Char)0x78,  /* [5164] */
    (xdc_Char)0x25,  /* [5165] */
    (xdc_Char)0x78,  /* [5166] */
    (xdc_Char)0x2c,  /* [5167] */
    (xdc_Char)0x20,  /* [5168] */
    (xdc_Char)0x74,  /* [5169] */
    (xdc_Char)0x69,  /* [5170] */
    (xdc_Char)0x6d,  /* [5171] */
    (xdc_Char)0x65,  /* [5172] */
    (xdc_Char)0x6f,  /* [5173] */
    (xdc_Char)0x75,  /* [5174] */
    (xdc_Char)0x74,  /* [5175] */
    (xdc_Char)0x3a,  /* [5176] */
    (xdc_Char)0x20,  /* [5177] */
    (xdc_Char)0x25,  /* [5178] */
    (xdc_Char)0x64,  /* [5179] */
    (xdc_Char)0x0,  /* [5180] */
    (xdc_Char)0x4c,  /* [5181] */
    (xdc_Char)0x4d,  /* [5182] */
    (xdc_Char)0x5f,  /* [5183] */
    (xdc_Char)0x70,  /* [5184] */
    (xdc_Char)0x6f,  /* [5185] */
    (xdc_Char)0x73,  /* [5186] */
    (xdc_Char)0x74,  /* [5187] */
    (xdc_Char)0x3a,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x73,  /* [5190] */
    (xdc_Char)0x65,  /* [5191] */
    (xdc_Char)0x6d,  /* [5192] */
    (xdc_Char)0x3a,  /* [5193] */
    (xdc_Char)0x20,  /* [5194] */
    (xdc_Char)0x30,  /* [5195] */
    (xdc_Char)0x78,  /* [5196] */
    (xdc_Char)0x25,  /* [5197] */
    (xdc_Char)0x78,  /* [5198] */
    (xdc_Char)0x2c,  /* [5199] */
    (xdc_Char)0x20,  /* [5200] */
    (xdc_Char)0x63,  /* [5201] */
    (xdc_Char)0x6f,  /* [5202] */
    (xdc_Char)0x75,  /* [5203] */
    (xdc_Char)0x6e,  /* [5204] */
    (xdc_Char)0x74,  /* [5205] */
    (xdc_Char)0x3a,  /* [5206] */
    (xdc_Char)0x20,  /* [5207] */
    (xdc_Char)0x25,  /* [5208] */
    (xdc_Char)0x64,  /* [5209] */
    (xdc_Char)0x0,  /* [5210] */
    (xdc_Char)0x4c,  /* [5211] */
    (xdc_Char)0x4d,  /* [5212] */
    (xdc_Char)0x5f,  /* [5213] */
    (xdc_Char)0x70,  /* [5214] */
    (xdc_Char)0x65,  /* [5215] */
    (xdc_Char)0x6e,  /* [5216] */
    (xdc_Char)0x64,  /* [5217] */
    (xdc_Char)0x3a,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x73,  /* [5220] */
    (xdc_Char)0x65,  /* [5221] */
    (xdc_Char)0x6d,  /* [5222] */
    (xdc_Char)0x3a,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x30,  /* [5225] */
    (xdc_Char)0x78,  /* [5226] */
    (xdc_Char)0x25,  /* [5227] */
    (xdc_Char)0x78,  /* [5228] */
    (xdc_Char)0x2c,  /* [5229] */
    (xdc_Char)0x20,  /* [5230] */
    (xdc_Char)0x63,  /* [5231] */
    (xdc_Char)0x6f,  /* [5232] */
    (xdc_Char)0x75,  /* [5233] */
    (xdc_Char)0x6e,  /* [5234] */
    (xdc_Char)0x74,  /* [5235] */
    (xdc_Char)0x3a,  /* [5236] */
    (xdc_Char)0x20,  /* [5237] */
    (xdc_Char)0x25,  /* [5238] */
    (xdc_Char)0x64,  /* [5239] */
    (xdc_Char)0x2c,  /* [5240] */
    (xdc_Char)0x20,  /* [5241] */
    (xdc_Char)0x74,  /* [5242] */
    (xdc_Char)0x69,  /* [5243] */
    (xdc_Char)0x6d,  /* [5244] */
    (xdc_Char)0x65,  /* [5245] */
    (xdc_Char)0x6f,  /* [5246] */
    (xdc_Char)0x75,  /* [5247] */
    (xdc_Char)0x74,  /* [5248] */
    (xdc_Char)0x3a,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x25,  /* [5251] */
    (xdc_Char)0x64,  /* [5252] */
    (xdc_Char)0x0,  /* [5253] */
    (xdc_Char)0x4c,  /* [5254] */
    (xdc_Char)0x4d,  /* [5255] */
    (xdc_Char)0x5f,  /* [5256] */
    (xdc_Char)0x73,  /* [5257] */
    (xdc_Char)0x77,  /* [5258] */
    (xdc_Char)0x69,  /* [5259] */
    (xdc_Char)0x74,  /* [5260] */
    (xdc_Char)0x63,  /* [5261] */
    (xdc_Char)0x68,  /* [5262] */
    (xdc_Char)0x3a,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x6f,  /* [5265] */
    (xdc_Char)0x6c,  /* [5266] */
    (xdc_Char)0x64,  /* [5267] */
    (xdc_Char)0x74,  /* [5268] */
    (xdc_Char)0x73,  /* [5269] */
    (xdc_Char)0x6b,  /* [5270] */
    (xdc_Char)0x3a,  /* [5271] */
    (xdc_Char)0x20,  /* [5272] */
    (xdc_Char)0x30,  /* [5273] */
    (xdc_Char)0x78,  /* [5274] */
    (xdc_Char)0x25,  /* [5275] */
    (xdc_Char)0x78,  /* [5276] */
    (xdc_Char)0x2c,  /* [5277] */
    (xdc_Char)0x20,  /* [5278] */
    (xdc_Char)0x6f,  /* [5279] */
    (xdc_Char)0x6c,  /* [5280] */
    (xdc_Char)0x64,  /* [5281] */
    (xdc_Char)0x66,  /* [5282] */
    (xdc_Char)0x75,  /* [5283] */
    (xdc_Char)0x6e,  /* [5284] */
    (xdc_Char)0x63,  /* [5285] */
    (xdc_Char)0x3a,  /* [5286] */
    (xdc_Char)0x20,  /* [5287] */
    (xdc_Char)0x30,  /* [5288] */
    (xdc_Char)0x78,  /* [5289] */
    (xdc_Char)0x25,  /* [5290] */
    (xdc_Char)0x78,  /* [5291] */
    (xdc_Char)0x2c,  /* [5292] */
    (xdc_Char)0x20,  /* [5293] */
    (xdc_Char)0x6e,  /* [5294] */
    (xdc_Char)0x65,  /* [5295] */
    (xdc_Char)0x77,  /* [5296] */
    (xdc_Char)0x74,  /* [5297] */
    (xdc_Char)0x73,  /* [5298] */
    (xdc_Char)0x6b,  /* [5299] */
    (xdc_Char)0x3a,  /* [5300] */
    (xdc_Char)0x20,  /* [5301] */
    (xdc_Char)0x30,  /* [5302] */
    (xdc_Char)0x78,  /* [5303] */
    (xdc_Char)0x25,  /* [5304] */
    (xdc_Char)0x78,  /* [5305] */
    (xdc_Char)0x2c,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x6e,  /* [5308] */
    (xdc_Char)0x65,  /* [5309] */
    (xdc_Char)0x77,  /* [5310] */
    (xdc_Char)0x66,  /* [5311] */
    (xdc_Char)0x75,  /* [5312] */
    (xdc_Char)0x6e,  /* [5313] */
    (xdc_Char)0x63,  /* [5314] */
    (xdc_Char)0x3a,  /* [5315] */
    (xdc_Char)0x20,  /* [5316] */
    (xdc_Char)0x30,  /* [5317] */
    (xdc_Char)0x78,  /* [5318] */
    (xdc_Char)0x25,  /* [5319] */
    (xdc_Char)0x78,  /* [5320] */
    (xdc_Char)0x0,  /* [5321] */
    (xdc_Char)0x4c,  /* [5322] */
    (xdc_Char)0x4d,  /* [5323] */
    (xdc_Char)0x5f,  /* [5324] */
    (xdc_Char)0x73,  /* [5325] */
    (xdc_Char)0x6c,  /* [5326] */
    (xdc_Char)0x65,  /* [5327] */
    (xdc_Char)0x65,  /* [5328] */
    (xdc_Char)0x70,  /* [5329] */
    (xdc_Char)0x3a,  /* [5330] */
    (xdc_Char)0x20,  /* [5331] */
    (xdc_Char)0x74,  /* [5332] */
    (xdc_Char)0x73,  /* [5333] */
    (xdc_Char)0x6b,  /* [5334] */
    (xdc_Char)0x3a,  /* [5335] */
    (xdc_Char)0x20,  /* [5336] */
    (xdc_Char)0x30,  /* [5337] */
    (xdc_Char)0x78,  /* [5338] */
    (xdc_Char)0x25,  /* [5339] */
    (xdc_Char)0x78,  /* [5340] */
    (xdc_Char)0x2c,  /* [5341] */
    (xdc_Char)0x20,  /* [5342] */
    (xdc_Char)0x66,  /* [5343] */
    (xdc_Char)0x75,  /* [5344] */
    (xdc_Char)0x6e,  /* [5345] */
    (xdc_Char)0x63,  /* [5346] */
    (xdc_Char)0x3a,  /* [5347] */
    (xdc_Char)0x20,  /* [5348] */
    (xdc_Char)0x30,  /* [5349] */
    (xdc_Char)0x78,  /* [5350] */
    (xdc_Char)0x25,  /* [5351] */
    (xdc_Char)0x78,  /* [5352] */
    (xdc_Char)0x2c,  /* [5353] */
    (xdc_Char)0x20,  /* [5354] */
    (xdc_Char)0x74,  /* [5355] */
    (xdc_Char)0x69,  /* [5356] */
    (xdc_Char)0x6d,  /* [5357] */
    (xdc_Char)0x65,  /* [5358] */
    (xdc_Char)0x6f,  /* [5359] */
    (xdc_Char)0x75,  /* [5360] */
    (xdc_Char)0x74,  /* [5361] */
    (xdc_Char)0x3a,  /* [5362] */
    (xdc_Char)0x20,  /* [5363] */
    (xdc_Char)0x25,  /* [5364] */
    (xdc_Char)0x64,  /* [5365] */
    (xdc_Char)0x0,  /* [5366] */
    (xdc_Char)0x4c,  /* [5367] */
    (xdc_Char)0x44,  /* [5368] */
    (xdc_Char)0x5f,  /* [5369] */
    (xdc_Char)0x72,  /* [5370] */
    (xdc_Char)0x65,  /* [5371] */
    (xdc_Char)0x61,  /* [5372] */
    (xdc_Char)0x64,  /* [5373] */
    (xdc_Char)0x79,  /* [5374] */
    (xdc_Char)0x3a,  /* [5375] */
    (xdc_Char)0x20,  /* [5376] */
    (xdc_Char)0x74,  /* [5377] */
    (xdc_Char)0x73,  /* [5378] */
    (xdc_Char)0x6b,  /* [5379] */
    (xdc_Char)0x3a,  /* [5380] */
    (xdc_Char)0x20,  /* [5381] */
    (xdc_Char)0x30,  /* [5382] */
    (xdc_Char)0x78,  /* [5383] */
    (xdc_Char)0x25,  /* [5384] */
    (xdc_Char)0x78,  /* [5385] */
    (xdc_Char)0x2c,  /* [5386] */
    (xdc_Char)0x20,  /* [5387] */
    (xdc_Char)0x66,  /* [5388] */
    (xdc_Char)0x75,  /* [5389] */
    (xdc_Char)0x6e,  /* [5390] */
    (xdc_Char)0x63,  /* [5391] */
    (xdc_Char)0x3a,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x30,  /* [5394] */
    (xdc_Char)0x78,  /* [5395] */
    (xdc_Char)0x25,  /* [5396] */
    (xdc_Char)0x78,  /* [5397] */
    (xdc_Char)0x2c,  /* [5398] */
    (xdc_Char)0x20,  /* [5399] */
    (xdc_Char)0x70,  /* [5400] */
    (xdc_Char)0x72,  /* [5401] */
    (xdc_Char)0x69,  /* [5402] */
    (xdc_Char)0x3a,  /* [5403] */
    (xdc_Char)0x20,  /* [5404] */
    (xdc_Char)0x25,  /* [5405] */
    (xdc_Char)0x64,  /* [5406] */
    (xdc_Char)0x0,  /* [5407] */
    (xdc_Char)0x4c,  /* [5408] */
    (xdc_Char)0x44,  /* [5409] */
    (xdc_Char)0x5f,  /* [5410] */
    (xdc_Char)0x62,  /* [5411] */
    (xdc_Char)0x6c,  /* [5412] */
    (xdc_Char)0x6f,  /* [5413] */
    (xdc_Char)0x63,  /* [5414] */
    (xdc_Char)0x6b,  /* [5415] */
    (xdc_Char)0x3a,  /* [5416] */
    (xdc_Char)0x20,  /* [5417] */
    (xdc_Char)0x74,  /* [5418] */
    (xdc_Char)0x73,  /* [5419] */
    (xdc_Char)0x6b,  /* [5420] */
    (xdc_Char)0x3a,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x30,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x25,  /* [5425] */
    (xdc_Char)0x78,  /* [5426] */
    (xdc_Char)0x2c,  /* [5427] */
    (xdc_Char)0x20,  /* [5428] */
    (xdc_Char)0x66,  /* [5429] */
    (xdc_Char)0x75,  /* [5430] */
    (xdc_Char)0x6e,  /* [5431] */
    (xdc_Char)0x63,  /* [5432] */
    (xdc_Char)0x3a,  /* [5433] */
    (xdc_Char)0x20,  /* [5434] */
    (xdc_Char)0x30,  /* [5435] */
    (xdc_Char)0x78,  /* [5436] */
    (xdc_Char)0x25,  /* [5437] */
    (xdc_Char)0x78,  /* [5438] */
    (xdc_Char)0x0,  /* [5439] */
    (xdc_Char)0x4c,  /* [5440] */
    (xdc_Char)0x4d,  /* [5441] */
    (xdc_Char)0x5f,  /* [5442] */
    (xdc_Char)0x79,  /* [5443] */
    (xdc_Char)0x69,  /* [5444] */
    (xdc_Char)0x65,  /* [5445] */
    (xdc_Char)0x6c,  /* [5446] */
    (xdc_Char)0x64,  /* [5447] */
    (xdc_Char)0x3a,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x74,  /* [5450] */
    (xdc_Char)0x73,  /* [5451] */
    (xdc_Char)0x6b,  /* [5452] */
    (xdc_Char)0x3a,  /* [5453] */
    (xdc_Char)0x20,  /* [5454] */
    (xdc_Char)0x30,  /* [5455] */
    (xdc_Char)0x78,  /* [5456] */
    (xdc_Char)0x25,  /* [5457] */
    (xdc_Char)0x78,  /* [5458] */
    (xdc_Char)0x2c,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x66,  /* [5461] */
    (xdc_Char)0x75,  /* [5462] */
    (xdc_Char)0x6e,  /* [5463] */
    (xdc_Char)0x63,  /* [5464] */
    (xdc_Char)0x3a,  /* [5465] */
    (xdc_Char)0x20,  /* [5466] */
    (xdc_Char)0x30,  /* [5467] */
    (xdc_Char)0x78,  /* [5468] */
    (xdc_Char)0x25,  /* [5469] */
    (xdc_Char)0x78,  /* [5470] */
    (xdc_Char)0x2c,  /* [5471] */
    (xdc_Char)0x20,  /* [5472] */
    (xdc_Char)0x63,  /* [5473] */
    (xdc_Char)0x75,  /* [5474] */
    (xdc_Char)0x72,  /* [5475] */
    (xdc_Char)0x72,  /* [5476] */
    (xdc_Char)0x54,  /* [5477] */
    (xdc_Char)0x68,  /* [5478] */
    (xdc_Char)0x72,  /* [5479] */
    (xdc_Char)0x65,  /* [5480] */
    (xdc_Char)0x61,  /* [5481] */
    (xdc_Char)0x64,  /* [5482] */
    (xdc_Char)0x3a,  /* [5483] */
    (xdc_Char)0x20,  /* [5484] */
    (xdc_Char)0x25,  /* [5485] */
    (xdc_Char)0x64,  /* [5486] */
    (xdc_Char)0x0,  /* [5487] */
    (xdc_Char)0x4c,  /* [5488] */
    (xdc_Char)0x4d,  /* [5489] */
    (xdc_Char)0x5f,  /* [5490] */
    (xdc_Char)0x73,  /* [5491] */
    (xdc_Char)0x65,  /* [5492] */
    (xdc_Char)0x74,  /* [5493] */
    (xdc_Char)0x50,  /* [5494] */
    (xdc_Char)0x72,  /* [5495] */
    (xdc_Char)0x69,  /* [5496] */
    (xdc_Char)0x3a,  /* [5497] */
    (xdc_Char)0x20,  /* [5498] */
    (xdc_Char)0x74,  /* [5499] */
    (xdc_Char)0x73,  /* [5500] */
    (xdc_Char)0x6b,  /* [5501] */
    (xdc_Char)0x3a,  /* [5502] */
    (xdc_Char)0x20,  /* [5503] */
    (xdc_Char)0x30,  /* [5504] */
    (xdc_Char)0x78,  /* [5505] */
    (xdc_Char)0x25,  /* [5506] */
    (xdc_Char)0x78,  /* [5507] */
    (xdc_Char)0x2c,  /* [5508] */
    (xdc_Char)0x20,  /* [5509] */
    (xdc_Char)0x66,  /* [5510] */
    (xdc_Char)0x75,  /* [5511] */
    (xdc_Char)0x6e,  /* [5512] */
    (xdc_Char)0x63,  /* [5513] */
    (xdc_Char)0x3a,  /* [5514] */
    (xdc_Char)0x20,  /* [5515] */
    (xdc_Char)0x30,  /* [5516] */
    (xdc_Char)0x78,  /* [5517] */
    (xdc_Char)0x25,  /* [5518] */
    (xdc_Char)0x78,  /* [5519] */
    (xdc_Char)0x2c,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x6f,  /* [5522] */
    (xdc_Char)0x6c,  /* [5523] */
    (xdc_Char)0x64,  /* [5524] */
    (xdc_Char)0x50,  /* [5525] */
    (xdc_Char)0x72,  /* [5526] */
    (xdc_Char)0x69,  /* [5527] */
    (xdc_Char)0x3a,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x25,  /* [5530] */
    (xdc_Char)0x64,  /* [5531] */
    (xdc_Char)0x2c,  /* [5532] */
    (xdc_Char)0x20,  /* [5533] */
    (xdc_Char)0x6e,  /* [5534] */
    (xdc_Char)0x65,  /* [5535] */
    (xdc_Char)0x77,  /* [5536] */
    (xdc_Char)0x50,  /* [5537] */
    (xdc_Char)0x72,  /* [5538] */
    (xdc_Char)0x69,  /* [5539] */
    (xdc_Char)0x20,  /* [5540] */
    (xdc_Char)0x25,  /* [5541] */
    (xdc_Char)0x64,  /* [5542] */
    (xdc_Char)0x0,  /* [5543] */
    (xdc_Char)0x4c,  /* [5544] */
    (xdc_Char)0x44,  /* [5545] */
    (xdc_Char)0x5f,  /* [5546] */
    (xdc_Char)0x65,  /* [5547] */
    (xdc_Char)0x78,  /* [5548] */
    (xdc_Char)0x69,  /* [5549] */
    (xdc_Char)0x74,  /* [5550] */
    (xdc_Char)0x3a,  /* [5551] */
    (xdc_Char)0x20,  /* [5552] */
    (xdc_Char)0x74,  /* [5553] */
    (xdc_Char)0x73,  /* [5554] */
    (xdc_Char)0x6b,  /* [5555] */
    (xdc_Char)0x3a,  /* [5556] */
    (xdc_Char)0x20,  /* [5557] */
    (xdc_Char)0x30,  /* [5558] */
    (xdc_Char)0x78,  /* [5559] */
    (xdc_Char)0x25,  /* [5560] */
    (xdc_Char)0x78,  /* [5561] */
    (xdc_Char)0x2c,  /* [5562] */
    (xdc_Char)0x20,  /* [5563] */
    (xdc_Char)0x66,  /* [5564] */
    (xdc_Char)0x75,  /* [5565] */
    (xdc_Char)0x6e,  /* [5566] */
    (xdc_Char)0x63,  /* [5567] */
    (xdc_Char)0x3a,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x30,  /* [5570] */
    (xdc_Char)0x78,  /* [5571] */
    (xdc_Char)0x25,  /* [5572] */
    (xdc_Char)0x78,  /* [5573] */
    (xdc_Char)0x0,  /* [5574] */
    (xdc_Char)0x4c,  /* [5575] */
    (xdc_Char)0x4d,  /* [5576] */
    (xdc_Char)0x5f,  /* [5577] */
    (xdc_Char)0x73,  /* [5578] */
    (xdc_Char)0x65,  /* [5579] */
    (xdc_Char)0x74,  /* [5580] */
    (xdc_Char)0x41,  /* [5581] */
    (xdc_Char)0x66,  /* [5582] */
    (xdc_Char)0x66,  /* [5583] */
    (xdc_Char)0x69,  /* [5584] */
    (xdc_Char)0x6e,  /* [5585] */
    (xdc_Char)0x69,  /* [5586] */
    (xdc_Char)0x74,  /* [5587] */
    (xdc_Char)0x79,  /* [5588] */
    (xdc_Char)0x3a,  /* [5589] */
    (xdc_Char)0x20,  /* [5590] */
    (xdc_Char)0x74,  /* [5591] */
    (xdc_Char)0x73,  /* [5592] */
    (xdc_Char)0x6b,  /* [5593] */
    (xdc_Char)0x3a,  /* [5594] */
    (xdc_Char)0x20,  /* [5595] */
    (xdc_Char)0x30,  /* [5596] */
    (xdc_Char)0x78,  /* [5597] */
    (xdc_Char)0x25,  /* [5598] */
    (xdc_Char)0x78,  /* [5599] */
    (xdc_Char)0x2c,  /* [5600] */
    (xdc_Char)0x20,  /* [5601] */
    (xdc_Char)0x66,  /* [5602] */
    (xdc_Char)0x75,  /* [5603] */
    (xdc_Char)0x6e,  /* [5604] */
    (xdc_Char)0x63,  /* [5605] */
    (xdc_Char)0x3a,  /* [5606] */
    (xdc_Char)0x20,  /* [5607] */
    (xdc_Char)0x30,  /* [5608] */
    (xdc_Char)0x78,  /* [5609] */
    (xdc_Char)0x25,  /* [5610] */
    (xdc_Char)0x78,  /* [5611] */
    (xdc_Char)0x2c,  /* [5612] */
    (xdc_Char)0x20,  /* [5613] */
    (xdc_Char)0x6f,  /* [5614] */
    (xdc_Char)0x6c,  /* [5615] */
    (xdc_Char)0x64,  /* [5616] */
    (xdc_Char)0x43,  /* [5617] */
    (xdc_Char)0x6f,  /* [5618] */
    (xdc_Char)0x72,  /* [5619] */
    (xdc_Char)0x65,  /* [5620] */
    (xdc_Char)0x3a,  /* [5621] */
    (xdc_Char)0x20,  /* [5622] */
    (xdc_Char)0x25,  /* [5623] */
    (xdc_Char)0x64,  /* [5624] */
    (xdc_Char)0x2c,  /* [5625] */
    (xdc_Char)0x20,  /* [5626] */
    (xdc_Char)0x6f,  /* [5627] */
    (xdc_Char)0x6c,  /* [5628] */
    (xdc_Char)0x64,  /* [5629] */
    (xdc_Char)0x41,  /* [5630] */
    (xdc_Char)0x66,  /* [5631] */
    (xdc_Char)0x66,  /* [5632] */
    (xdc_Char)0x69,  /* [5633] */
    (xdc_Char)0x6e,  /* [5634] */
    (xdc_Char)0x69,  /* [5635] */
    (xdc_Char)0x74,  /* [5636] */
    (xdc_Char)0x79,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x25,  /* [5639] */
    (xdc_Char)0x64,  /* [5640] */
    (xdc_Char)0x2c,  /* [5641] */
    (xdc_Char)0x20,  /* [5642] */
    (xdc_Char)0x6e,  /* [5643] */
    (xdc_Char)0x65,  /* [5644] */
    (xdc_Char)0x77,  /* [5645] */
    (xdc_Char)0x41,  /* [5646] */
    (xdc_Char)0x66,  /* [5647] */
    (xdc_Char)0x66,  /* [5648] */
    (xdc_Char)0x69,  /* [5649] */
    (xdc_Char)0x6e,  /* [5650] */
    (xdc_Char)0x69,  /* [5651] */
    (xdc_Char)0x74,  /* [5652] */
    (xdc_Char)0x79,  /* [5653] */
    (xdc_Char)0x20,  /* [5654] */
    (xdc_Char)0x25,  /* [5655] */
    (xdc_Char)0x64,  /* [5656] */
    (xdc_Char)0x0,  /* [5657] */
    (xdc_Char)0x4c,  /* [5658] */
    (xdc_Char)0x44,  /* [5659] */
    (xdc_Char)0x5f,  /* [5660] */
    (xdc_Char)0x73,  /* [5661] */
    (xdc_Char)0x63,  /* [5662] */
    (xdc_Char)0x68,  /* [5663] */
    (xdc_Char)0x65,  /* [5664] */
    (xdc_Char)0x64,  /* [5665] */
    (xdc_Char)0x75,  /* [5666] */
    (xdc_Char)0x6c,  /* [5667] */
    (xdc_Char)0x65,  /* [5668] */
    (xdc_Char)0x3a,  /* [5669] */
    (xdc_Char)0x20,  /* [5670] */
    (xdc_Char)0x63,  /* [5671] */
    (xdc_Char)0x6f,  /* [5672] */
    (xdc_Char)0x72,  /* [5673] */
    (xdc_Char)0x65,  /* [5674] */
    (xdc_Char)0x49,  /* [5675] */
    (xdc_Char)0x64,  /* [5676] */
    (xdc_Char)0x3a,  /* [5677] */
    (xdc_Char)0x20,  /* [5678] */
    (xdc_Char)0x25,  /* [5679] */
    (xdc_Char)0x64,  /* [5680] */
    (xdc_Char)0x2c,  /* [5681] */
    (xdc_Char)0x20,  /* [5682] */
    (xdc_Char)0x77,  /* [5683] */
    (xdc_Char)0x6f,  /* [5684] */
    (xdc_Char)0x72,  /* [5685] */
    (xdc_Char)0x6b,  /* [5686] */
    (xdc_Char)0x46,  /* [5687] */
    (xdc_Char)0x6c,  /* [5688] */
    (xdc_Char)0x61,  /* [5689] */
    (xdc_Char)0x67,  /* [5690] */
    (xdc_Char)0x3a,  /* [5691] */
    (xdc_Char)0x20,  /* [5692] */
    (xdc_Char)0x25,  /* [5693] */
    (xdc_Char)0x64,  /* [5694] */
    (xdc_Char)0x2c,  /* [5695] */
    (xdc_Char)0x20,  /* [5696] */
    (xdc_Char)0x63,  /* [5697] */
    (xdc_Char)0x75,  /* [5698] */
    (xdc_Char)0x72,  /* [5699] */
    (xdc_Char)0x53,  /* [5700] */
    (xdc_Char)0x65,  /* [5701] */
    (xdc_Char)0x74,  /* [5702] */
    (xdc_Char)0x4c,  /* [5703] */
    (xdc_Char)0x6f,  /* [5704] */
    (xdc_Char)0x63,  /* [5705] */
    (xdc_Char)0x61,  /* [5706] */
    (xdc_Char)0x6c,  /* [5707] */
    (xdc_Char)0x3a,  /* [5708] */
    (xdc_Char)0x20,  /* [5709] */
    (xdc_Char)0x25,  /* [5710] */
    (xdc_Char)0x64,  /* [5711] */
    (xdc_Char)0x2c,  /* [5712] */
    (xdc_Char)0x20,  /* [5713] */
    (xdc_Char)0x63,  /* [5714] */
    (xdc_Char)0x75,  /* [5715] */
    (xdc_Char)0x72,  /* [5716] */
    (xdc_Char)0x53,  /* [5717] */
    (xdc_Char)0x65,  /* [5718] */
    (xdc_Char)0x74,  /* [5719] */
    (xdc_Char)0x58,  /* [5720] */
    (xdc_Char)0x3a,  /* [5721] */
    (xdc_Char)0x20,  /* [5722] */
    (xdc_Char)0x25,  /* [5723] */
    (xdc_Char)0x64,  /* [5724] */
    (xdc_Char)0x2c,  /* [5725] */
    (xdc_Char)0x20,  /* [5726] */
    (xdc_Char)0x63,  /* [5727] */
    (xdc_Char)0x75,  /* [5728] */
    (xdc_Char)0x72,  /* [5729] */
    (xdc_Char)0x4d,  /* [5730] */
    (xdc_Char)0x61,  /* [5731] */
    (xdc_Char)0x73,  /* [5732] */
    (xdc_Char)0x6b,  /* [5733] */
    (xdc_Char)0x4c,  /* [5734] */
    (xdc_Char)0x6f,  /* [5735] */
    (xdc_Char)0x63,  /* [5736] */
    (xdc_Char)0x61,  /* [5737] */
    (xdc_Char)0x6c,  /* [5738] */
    (xdc_Char)0x3a,  /* [5739] */
    (xdc_Char)0x20,  /* [5740] */
    (xdc_Char)0x25,  /* [5741] */
    (xdc_Char)0x64,  /* [5742] */
    (xdc_Char)0x0,  /* [5743] */
    (xdc_Char)0x4c,  /* [5744] */
    (xdc_Char)0x44,  /* [5745] */
    (xdc_Char)0x5f,  /* [5746] */
    (xdc_Char)0x6e,  /* [5747] */
    (xdc_Char)0x6f,  /* [5748] */
    (xdc_Char)0x57,  /* [5749] */
    (xdc_Char)0x6f,  /* [5750] */
    (xdc_Char)0x72,  /* [5751] */
    (xdc_Char)0x6b,  /* [5752] */
    (xdc_Char)0x3a,  /* [5753] */
    (xdc_Char)0x20,  /* [5754] */
    (xdc_Char)0x63,  /* [5755] */
    (xdc_Char)0x6f,  /* [5756] */
    (xdc_Char)0x72,  /* [5757] */
    (xdc_Char)0x65,  /* [5758] */
    (xdc_Char)0x49,  /* [5759] */
    (xdc_Char)0x64,  /* [5760] */
    (xdc_Char)0x3a,  /* [5761] */
    (xdc_Char)0x20,  /* [5762] */
    (xdc_Char)0x25,  /* [5763] */
    (xdc_Char)0x64,  /* [5764] */
    (xdc_Char)0x2c,  /* [5765] */
    (xdc_Char)0x20,  /* [5766] */
    (xdc_Char)0x63,  /* [5767] */
    (xdc_Char)0x75,  /* [5768] */
    (xdc_Char)0x72,  /* [5769] */
    (xdc_Char)0x53,  /* [5770] */
    (xdc_Char)0x65,  /* [5771] */
    (xdc_Char)0x74,  /* [5772] */
    (xdc_Char)0x4c,  /* [5773] */
    (xdc_Char)0x6f,  /* [5774] */
    (xdc_Char)0x63,  /* [5775] */
    (xdc_Char)0x61,  /* [5776] */
    (xdc_Char)0x6c,  /* [5777] */
    (xdc_Char)0x3a,  /* [5778] */
    (xdc_Char)0x20,  /* [5779] */
    (xdc_Char)0x25,  /* [5780] */
    (xdc_Char)0x64,  /* [5781] */
    (xdc_Char)0x2c,  /* [5782] */
    (xdc_Char)0x20,  /* [5783] */
    (xdc_Char)0x63,  /* [5784] */
    (xdc_Char)0x75,  /* [5785] */
    (xdc_Char)0x72,  /* [5786] */
    (xdc_Char)0x53,  /* [5787] */
    (xdc_Char)0x65,  /* [5788] */
    (xdc_Char)0x74,  /* [5789] */
    (xdc_Char)0x58,  /* [5790] */
    (xdc_Char)0x3a,  /* [5791] */
    (xdc_Char)0x20,  /* [5792] */
    (xdc_Char)0x25,  /* [5793] */
    (xdc_Char)0x64,  /* [5794] */
    (xdc_Char)0x2c,  /* [5795] */
    (xdc_Char)0x20,  /* [5796] */
    (xdc_Char)0x63,  /* [5797] */
    (xdc_Char)0x75,  /* [5798] */
    (xdc_Char)0x72,  /* [5799] */
    (xdc_Char)0x4d,  /* [5800] */
    (xdc_Char)0x61,  /* [5801] */
    (xdc_Char)0x73,  /* [5802] */
    (xdc_Char)0x6b,  /* [5803] */
    (xdc_Char)0x4c,  /* [5804] */
    (xdc_Char)0x6f,  /* [5805] */
    (xdc_Char)0x63,  /* [5806] */
    (xdc_Char)0x61,  /* [5807] */
    (xdc_Char)0x6c,  /* [5808] */
    (xdc_Char)0x3a,  /* [5809] */
    (xdc_Char)0x20,  /* [5810] */
    (xdc_Char)0x25,  /* [5811] */
    (xdc_Char)0x64,  /* [5812] */
    (xdc_Char)0x0,  /* [5813] */
    (xdc_Char)0x4c,  /* [5814] */
    (xdc_Char)0x53,  /* [5815] */
    (xdc_Char)0x5f,  /* [5816] */
    (xdc_Char)0x63,  /* [5817] */
    (xdc_Char)0x70,  /* [5818] */
    (xdc_Char)0x75,  /* [5819] */
    (xdc_Char)0x4c,  /* [5820] */
    (xdc_Char)0x6f,  /* [5821] */
    (xdc_Char)0x61,  /* [5822] */
    (xdc_Char)0x64,  /* [5823] */
    (xdc_Char)0x3a,  /* [5824] */
    (xdc_Char)0x20,  /* [5825] */
    (xdc_Char)0x25,  /* [5826] */
    (xdc_Char)0x64,  /* [5827] */
    (xdc_Char)0x25,  /* [5828] */
    (xdc_Char)0x25,  /* [5829] */
    (xdc_Char)0x0,  /* [5830] */
    (xdc_Char)0x4c,  /* [5831] */
    (xdc_Char)0x53,  /* [5832] */
    (xdc_Char)0x5f,  /* [5833] */
    (xdc_Char)0x68,  /* [5834] */
    (xdc_Char)0x77,  /* [5835] */
    (xdc_Char)0x69,  /* [5836] */
    (xdc_Char)0x4c,  /* [5837] */
    (xdc_Char)0x6f,  /* [5838] */
    (xdc_Char)0x61,  /* [5839] */
    (xdc_Char)0x64,  /* [5840] */
    (xdc_Char)0x3a,  /* [5841] */
    (xdc_Char)0x20,  /* [5842] */
    (xdc_Char)0x25,  /* [5843] */
    (xdc_Char)0x64,  /* [5844] */
    (xdc_Char)0x2c,  /* [5845] */
    (xdc_Char)0x25,  /* [5846] */
    (xdc_Char)0x64,  /* [5847] */
    (xdc_Char)0x0,  /* [5848] */
    (xdc_Char)0x4c,  /* [5849] */
    (xdc_Char)0x53,  /* [5850] */
    (xdc_Char)0x5f,  /* [5851] */
    (xdc_Char)0x73,  /* [5852] */
    (xdc_Char)0x77,  /* [5853] */
    (xdc_Char)0x69,  /* [5854] */
    (xdc_Char)0x4c,  /* [5855] */
    (xdc_Char)0x6f,  /* [5856] */
    (xdc_Char)0x61,  /* [5857] */
    (xdc_Char)0x64,  /* [5858] */
    (xdc_Char)0x3a,  /* [5859] */
    (xdc_Char)0x20,  /* [5860] */
    (xdc_Char)0x25,  /* [5861] */
    (xdc_Char)0x64,  /* [5862] */
    (xdc_Char)0x2c,  /* [5863] */
    (xdc_Char)0x25,  /* [5864] */
    (xdc_Char)0x64,  /* [5865] */
    (xdc_Char)0x0,  /* [5866] */
    (xdc_Char)0x4c,  /* [5867] */
    (xdc_Char)0x53,  /* [5868] */
    (xdc_Char)0x5f,  /* [5869] */
    (xdc_Char)0x74,  /* [5870] */
    (xdc_Char)0x61,  /* [5871] */
    (xdc_Char)0x73,  /* [5872] */
    (xdc_Char)0x6b,  /* [5873] */
    (xdc_Char)0x4c,  /* [5874] */
    (xdc_Char)0x6f,  /* [5875] */
    (xdc_Char)0x61,  /* [5876] */
    (xdc_Char)0x64,  /* [5877] */
    (xdc_Char)0x3a,  /* [5878] */
    (xdc_Char)0x20,  /* [5879] */
    (xdc_Char)0x30,  /* [5880] */
    (xdc_Char)0x78,  /* [5881] */
    (xdc_Char)0x25,  /* [5882] */
    (xdc_Char)0x78,  /* [5883] */
    (xdc_Char)0x2c,  /* [5884] */
    (xdc_Char)0x25,  /* [5885] */
    (xdc_Char)0x64,  /* [5886] */
    (xdc_Char)0x2c,  /* [5887] */
    (xdc_Char)0x25,  /* [5888] */
    (xdc_Char)0x64,  /* [5889] */
    (xdc_Char)0x2c,  /* [5890] */
    (xdc_Char)0x30,  /* [5891] */
    (xdc_Char)0x78,  /* [5892] */
    (xdc_Char)0x25,  /* [5893] */
    (xdc_Char)0x78,  /* [5894] */
    (xdc_Char)0x0,  /* [5895] */
    (xdc_Char)0x45,  /* [5896] */
    (xdc_Char)0x52,  /* [5897] */
    (xdc_Char)0x52,  /* [5898] */
    (xdc_Char)0x4f,  /* [5899] */
    (xdc_Char)0x52,  /* [5900] */
    (xdc_Char)0x3a,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x45,  /* [5903] */
    (xdc_Char)0x72,  /* [5904] */
    (xdc_Char)0x72,  /* [5905] */
    (xdc_Char)0x6f,  /* [5906] */
    (xdc_Char)0x72,  /* [5907] */
    (xdc_Char)0x43,  /* [5908] */
    (xdc_Char)0x6f,  /* [5909] */
    (xdc_Char)0x64,  /* [5910] */
    (xdc_Char)0x65,  /* [5911] */
    (xdc_Char)0x3a,  /* [5912] */
    (xdc_Char)0x30,  /* [5913] */
    (xdc_Char)0x78,  /* [5914] */
    (xdc_Char)0x25,  /* [5915] */
    (xdc_Char)0x78,  /* [5916] */
    (xdc_Char)0x0,  /* [5917] */
    (xdc_Char)0x45,  /* [5918] */
    (xdc_Char)0x52,  /* [5919] */
    (xdc_Char)0x52,  /* [5920] */
    (xdc_Char)0x4f,  /* [5921] */
    (xdc_Char)0x52,  /* [5922] */
    (xdc_Char)0x3a,  /* [5923] */
    (xdc_Char)0x20,  /* [5924] */
    (xdc_Char)0x45,  /* [5925] */
    (xdc_Char)0x72,  /* [5926] */
    (xdc_Char)0x72,  /* [5927] */
    (xdc_Char)0x6f,  /* [5928] */
    (xdc_Char)0x72,  /* [5929] */
    (xdc_Char)0x43,  /* [5930] */
    (xdc_Char)0x6f,  /* [5931] */
    (xdc_Char)0x64,  /* [5932] */
    (xdc_Char)0x65,  /* [5933] */
    (xdc_Char)0x3a,  /* [5934] */
    (xdc_Char)0x30,  /* [5935] */
    (xdc_Char)0x78,  /* [5936] */
    (xdc_Char)0x25,  /* [5937] */
    (xdc_Char)0x78,  /* [5938] */
    (xdc_Char)0x2e,  /* [5939] */
    (xdc_Char)0x20,  /* [5940] */
    (xdc_Char)0x25,  /* [5941] */
    (xdc_Char)0x24,  /* [5942] */
    (xdc_Char)0x53,  /* [5943] */
    (xdc_Char)0x0,  /* [5944] */
    (xdc_Char)0x48,  /* [5945] */
    (xdc_Char)0x57,  /* [5946] */
    (xdc_Char)0x20,  /* [5947] */
    (xdc_Char)0x45,  /* [5948] */
    (xdc_Char)0x52,  /* [5949] */
    (xdc_Char)0x52,  /* [5950] */
    (xdc_Char)0x4f,  /* [5951] */
    (xdc_Char)0x52,  /* [5952] */
    (xdc_Char)0x3a,  /* [5953] */
    (xdc_Char)0x20,  /* [5954] */
    (xdc_Char)0x45,  /* [5955] */
    (xdc_Char)0x72,  /* [5956] */
    (xdc_Char)0x72,  /* [5957] */
    (xdc_Char)0x6f,  /* [5958] */
    (xdc_Char)0x72,  /* [5959] */
    (xdc_Char)0x43,  /* [5960] */
    (xdc_Char)0x6f,  /* [5961] */
    (xdc_Char)0x64,  /* [5962] */
    (xdc_Char)0x65,  /* [5963] */
    (xdc_Char)0x3a,  /* [5964] */
    (xdc_Char)0x30,  /* [5965] */
    (xdc_Char)0x78,  /* [5966] */
    (xdc_Char)0x25,  /* [5967] */
    (xdc_Char)0x78,  /* [5968] */
    (xdc_Char)0x0,  /* [5969] */
    (xdc_Char)0x48,  /* [5970] */
    (xdc_Char)0x57,  /* [5971] */
    (xdc_Char)0x20,  /* [5972] */
    (xdc_Char)0x45,  /* [5973] */
    (xdc_Char)0x52,  /* [5974] */
    (xdc_Char)0x52,  /* [5975] */
    (xdc_Char)0x4f,  /* [5976] */
    (xdc_Char)0x52,  /* [5977] */
    (xdc_Char)0x3a,  /* [5978] */
    (xdc_Char)0x20,  /* [5979] */
    (xdc_Char)0x45,  /* [5980] */
    (xdc_Char)0x72,  /* [5981] */
    (xdc_Char)0x72,  /* [5982] */
    (xdc_Char)0x6f,  /* [5983] */
    (xdc_Char)0x72,  /* [5984] */
    (xdc_Char)0x43,  /* [5985] */
    (xdc_Char)0x6f,  /* [5986] */
    (xdc_Char)0x64,  /* [5987] */
    (xdc_Char)0x65,  /* [5988] */
    (xdc_Char)0x3a,  /* [5989] */
    (xdc_Char)0x30,  /* [5990] */
    (xdc_Char)0x78,  /* [5991] */
    (xdc_Char)0x25,  /* [5992] */
    (xdc_Char)0x78,  /* [5993] */
    (xdc_Char)0x2e,  /* [5994] */
    (xdc_Char)0x20,  /* [5995] */
    (xdc_Char)0x25,  /* [5996] */
    (xdc_Char)0x24,  /* [5997] */
    (xdc_Char)0x53,  /* [5998] */
    (xdc_Char)0x0,  /* [5999] */
    (xdc_Char)0x46,  /* [6000] */
    (xdc_Char)0x41,  /* [6001] */
    (xdc_Char)0x54,  /* [6002] */
    (xdc_Char)0x41,  /* [6003] */
    (xdc_Char)0x4c,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x45,  /* [6006] */
    (xdc_Char)0x52,  /* [6007] */
    (xdc_Char)0x52,  /* [6008] */
    (xdc_Char)0x4f,  /* [6009] */
    (xdc_Char)0x52,  /* [6010] */
    (xdc_Char)0x3a,  /* [6011] */
    (xdc_Char)0x20,  /* [6012] */
    (xdc_Char)0x45,  /* [6013] */
    (xdc_Char)0x72,  /* [6014] */
    (xdc_Char)0x72,  /* [6015] */
    (xdc_Char)0x6f,  /* [6016] */
    (xdc_Char)0x72,  /* [6017] */
    (xdc_Char)0x43,  /* [6018] */
    (xdc_Char)0x6f,  /* [6019] */
    (xdc_Char)0x64,  /* [6020] */
    (xdc_Char)0x65,  /* [6021] */
    (xdc_Char)0x3a,  /* [6022] */
    (xdc_Char)0x30,  /* [6023] */
    (xdc_Char)0x78,  /* [6024] */
    (xdc_Char)0x25,  /* [6025] */
    (xdc_Char)0x78,  /* [6026] */
    (xdc_Char)0x0,  /* [6027] */
    (xdc_Char)0x46,  /* [6028] */
    (xdc_Char)0x41,  /* [6029] */
    (xdc_Char)0x54,  /* [6030] */
    (xdc_Char)0x41,  /* [6031] */
    (xdc_Char)0x4c,  /* [6032] */
    (xdc_Char)0x20,  /* [6033] */
    (xdc_Char)0x45,  /* [6034] */
    (xdc_Char)0x52,  /* [6035] */
    (xdc_Char)0x52,  /* [6036] */
    (xdc_Char)0x4f,  /* [6037] */
    (xdc_Char)0x52,  /* [6038] */
    (xdc_Char)0x3a,  /* [6039] */
    (xdc_Char)0x20,  /* [6040] */
    (xdc_Char)0x45,  /* [6041] */
    (xdc_Char)0x72,  /* [6042] */
    (xdc_Char)0x72,  /* [6043] */
    (xdc_Char)0x6f,  /* [6044] */
    (xdc_Char)0x72,  /* [6045] */
    (xdc_Char)0x43,  /* [6046] */
    (xdc_Char)0x6f,  /* [6047] */
    (xdc_Char)0x64,  /* [6048] */
    (xdc_Char)0x65,  /* [6049] */
    (xdc_Char)0x3a,  /* [6050] */
    (xdc_Char)0x30,  /* [6051] */
    (xdc_Char)0x78,  /* [6052] */
    (xdc_Char)0x25,  /* [6053] */
    (xdc_Char)0x78,  /* [6054] */
    (xdc_Char)0x2e,  /* [6055] */
    (xdc_Char)0x20,  /* [6056] */
    (xdc_Char)0x25,  /* [6057] */
    (xdc_Char)0x24,  /* [6058] */
    (xdc_Char)0x53,  /* [6059] */
    (xdc_Char)0x0,  /* [6060] */
    (xdc_Char)0x43,  /* [6061] */
    (xdc_Char)0x52,  /* [6062] */
    (xdc_Char)0x49,  /* [6063] */
    (xdc_Char)0x54,  /* [6064] */
    (xdc_Char)0x49,  /* [6065] */
    (xdc_Char)0x43,  /* [6066] */
    (xdc_Char)0x41,  /* [6067] */
    (xdc_Char)0x4c,  /* [6068] */
    (xdc_Char)0x20,  /* [6069] */
    (xdc_Char)0x45,  /* [6070] */
    (xdc_Char)0x52,  /* [6071] */
    (xdc_Char)0x52,  /* [6072] */
    (xdc_Char)0x4f,  /* [6073] */
    (xdc_Char)0x52,  /* [6074] */
    (xdc_Char)0x3a,  /* [6075] */
    (xdc_Char)0x20,  /* [6076] */
    (xdc_Char)0x45,  /* [6077] */
    (xdc_Char)0x72,  /* [6078] */
    (xdc_Char)0x72,  /* [6079] */
    (xdc_Char)0x6f,  /* [6080] */
    (xdc_Char)0x72,  /* [6081] */
    (xdc_Char)0x43,  /* [6082] */
    (xdc_Char)0x6f,  /* [6083] */
    (xdc_Char)0x64,  /* [6084] */
    (xdc_Char)0x65,  /* [6085] */
    (xdc_Char)0x3a,  /* [6086] */
    (xdc_Char)0x30,  /* [6087] */
    (xdc_Char)0x78,  /* [6088] */
    (xdc_Char)0x25,  /* [6089] */
    (xdc_Char)0x78,  /* [6090] */
    (xdc_Char)0x0,  /* [6091] */
    (xdc_Char)0x43,  /* [6092] */
    (xdc_Char)0x52,  /* [6093] */
    (xdc_Char)0x49,  /* [6094] */
    (xdc_Char)0x54,  /* [6095] */
    (xdc_Char)0x49,  /* [6096] */
    (xdc_Char)0x43,  /* [6097] */
    (xdc_Char)0x41,  /* [6098] */
    (xdc_Char)0x4c,  /* [6099] */
    (xdc_Char)0x20,  /* [6100] */
    (xdc_Char)0x45,  /* [6101] */
    (xdc_Char)0x52,  /* [6102] */
    (xdc_Char)0x52,  /* [6103] */
    (xdc_Char)0x4f,  /* [6104] */
    (xdc_Char)0x52,  /* [6105] */
    (xdc_Char)0x3a,  /* [6106] */
    (xdc_Char)0x20,  /* [6107] */
    (xdc_Char)0x45,  /* [6108] */
    (xdc_Char)0x72,  /* [6109] */
    (xdc_Char)0x72,  /* [6110] */
    (xdc_Char)0x6f,  /* [6111] */
    (xdc_Char)0x72,  /* [6112] */
    (xdc_Char)0x43,  /* [6113] */
    (xdc_Char)0x6f,  /* [6114] */
    (xdc_Char)0x64,  /* [6115] */
    (xdc_Char)0x65,  /* [6116] */
    (xdc_Char)0x3a,  /* [6117] */
    (xdc_Char)0x30,  /* [6118] */
    (xdc_Char)0x78,  /* [6119] */
    (xdc_Char)0x25,  /* [6120] */
    (xdc_Char)0x78,  /* [6121] */
    (xdc_Char)0x2e,  /* [6122] */
    (xdc_Char)0x20,  /* [6123] */
    (xdc_Char)0x25,  /* [6124] */
    (xdc_Char)0x24,  /* [6125] */
    (xdc_Char)0x53,  /* [6126] */
    (xdc_Char)0x0,  /* [6127] */
    (xdc_Char)0x45,  /* [6128] */
    (xdc_Char)0x52,  /* [6129] */
    (xdc_Char)0x52,  /* [6130] */
    (xdc_Char)0x4f,  /* [6131] */
    (xdc_Char)0x52,  /* [6132] */
    (xdc_Char)0x3a,  /* [6133] */
    (xdc_Char)0x20,  /* [6134] */
    (xdc_Char)0x45,  /* [6135] */
    (xdc_Char)0x78,  /* [6136] */
    (xdc_Char)0x63,  /* [6137] */
    (xdc_Char)0x65,  /* [6138] */
    (xdc_Char)0x70,  /* [6139] */
    (xdc_Char)0x74,  /* [6140] */
    (xdc_Char)0x69,  /* [6141] */
    (xdc_Char)0x6f,  /* [6142] */
    (xdc_Char)0x6e,  /* [6143] */
    (xdc_Char)0x20,  /* [6144] */
    (xdc_Char)0x61,  /* [6145] */
    (xdc_Char)0x74,  /* [6146] */
    (xdc_Char)0x20,  /* [6147] */
    (xdc_Char)0x25,  /* [6148] */
    (xdc_Char)0x24,  /* [6149] */
    (xdc_Char)0x46,  /* [6150] */
    (xdc_Char)0x2e,  /* [6151] */
    (xdc_Char)0x0,  /* [6152] */
    (xdc_Char)0x45,  /* [6153] */
    (xdc_Char)0x52,  /* [6154] */
    (xdc_Char)0x52,  /* [6155] */
    (xdc_Char)0x4f,  /* [6156] */
    (xdc_Char)0x52,  /* [6157] */
    (xdc_Char)0x3a,  /* [6158] */
    (xdc_Char)0x20,  /* [6159] */
    (xdc_Char)0x55,  /* [6160] */
    (xdc_Char)0x6e,  /* [6161] */
    (xdc_Char)0x63,  /* [6162] */
    (xdc_Char)0x61,  /* [6163] */
    (xdc_Char)0x75,  /* [6164] */
    (xdc_Char)0x67,  /* [6165] */
    (xdc_Char)0x68,  /* [6166] */
    (xdc_Char)0x74,  /* [6167] */
    (xdc_Char)0x20,  /* [6168] */
    (xdc_Char)0x45,  /* [6169] */
    (xdc_Char)0x78,  /* [6170] */
    (xdc_Char)0x63,  /* [6171] */
    (xdc_Char)0x65,  /* [6172] */
    (xdc_Char)0x70,  /* [6173] */
    (xdc_Char)0x74,  /* [6174] */
    (xdc_Char)0x69,  /* [6175] */
    (xdc_Char)0x6f,  /* [6176] */
    (xdc_Char)0x6e,  /* [6177] */
    (xdc_Char)0x20,  /* [6178] */
    (xdc_Char)0x61,  /* [6179] */
    (xdc_Char)0x74,  /* [6180] */
    (xdc_Char)0x20,  /* [6181] */
    (xdc_Char)0x25,  /* [6182] */
    (xdc_Char)0x24,  /* [6183] */
    (xdc_Char)0x46,  /* [6184] */
    (xdc_Char)0x2e,  /* [6185] */
    (xdc_Char)0x0,  /* [6186] */
    (xdc_Char)0x45,  /* [6187] */
    (xdc_Char)0x52,  /* [6188] */
    (xdc_Char)0x52,  /* [6189] */
    (xdc_Char)0x4f,  /* [6190] */
    (xdc_Char)0x52,  /* [6191] */
    (xdc_Char)0x3a,  /* [6192] */
    (xdc_Char)0x20,  /* [6193] */
    (xdc_Char)0x4e,  /* [6194] */
    (xdc_Char)0x75,  /* [6195] */
    (xdc_Char)0x6c,  /* [6196] */
    (xdc_Char)0x6c,  /* [6197] */
    (xdc_Char)0x20,  /* [6198] */
    (xdc_Char)0x50,  /* [6199] */
    (xdc_Char)0x6f,  /* [6200] */
    (xdc_Char)0x69,  /* [6201] */
    (xdc_Char)0x6e,  /* [6202] */
    (xdc_Char)0x74,  /* [6203] */
    (xdc_Char)0x65,  /* [6204] */
    (xdc_Char)0x72,  /* [6205] */
    (xdc_Char)0x20,  /* [6206] */
    (xdc_Char)0x45,  /* [6207] */
    (xdc_Char)0x78,  /* [6208] */
    (xdc_Char)0x63,  /* [6209] */
    (xdc_Char)0x65,  /* [6210] */
    (xdc_Char)0x70,  /* [6211] */
    (xdc_Char)0x74,  /* [6212] */
    (xdc_Char)0x69,  /* [6213] */
    (xdc_Char)0x6f,  /* [6214] */
    (xdc_Char)0x6e,  /* [6215] */
    (xdc_Char)0x20,  /* [6216] */
    (xdc_Char)0x61,  /* [6217] */
    (xdc_Char)0x74,  /* [6218] */
    (xdc_Char)0x20,  /* [6219] */
    (xdc_Char)0x25,  /* [6220] */
    (xdc_Char)0x24,  /* [6221] */
    (xdc_Char)0x46,  /* [6222] */
    (xdc_Char)0x2e,  /* [6223] */
    (xdc_Char)0x0,  /* [6224] */
    (xdc_Char)0x45,  /* [6225] */
    (xdc_Char)0x52,  /* [6226] */
    (xdc_Char)0x52,  /* [6227] */
    (xdc_Char)0x4f,  /* [6228] */
    (xdc_Char)0x52,  /* [6229] */
    (xdc_Char)0x3a,  /* [6230] */
    (xdc_Char)0x20,  /* [6231] */
    (xdc_Char)0x55,  /* [6232] */
    (xdc_Char)0x6e,  /* [6233] */
    (xdc_Char)0x65,  /* [6234] */
    (xdc_Char)0x78,  /* [6235] */
    (xdc_Char)0x70,  /* [6236] */
    (xdc_Char)0x65,  /* [6237] */
    (xdc_Char)0x63,  /* [6238] */
    (xdc_Char)0x74,  /* [6239] */
    (xdc_Char)0x65,  /* [6240] */
    (xdc_Char)0x64,  /* [6241] */
    (xdc_Char)0x20,  /* [6242] */
    (xdc_Char)0x49,  /* [6243] */
    (xdc_Char)0x6e,  /* [6244] */
    (xdc_Char)0x74,  /* [6245] */
    (xdc_Char)0x65,  /* [6246] */
    (xdc_Char)0x72,  /* [6247] */
    (xdc_Char)0x72,  /* [6248] */
    (xdc_Char)0x75,  /* [6249] */
    (xdc_Char)0x70,  /* [6250] */
    (xdc_Char)0x74,  /* [6251] */
    (xdc_Char)0x20,  /* [6252] */
    (xdc_Char)0x61,  /* [6253] */
    (xdc_Char)0x74,  /* [6254] */
    (xdc_Char)0x20,  /* [6255] */
    (xdc_Char)0x25,  /* [6256] */
    (xdc_Char)0x24,  /* [6257] */
    (xdc_Char)0x46,  /* [6258] */
    (xdc_Char)0x2e,  /* [6259] */
    (xdc_Char)0x0,  /* [6260] */
    (xdc_Char)0x45,  /* [6261] */
    (xdc_Char)0x52,  /* [6262] */
    (xdc_Char)0x52,  /* [6263] */
    (xdc_Char)0x4f,  /* [6264] */
    (xdc_Char)0x52,  /* [6265] */
    (xdc_Char)0x3a,  /* [6266] */
    (xdc_Char)0x20,  /* [6267] */
    (xdc_Char)0x4d,  /* [6268] */
    (xdc_Char)0x65,  /* [6269] */
    (xdc_Char)0x6d,  /* [6270] */
    (xdc_Char)0x6f,  /* [6271] */
    (xdc_Char)0x72,  /* [6272] */
    (xdc_Char)0x79,  /* [6273] */
    (xdc_Char)0x20,  /* [6274] */
    (xdc_Char)0x41,  /* [6275] */
    (xdc_Char)0x63,  /* [6276] */
    (xdc_Char)0x63,  /* [6277] */
    (xdc_Char)0x65,  /* [6278] */
    (xdc_Char)0x73,  /* [6279] */
    (xdc_Char)0x73,  /* [6280] */
    (xdc_Char)0x20,  /* [6281] */
    (xdc_Char)0x46,  /* [6282] */
    (xdc_Char)0x61,  /* [6283] */
    (xdc_Char)0x75,  /* [6284] */
    (xdc_Char)0x6c,  /* [6285] */
    (xdc_Char)0x74,  /* [6286] */
    (xdc_Char)0x20,  /* [6287] */
    (xdc_Char)0x61,  /* [6288] */
    (xdc_Char)0x74,  /* [6289] */
    (xdc_Char)0x20,  /* [6290] */
    (xdc_Char)0x25,  /* [6291] */
    (xdc_Char)0x24,  /* [6292] */
    (xdc_Char)0x46,  /* [6293] */
    (xdc_Char)0x2e,  /* [6294] */
    (xdc_Char)0x20,  /* [6295] */
    (xdc_Char)0x5b,  /* [6296] */
    (xdc_Char)0x41,  /* [6297] */
    (xdc_Char)0x44,  /* [6298] */
    (xdc_Char)0x52,  /* [6299] */
    (xdc_Char)0x53,  /* [6300] */
    (xdc_Char)0x5d,  /* [6301] */
    (xdc_Char)0x30,  /* [6302] */
    (xdc_Char)0x78,  /* [6303] */
    (xdc_Char)0x25,  /* [6304] */
    (xdc_Char)0x78,  /* [6305] */
    (xdc_Char)0x0,  /* [6306] */
    (xdc_Char)0x45,  /* [6307] */
    (xdc_Char)0x52,  /* [6308] */
    (xdc_Char)0x52,  /* [6309] */
    (xdc_Char)0x4f,  /* [6310] */
    (xdc_Char)0x52,  /* [6311] */
    (xdc_Char)0x3a,  /* [6312] */
    (xdc_Char)0x20,  /* [6313] */
    (xdc_Char)0x53,  /* [6314] */
    (xdc_Char)0x65,  /* [6315] */
    (xdc_Char)0x63,  /* [6316] */
    (xdc_Char)0x75,  /* [6317] */
    (xdc_Char)0x72,  /* [6318] */
    (xdc_Char)0x69,  /* [6319] */
    (xdc_Char)0x74,  /* [6320] */
    (xdc_Char)0x79,  /* [6321] */
    (xdc_Char)0x20,  /* [6322] */
    (xdc_Char)0x45,  /* [6323] */
    (xdc_Char)0x78,  /* [6324] */
    (xdc_Char)0x63,  /* [6325] */
    (xdc_Char)0x65,  /* [6326] */
    (xdc_Char)0x70,  /* [6327] */
    (xdc_Char)0x74,  /* [6328] */
    (xdc_Char)0x69,  /* [6329] */
    (xdc_Char)0x6f,  /* [6330] */
    (xdc_Char)0x6e,  /* [6331] */
    (xdc_Char)0x20,  /* [6332] */
    (xdc_Char)0x61,  /* [6333] */
    (xdc_Char)0x74,  /* [6334] */
    (xdc_Char)0x20,  /* [6335] */
    (xdc_Char)0x25,  /* [6336] */
    (xdc_Char)0x24,  /* [6337] */
    (xdc_Char)0x46,  /* [6338] */
    (xdc_Char)0x2e,  /* [6339] */
    (xdc_Char)0x0,  /* [6340] */
    (xdc_Char)0x45,  /* [6341] */
    (xdc_Char)0x52,  /* [6342] */
    (xdc_Char)0x52,  /* [6343] */
    (xdc_Char)0x4f,  /* [6344] */
    (xdc_Char)0x52,  /* [6345] */
    (xdc_Char)0x3a,  /* [6346] */
    (xdc_Char)0x20,  /* [6347] */
    (xdc_Char)0x44,  /* [6348] */
    (xdc_Char)0x69,  /* [6349] */
    (xdc_Char)0x76,  /* [6350] */
    (xdc_Char)0x69,  /* [6351] */
    (xdc_Char)0x73,  /* [6352] */
    (xdc_Char)0x69,  /* [6353] */
    (xdc_Char)0x6f,  /* [6354] */
    (xdc_Char)0x6e,  /* [6355] */
    (xdc_Char)0x20,  /* [6356] */
    (xdc_Char)0x62,  /* [6357] */
    (xdc_Char)0x79,  /* [6358] */
    (xdc_Char)0x20,  /* [6359] */
    (xdc_Char)0x7a,  /* [6360] */
    (xdc_Char)0x65,  /* [6361] */
    (xdc_Char)0x72,  /* [6362] */
    (xdc_Char)0x6f,  /* [6363] */
    (xdc_Char)0x20,  /* [6364] */
    (xdc_Char)0x61,  /* [6365] */
    (xdc_Char)0x74,  /* [6366] */
    (xdc_Char)0x20,  /* [6367] */
    (xdc_Char)0x25,  /* [6368] */
    (xdc_Char)0x24,  /* [6369] */
    (xdc_Char)0x46,  /* [6370] */
    (xdc_Char)0x2e,  /* [6371] */
    (xdc_Char)0x0,  /* [6372] */
    (xdc_Char)0x45,  /* [6373] */
    (xdc_Char)0x52,  /* [6374] */
    (xdc_Char)0x52,  /* [6375] */
    (xdc_Char)0x4f,  /* [6376] */
    (xdc_Char)0x52,  /* [6377] */
    (xdc_Char)0x3a,  /* [6378] */
    (xdc_Char)0x20,  /* [6379] */
    (xdc_Char)0x4f,  /* [6380] */
    (xdc_Char)0x76,  /* [6381] */
    (xdc_Char)0x65,  /* [6382] */
    (xdc_Char)0x72,  /* [6383] */
    (xdc_Char)0x66,  /* [6384] */
    (xdc_Char)0x6c,  /* [6385] */
    (xdc_Char)0x6f,  /* [6386] */
    (xdc_Char)0x77,  /* [6387] */
    (xdc_Char)0x20,  /* [6388] */
    (xdc_Char)0x65,  /* [6389] */
    (xdc_Char)0x78,  /* [6390] */
    (xdc_Char)0x63,  /* [6391] */
    (xdc_Char)0x65,  /* [6392] */
    (xdc_Char)0x70,  /* [6393] */
    (xdc_Char)0x74,  /* [6394] */
    (xdc_Char)0x69,  /* [6395] */
    (xdc_Char)0x6f,  /* [6396] */
    (xdc_Char)0x6e,  /* [6397] */
    (xdc_Char)0x20,  /* [6398] */
    (xdc_Char)0x61,  /* [6399] */
    (xdc_Char)0x74,  /* [6400] */
    (xdc_Char)0x20,  /* [6401] */
    (xdc_Char)0x25,  /* [6402] */
    (xdc_Char)0x24,  /* [6403] */
    (xdc_Char)0x46,  /* [6404] */
    (xdc_Char)0x2e,  /* [6405] */
    (xdc_Char)0x0,  /* [6406] */
    (xdc_Char)0x45,  /* [6407] */
    (xdc_Char)0x52,  /* [6408] */
    (xdc_Char)0x52,  /* [6409] */
    (xdc_Char)0x4f,  /* [6410] */
    (xdc_Char)0x52,  /* [6411] */
    (xdc_Char)0x3a,  /* [6412] */
    (xdc_Char)0x20,  /* [6413] */
    (xdc_Char)0x49,  /* [6414] */
    (xdc_Char)0x6e,  /* [6415] */
    (xdc_Char)0x64,  /* [6416] */
    (xdc_Char)0x65,  /* [6417] */
    (xdc_Char)0x78,  /* [6418] */
    (xdc_Char)0x20,  /* [6419] */
    (xdc_Char)0x6f,  /* [6420] */
    (xdc_Char)0x75,  /* [6421] */
    (xdc_Char)0x74,  /* [6422] */
    (xdc_Char)0x20,  /* [6423] */
    (xdc_Char)0x6f,  /* [6424] */
    (xdc_Char)0x66,  /* [6425] */
    (xdc_Char)0x20,  /* [6426] */
    (xdc_Char)0x72,  /* [6427] */
    (xdc_Char)0x61,  /* [6428] */
    (xdc_Char)0x6e,  /* [6429] */
    (xdc_Char)0x67,  /* [6430] */
    (xdc_Char)0x65,  /* [6431] */
    (xdc_Char)0x20,  /* [6432] */
    (xdc_Char)0x61,  /* [6433] */
    (xdc_Char)0x74,  /* [6434] */
    (xdc_Char)0x20,  /* [6435] */
    (xdc_Char)0x25,  /* [6436] */
    (xdc_Char)0x24,  /* [6437] */
    (xdc_Char)0x46,  /* [6438] */
    (xdc_Char)0x2e,  /* [6439] */
    (xdc_Char)0x20,  /* [6440] */
    (xdc_Char)0x5b,  /* [6441] */
    (xdc_Char)0x49,  /* [6442] */
    (xdc_Char)0x4e,  /* [6443] */
    (xdc_Char)0x44,  /* [6444] */
    (xdc_Char)0x45,  /* [6445] */
    (xdc_Char)0x58,  /* [6446] */
    (xdc_Char)0x5d,  /* [6447] */
    (xdc_Char)0x30,  /* [6448] */
    (xdc_Char)0x78,  /* [6449] */
    (xdc_Char)0x25,  /* [6450] */
    (xdc_Char)0x78,  /* [6451] */
    (xdc_Char)0x0,  /* [6452] */
    (xdc_Char)0x45,  /* [6453] */
    (xdc_Char)0x52,  /* [6454] */
    (xdc_Char)0x52,  /* [6455] */
    (xdc_Char)0x4f,  /* [6456] */
    (xdc_Char)0x52,  /* [6457] */
    (xdc_Char)0x3a,  /* [6458] */
    (xdc_Char)0x20,  /* [6459] */
    (xdc_Char)0x41,  /* [6460] */
    (xdc_Char)0x74,  /* [6461] */
    (xdc_Char)0x74,  /* [6462] */
    (xdc_Char)0x65,  /* [6463] */
    (xdc_Char)0x6d,  /* [6464] */
    (xdc_Char)0x70,  /* [6465] */
    (xdc_Char)0x74,  /* [6466] */
    (xdc_Char)0x20,  /* [6467] */
    (xdc_Char)0x74,  /* [6468] */
    (xdc_Char)0x6f,  /* [6469] */
    (xdc_Char)0x20,  /* [6470] */
    (xdc_Char)0x61,  /* [6471] */
    (xdc_Char)0x63,  /* [6472] */
    (xdc_Char)0x63,  /* [6473] */
    (xdc_Char)0x65,  /* [6474] */
    (xdc_Char)0x73,  /* [6475] */
    (xdc_Char)0x73,  /* [6476] */
    (xdc_Char)0x20,  /* [6477] */
    (xdc_Char)0x66,  /* [6478] */
    (xdc_Char)0x65,  /* [6479] */
    (xdc_Char)0x61,  /* [6480] */
    (xdc_Char)0x74,  /* [6481] */
    (xdc_Char)0x75,  /* [6482] */
    (xdc_Char)0x72,  /* [6483] */
    (xdc_Char)0x65,  /* [6484] */
    (xdc_Char)0x20,  /* [6485] */
    (xdc_Char)0x74,  /* [6486] */
    (xdc_Char)0x68,  /* [6487] */
    (xdc_Char)0x61,  /* [6488] */
    (xdc_Char)0x74,  /* [6489] */
    (xdc_Char)0x20,  /* [6490] */
    (xdc_Char)0x69,  /* [6491] */
    (xdc_Char)0x73,  /* [6492] */
    (xdc_Char)0x20,  /* [6493] */
    (xdc_Char)0x6e,  /* [6494] */
    (xdc_Char)0x6f,  /* [6495] */
    (xdc_Char)0x74,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x69,  /* [6498] */
    (xdc_Char)0x6d,  /* [6499] */
    (xdc_Char)0x70,  /* [6500] */
    (xdc_Char)0x6c,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x6d,  /* [6503] */
    (xdc_Char)0x65,  /* [6504] */
    (xdc_Char)0x6e,  /* [6505] */
    (xdc_Char)0x74,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x64,  /* [6508] */
    (xdc_Char)0x20,  /* [6509] */
    (xdc_Char)0x61,  /* [6510] */
    (xdc_Char)0x74,  /* [6511] */
    (xdc_Char)0x20,  /* [6512] */
    (xdc_Char)0x25,  /* [6513] */
    (xdc_Char)0x24,  /* [6514] */
    (xdc_Char)0x46,  /* [6515] */
    (xdc_Char)0x2e,  /* [6516] */
    (xdc_Char)0x0,  /* [6517] */
    (xdc_Char)0x45,  /* [6518] */
    (xdc_Char)0x52,  /* [6519] */
    (xdc_Char)0x52,  /* [6520] */
    (xdc_Char)0x4f,  /* [6521] */
    (xdc_Char)0x52,  /* [6522] */
    (xdc_Char)0x3a,  /* [6523] */
    (xdc_Char)0x20,  /* [6524] */
    (xdc_Char)0x53,  /* [6525] */
    (xdc_Char)0x74,  /* [6526] */
    (xdc_Char)0x61,  /* [6527] */
    (xdc_Char)0x63,  /* [6528] */
    (xdc_Char)0x6b,  /* [6529] */
    (xdc_Char)0x20,  /* [6530] */
    (xdc_Char)0x4f,  /* [6531] */
    (xdc_Char)0x76,  /* [6532] */
    (xdc_Char)0x65,  /* [6533] */
    (xdc_Char)0x72,  /* [6534] */
    (xdc_Char)0x66,  /* [6535] */
    (xdc_Char)0x6c,  /* [6536] */
    (xdc_Char)0x6f,  /* [6537] */
    (xdc_Char)0x77,  /* [6538] */
    (xdc_Char)0x20,  /* [6539] */
    (xdc_Char)0x64,  /* [6540] */
    (xdc_Char)0x65,  /* [6541] */
    (xdc_Char)0x74,  /* [6542] */
    (xdc_Char)0x65,  /* [6543] */
    (xdc_Char)0x63,  /* [6544] */
    (xdc_Char)0x74,  /* [6545] */
    (xdc_Char)0x65,  /* [6546] */
    (xdc_Char)0x64,  /* [6547] */
    (xdc_Char)0x20,  /* [6548] */
    (xdc_Char)0x61,  /* [6549] */
    (xdc_Char)0x74,  /* [6550] */
    (xdc_Char)0x20,  /* [6551] */
    (xdc_Char)0x25,  /* [6552] */
    (xdc_Char)0x24,  /* [6553] */
    (xdc_Char)0x46,  /* [6554] */
    (xdc_Char)0x2e,  /* [6555] */
    (xdc_Char)0x0,  /* [6556] */
    (xdc_Char)0x45,  /* [6557] */
    (xdc_Char)0x52,  /* [6558] */
    (xdc_Char)0x52,  /* [6559] */
    (xdc_Char)0x4f,  /* [6560] */
    (xdc_Char)0x52,  /* [6561] */
    (xdc_Char)0x3a,  /* [6562] */
    (xdc_Char)0x20,  /* [6563] */
    (xdc_Char)0x49,  /* [6564] */
    (xdc_Char)0x6c,  /* [6565] */
    (xdc_Char)0x6c,  /* [6566] */
    (xdc_Char)0x65,  /* [6567] */
    (xdc_Char)0x67,  /* [6568] */
    (xdc_Char)0x61,  /* [6569] */
    (xdc_Char)0x6c,  /* [6570] */
    (xdc_Char)0x20,  /* [6571] */
    (xdc_Char)0x49,  /* [6572] */
    (xdc_Char)0x6e,  /* [6573] */
    (xdc_Char)0x73,  /* [6574] */
    (xdc_Char)0x74,  /* [6575] */
    (xdc_Char)0x72,  /* [6576] */
    (xdc_Char)0x75,  /* [6577] */
    (xdc_Char)0x63,  /* [6578] */
    (xdc_Char)0x74,  /* [6579] */
    (xdc_Char)0x69,  /* [6580] */
    (xdc_Char)0x6f,  /* [6581] */
    (xdc_Char)0x6e,  /* [6582] */
    (xdc_Char)0x20,  /* [6583] */
    (xdc_Char)0x65,  /* [6584] */
    (xdc_Char)0x78,  /* [6585] */
    (xdc_Char)0x65,  /* [6586] */
    (xdc_Char)0x63,  /* [6587] */
    (xdc_Char)0x75,  /* [6588] */
    (xdc_Char)0x74,  /* [6589] */
    (xdc_Char)0x65,  /* [6590] */
    (xdc_Char)0x64,  /* [6591] */
    (xdc_Char)0x20,  /* [6592] */
    (xdc_Char)0x61,  /* [6593] */
    (xdc_Char)0x74,  /* [6594] */
    (xdc_Char)0x20,  /* [6595] */
    (xdc_Char)0x25,  /* [6596] */
    (xdc_Char)0x24,  /* [6597] */
    (xdc_Char)0x46,  /* [6598] */
    (xdc_Char)0x2e,  /* [6599] */
    (xdc_Char)0x0,  /* [6600] */
    (xdc_Char)0x45,  /* [6601] */
    (xdc_Char)0x52,  /* [6602] */
    (xdc_Char)0x52,  /* [6603] */
    (xdc_Char)0x4f,  /* [6604] */
    (xdc_Char)0x52,  /* [6605] */
    (xdc_Char)0x3a,  /* [6606] */
    (xdc_Char)0x20,  /* [6607] */
    (xdc_Char)0x45,  /* [6608] */
    (xdc_Char)0x6e,  /* [6609] */
    (xdc_Char)0x74,  /* [6610] */
    (xdc_Char)0x72,  /* [6611] */
    (xdc_Char)0x79,  /* [6612] */
    (xdc_Char)0x20,  /* [6613] */
    (xdc_Char)0x50,  /* [6614] */
    (xdc_Char)0x6f,  /* [6615] */
    (xdc_Char)0x69,  /* [6616] */
    (xdc_Char)0x6e,  /* [6617] */
    (xdc_Char)0x74,  /* [6618] */
    (xdc_Char)0x20,  /* [6619] */
    (xdc_Char)0x4e,  /* [6620] */
    (xdc_Char)0x6f,  /* [6621] */
    (xdc_Char)0x74,  /* [6622] */
    (xdc_Char)0x20,  /* [6623] */
    (xdc_Char)0x46,  /* [6624] */
    (xdc_Char)0x6f,  /* [6625] */
    (xdc_Char)0x75,  /* [6626] */
    (xdc_Char)0x6e,  /* [6627] */
    (xdc_Char)0x64,  /* [6628] */
    (xdc_Char)0x20,  /* [6629] */
    (xdc_Char)0x61,  /* [6630] */
    (xdc_Char)0x74,  /* [6631] */
    (xdc_Char)0x20,  /* [6632] */
    (xdc_Char)0x25,  /* [6633] */
    (xdc_Char)0x24,  /* [6634] */
    (xdc_Char)0x46,  /* [6635] */
    (xdc_Char)0x2e,  /* [6636] */
    (xdc_Char)0x0,  /* [6637] */
    (xdc_Char)0x45,  /* [6638] */
    (xdc_Char)0x52,  /* [6639] */
    (xdc_Char)0x52,  /* [6640] */
    (xdc_Char)0x4f,  /* [6641] */
    (xdc_Char)0x52,  /* [6642] */
    (xdc_Char)0x3a,  /* [6643] */
    (xdc_Char)0x20,  /* [6644] */
    (xdc_Char)0x4d,  /* [6645] */
    (xdc_Char)0x6f,  /* [6646] */
    (xdc_Char)0x64,  /* [6647] */
    (xdc_Char)0x75,  /* [6648] */
    (xdc_Char)0x6c,  /* [6649] */
    (xdc_Char)0x65,  /* [6650] */
    (xdc_Char)0x20,  /* [6651] */
    (xdc_Char)0x6e,  /* [6652] */
    (xdc_Char)0x6f,  /* [6653] */
    (xdc_Char)0x74,  /* [6654] */
    (xdc_Char)0x20,  /* [6655] */
    (xdc_Char)0x66,  /* [6656] */
    (xdc_Char)0x6f,  /* [6657] */
    (xdc_Char)0x75,  /* [6658] */
    (xdc_Char)0x6e,  /* [6659] */
    (xdc_Char)0x64,  /* [6660] */
    (xdc_Char)0x20,  /* [6661] */
    (xdc_Char)0x61,  /* [6662] */
    (xdc_Char)0x74,  /* [6663] */
    (xdc_Char)0x20,  /* [6664] */
    (xdc_Char)0x25,  /* [6665] */
    (xdc_Char)0x24,  /* [6666] */
    (xdc_Char)0x46,  /* [6667] */
    (xdc_Char)0x2e,  /* [6668] */
    (xdc_Char)0x20,  /* [6669] */
    (xdc_Char)0x5b,  /* [6670] */
    (xdc_Char)0x4d,  /* [6671] */
    (xdc_Char)0x4f,  /* [6672] */
    (xdc_Char)0x44,  /* [6673] */
    (xdc_Char)0x55,  /* [6674] */
    (xdc_Char)0x4c,  /* [6675] */
    (xdc_Char)0x45,  /* [6676] */
    (xdc_Char)0x5f,  /* [6677] */
    (xdc_Char)0x49,  /* [6678] */
    (xdc_Char)0x44,  /* [6679] */
    (xdc_Char)0x5d,  /* [6680] */
    (xdc_Char)0x30,  /* [6681] */
    (xdc_Char)0x78,  /* [6682] */
    (xdc_Char)0x25,  /* [6683] */
    (xdc_Char)0x78,  /* [6684] */
    (xdc_Char)0x2e,  /* [6685] */
    (xdc_Char)0x0,  /* [6686] */
    (xdc_Char)0x45,  /* [6687] */
    (xdc_Char)0x52,  /* [6688] */
    (xdc_Char)0x52,  /* [6689] */
    (xdc_Char)0x4f,  /* [6690] */
    (xdc_Char)0x52,  /* [6691] */
    (xdc_Char)0x3a,  /* [6692] */
    (xdc_Char)0x20,  /* [6693] */
    (xdc_Char)0x46,  /* [6694] */
    (xdc_Char)0x6c,  /* [6695] */
    (xdc_Char)0x6f,  /* [6696] */
    (xdc_Char)0x61,  /* [6697] */
    (xdc_Char)0x74,  /* [6698] */
    (xdc_Char)0x69,  /* [6699] */
    (xdc_Char)0x6e,  /* [6700] */
    (xdc_Char)0x67,  /* [6701] */
    (xdc_Char)0x20,  /* [6702] */
    (xdc_Char)0x50,  /* [6703] */
    (xdc_Char)0x6f,  /* [6704] */
    (xdc_Char)0x69,  /* [6705] */
    (xdc_Char)0x6e,  /* [6706] */
    (xdc_Char)0x74,  /* [6707] */
    (xdc_Char)0x20,  /* [6708] */
    (xdc_Char)0x45,  /* [6709] */
    (xdc_Char)0x72,  /* [6710] */
    (xdc_Char)0x72,  /* [6711] */
    (xdc_Char)0x6f,  /* [6712] */
    (xdc_Char)0x72,  /* [6713] */
    (xdc_Char)0x20,  /* [6714] */
    (xdc_Char)0x61,  /* [6715] */
    (xdc_Char)0x74,  /* [6716] */
    (xdc_Char)0x20,  /* [6717] */
    (xdc_Char)0x25,  /* [6718] */
    (xdc_Char)0x24,  /* [6719] */
    (xdc_Char)0x46,  /* [6720] */
    (xdc_Char)0x2e,  /* [6721] */
    (xdc_Char)0x0,  /* [6722] */
    (xdc_Char)0x45,  /* [6723] */
    (xdc_Char)0x52,  /* [6724] */
    (xdc_Char)0x52,  /* [6725] */
    (xdc_Char)0x4f,  /* [6726] */
    (xdc_Char)0x52,  /* [6727] */
    (xdc_Char)0x3a,  /* [6728] */
    (xdc_Char)0x20,  /* [6729] */
    (xdc_Char)0x49,  /* [6730] */
    (xdc_Char)0x6e,  /* [6731] */
    (xdc_Char)0x76,  /* [6732] */
    (xdc_Char)0x61,  /* [6733] */
    (xdc_Char)0x6c,  /* [6734] */
    (xdc_Char)0x69,  /* [6735] */
    (xdc_Char)0x64,  /* [6736] */
    (xdc_Char)0x20,  /* [6737] */
    (xdc_Char)0x50,  /* [6738] */
    (xdc_Char)0x61,  /* [6739] */
    (xdc_Char)0x72,  /* [6740] */
    (xdc_Char)0x61,  /* [6741] */
    (xdc_Char)0x6d,  /* [6742] */
    (xdc_Char)0x65,  /* [6743] */
    (xdc_Char)0x74,  /* [6744] */
    (xdc_Char)0x65,  /* [6745] */
    (xdc_Char)0x72,  /* [6746] */
    (xdc_Char)0x20,  /* [6747] */
    (xdc_Char)0x61,  /* [6748] */
    (xdc_Char)0x74,  /* [6749] */
    (xdc_Char)0x20,  /* [6750] */
    (xdc_Char)0x25,  /* [6751] */
    (xdc_Char)0x24,  /* [6752] */
    (xdc_Char)0x46,  /* [6753] */
    (xdc_Char)0x2e,  /* [6754] */
    (xdc_Char)0x20,  /* [6755] */
    (xdc_Char)0x5b,  /* [6756] */
    (xdc_Char)0x50,  /* [6757] */
    (xdc_Char)0x61,  /* [6758] */
    (xdc_Char)0x72,  /* [6759] */
    (xdc_Char)0x61,  /* [6760] */
    (xdc_Char)0x6d,  /* [6761] */
    (xdc_Char)0x4e,  /* [6762] */
    (xdc_Char)0x75,  /* [6763] */
    (xdc_Char)0x6d,  /* [6764] */
    (xdc_Char)0x5d,  /* [6765] */
    (xdc_Char)0x25,  /* [6766] */
    (xdc_Char)0x64,  /* [6767] */
    (xdc_Char)0x20,  /* [6768] */
    (xdc_Char)0x5b,  /* [6769] */
    (xdc_Char)0x50,  /* [6770] */
    (xdc_Char)0x61,  /* [6771] */
    (xdc_Char)0x72,  /* [6772] */
    (xdc_Char)0x61,  /* [6773] */
    (xdc_Char)0x6d,  /* [6774] */
    (xdc_Char)0x56,  /* [6775] */
    (xdc_Char)0x61,  /* [6776] */
    (xdc_Char)0x6c,  /* [6777] */
    (xdc_Char)0x75,  /* [6778] */
    (xdc_Char)0x65,  /* [6779] */
    (xdc_Char)0x5d,  /* [6780] */
    (xdc_Char)0x30,  /* [6781] */
    (xdc_Char)0x78,  /* [6782] */
    (xdc_Char)0x25,  /* [6783] */
    (xdc_Char)0x78,  /* [6784] */
    (xdc_Char)0x0,  /* [6785] */
    (xdc_Char)0x57,  /* [6786] */
    (xdc_Char)0x41,  /* [6787] */
    (xdc_Char)0x52,  /* [6788] */
    (xdc_Char)0x4e,  /* [6789] */
    (xdc_Char)0x49,  /* [6790] */
    (xdc_Char)0x4e,  /* [6791] */
    (xdc_Char)0x47,  /* [6792] */
    (xdc_Char)0x3a,  /* [6793] */
    (xdc_Char)0x20,  /* [6794] */
    (xdc_Char)0x45,  /* [6795] */
    (xdc_Char)0x76,  /* [6796] */
    (xdc_Char)0x65,  /* [6797] */
    (xdc_Char)0x6e,  /* [6798] */
    (xdc_Char)0x74,  /* [6799] */
    (xdc_Char)0x43,  /* [6800] */
    (xdc_Char)0x6f,  /* [6801] */
    (xdc_Char)0x64,  /* [6802] */
    (xdc_Char)0x65,  /* [6803] */
    (xdc_Char)0x3a,  /* [6804] */
    (xdc_Char)0x30,  /* [6805] */
    (xdc_Char)0x78,  /* [6806] */
    (xdc_Char)0x25,  /* [6807] */
    (xdc_Char)0x78,  /* [6808] */
    (xdc_Char)0x0,  /* [6809] */
    (xdc_Char)0x57,  /* [6810] */
    (xdc_Char)0x41,  /* [6811] */
    (xdc_Char)0x52,  /* [6812] */
    (xdc_Char)0x4e,  /* [6813] */
    (xdc_Char)0x49,  /* [6814] */
    (xdc_Char)0x4e,  /* [6815] */
    (xdc_Char)0x47,  /* [6816] */
    (xdc_Char)0x3a,  /* [6817] */
    (xdc_Char)0x20,  /* [6818] */
    (xdc_Char)0x45,  /* [6819] */
    (xdc_Char)0x76,  /* [6820] */
    (xdc_Char)0x65,  /* [6821] */
    (xdc_Char)0x6e,  /* [6822] */
    (xdc_Char)0x74,  /* [6823] */
    (xdc_Char)0x43,  /* [6824] */
    (xdc_Char)0x6f,  /* [6825] */
    (xdc_Char)0x64,  /* [6826] */
    (xdc_Char)0x65,  /* [6827] */
    (xdc_Char)0x3a,  /* [6828] */
    (xdc_Char)0x30,  /* [6829] */
    (xdc_Char)0x78,  /* [6830] */
    (xdc_Char)0x25,  /* [6831] */
    (xdc_Char)0x78,  /* [6832] */
    (xdc_Char)0x2e,  /* [6833] */
    (xdc_Char)0x20,  /* [6834] */
    (xdc_Char)0x25,  /* [6835] */
    (xdc_Char)0x24,  /* [6836] */
    (xdc_Char)0x53,  /* [6837] */
    (xdc_Char)0x0,  /* [6838] */
    (xdc_Char)0x49,  /* [6839] */
    (xdc_Char)0x4e,  /* [6840] */
    (xdc_Char)0x46,  /* [6841] */
    (xdc_Char)0x4f,  /* [6842] */
    (xdc_Char)0x3a,  /* [6843] */
    (xdc_Char)0x20,  /* [6844] */
    (xdc_Char)0x45,  /* [6845] */
    (xdc_Char)0x76,  /* [6846] */
    (xdc_Char)0x65,  /* [6847] */
    (xdc_Char)0x6e,  /* [6848] */
    (xdc_Char)0x74,  /* [6849] */
    (xdc_Char)0x43,  /* [6850] */
    (xdc_Char)0x6f,  /* [6851] */
    (xdc_Char)0x64,  /* [6852] */
    (xdc_Char)0x65,  /* [6853] */
    (xdc_Char)0x3a,  /* [6854] */
    (xdc_Char)0x20,  /* [6855] */
    (xdc_Char)0x30,  /* [6856] */
    (xdc_Char)0x78,  /* [6857] */
    (xdc_Char)0x25,  /* [6858] */
    (xdc_Char)0x78,  /* [6859] */
    (xdc_Char)0x0,  /* [6860] */
    (xdc_Char)0x49,  /* [6861] */
    (xdc_Char)0x4e,  /* [6862] */
    (xdc_Char)0x46,  /* [6863] */
    (xdc_Char)0x4f,  /* [6864] */
    (xdc_Char)0x3a,  /* [6865] */
    (xdc_Char)0x20,  /* [6866] */
    (xdc_Char)0x45,  /* [6867] */
    (xdc_Char)0x76,  /* [6868] */
    (xdc_Char)0x65,  /* [6869] */
    (xdc_Char)0x6e,  /* [6870] */
    (xdc_Char)0x74,  /* [6871] */
    (xdc_Char)0x43,  /* [6872] */
    (xdc_Char)0x6f,  /* [6873] */
    (xdc_Char)0x64,  /* [6874] */
    (xdc_Char)0x65,  /* [6875] */
    (xdc_Char)0x3a,  /* [6876] */
    (xdc_Char)0x30,  /* [6877] */
    (xdc_Char)0x78,  /* [6878] */
    (xdc_Char)0x25,  /* [6879] */
    (xdc_Char)0x78,  /* [6880] */
    (xdc_Char)0x2e,  /* [6881] */
    (xdc_Char)0x20,  /* [6882] */
    (xdc_Char)0x20,  /* [6883] */
    (xdc_Char)0x25,  /* [6884] */
    (xdc_Char)0x24,  /* [6885] */
    (xdc_Char)0x53,  /* [6886] */
    (xdc_Char)0x0,  /* [6887] */
    (xdc_Char)0x44,  /* [6888] */
    (xdc_Char)0x45,  /* [6889] */
    (xdc_Char)0x54,  /* [6890] */
    (xdc_Char)0x41,  /* [6891] */
    (xdc_Char)0x49,  /* [6892] */
    (xdc_Char)0x4c,  /* [6893] */
    (xdc_Char)0x3a,  /* [6894] */
    (xdc_Char)0x20,  /* [6895] */
    (xdc_Char)0x45,  /* [6896] */
    (xdc_Char)0x76,  /* [6897] */
    (xdc_Char)0x65,  /* [6898] */
    (xdc_Char)0x6e,  /* [6899] */
    (xdc_Char)0x74,  /* [6900] */
    (xdc_Char)0x43,  /* [6901] */
    (xdc_Char)0x6f,  /* [6902] */
    (xdc_Char)0x64,  /* [6903] */
    (xdc_Char)0x65,  /* [6904] */
    (xdc_Char)0x3a,  /* [6905] */
    (xdc_Char)0x30,  /* [6906] */
    (xdc_Char)0x78,  /* [6907] */
    (xdc_Char)0x25,  /* [6908] */
    (xdc_Char)0x78,  /* [6909] */
    (xdc_Char)0x0,  /* [6910] */
    (xdc_Char)0x44,  /* [6911] */
    (xdc_Char)0x45,  /* [6912] */
    (xdc_Char)0x54,  /* [6913] */
    (xdc_Char)0x41,  /* [6914] */
    (xdc_Char)0x49,  /* [6915] */
    (xdc_Char)0x4c,  /* [6916] */
    (xdc_Char)0x3a,  /* [6917] */
    (xdc_Char)0x20,  /* [6918] */
    (xdc_Char)0x45,  /* [6919] */
    (xdc_Char)0x76,  /* [6920] */
    (xdc_Char)0x65,  /* [6921] */
    (xdc_Char)0x6e,  /* [6922] */
    (xdc_Char)0x74,  /* [6923] */
    (xdc_Char)0x43,  /* [6924] */
    (xdc_Char)0x6f,  /* [6925] */
    (xdc_Char)0x64,  /* [6926] */
    (xdc_Char)0x65,  /* [6927] */
    (xdc_Char)0x3a,  /* [6928] */
    (xdc_Char)0x30,  /* [6929] */
    (xdc_Char)0x78,  /* [6930] */
    (xdc_Char)0x25,  /* [6931] */
    (xdc_Char)0x78,  /* [6932] */
    (xdc_Char)0x2e,  /* [6933] */
    (xdc_Char)0x20,  /* [6934] */
    (xdc_Char)0x20,  /* [6935] */
    (xdc_Char)0x25,  /* [6936] */
    (xdc_Char)0x24,  /* [6937] */
    (xdc_Char)0x53,  /* [6938] */
    (xdc_Char)0x0,  /* [6939] */
    (xdc_Char)0x56,  /* [6940] */
    (xdc_Char)0x41,  /* [6941] */
    (xdc_Char)0x4c,  /* [6942] */
    (xdc_Char)0x55,  /* [6943] */
    (xdc_Char)0x45,  /* [6944] */
    (xdc_Char)0x3d,  /* [6945] */
    (xdc_Char)0x25,  /* [6946] */
    (xdc_Char)0x64,  /* [6947] */
    (xdc_Char)0x20,  /* [6948] */
    (xdc_Char)0x28,  /* [6949] */
    (xdc_Char)0x41,  /* [6950] */
    (xdc_Char)0x75,  /* [6951] */
    (xdc_Char)0x78,  /* [6952] */
    (xdc_Char)0x44,  /* [6953] */
    (xdc_Char)0x61,  /* [6954] */
    (xdc_Char)0x74,  /* [6955] */
    (xdc_Char)0x61,  /* [6956] */
    (xdc_Char)0x3d,  /* [6957] */
    (xdc_Char)0x25,  /* [6958] */
    (xdc_Char)0x64,  /* [6959] */
    (xdc_Char)0x2c,  /* [6960] */
    (xdc_Char)0x20,  /* [6961] */
    (xdc_Char)0x25,  /* [6962] */
    (xdc_Char)0x64,  /* [6963] */
    (xdc_Char)0x29,  /* [6964] */
    (xdc_Char)0x20,  /* [6965] */
    (xdc_Char)0x4b,  /* [6966] */
    (xdc_Char)0x65,  /* [6967] */
    (xdc_Char)0x79,  /* [6968] */
    (xdc_Char)0x3a,  /* [6969] */
    (xdc_Char)0x25,  /* [6970] */
    (xdc_Char)0x24,  /* [6971] */
    (xdc_Char)0x53,  /* [6972] */
    (xdc_Char)0x0,  /* [6973] */
    (xdc_Char)0x54,  /* [6974] */
    (xdc_Char)0x65,  /* [6975] */
    (xdc_Char)0x73,  /* [6976] */
    (xdc_Char)0x74,  /* [6977] */
    (xdc_Char)0x20,  /* [6978] */
    (xdc_Char)0x45,  /* [6979] */
    (xdc_Char)0x76,  /* [6980] */
    (xdc_Char)0x65,  /* [6981] */
    (xdc_Char)0x6e,  /* [6982] */
    (xdc_Char)0x74,  /* [6983] */
    (xdc_Char)0x0,  /* [6984] */
    (xdc_Char)0x4c,  /* [6985] */
    (xdc_Char)0x4d,  /* [6986] */
    (xdc_Char)0x5f,  /* [6987] */
    (xdc_Char)0x62,  /* [6988] */
    (xdc_Char)0x65,  /* [6989] */
    (xdc_Char)0x67,  /* [6990] */
    (xdc_Char)0x69,  /* [6991] */
    (xdc_Char)0x6e,  /* [6992] */
    (xdc_Char)0x3a,  /* [6993] */
    (xdc_Char)0x20,  /* [6994] */
    (xdc_Char)0x68,  /* [6995] */
    (xdc_Char)0x77,  /* [6996] */
    (xdc_Char)0x69,  /* [6997] */
    (xdc_Char)0x3a,  /* [6998] */
    (xdc_Char)0x20,  /* [6999] */
    (xdc_Char)0x30,  /* [7000] */
    (xdc_Char)0x78,  /* [7001] */
    (xdc_Char)0x25,  /* [7002] */
    (xdc_Char)0x78,  /* [7003] */
    (xdc_Char)0x2c,  /* [7004] */
    (xdc_Char)0x20,  /* [7005] */
    (xdc_Char)0x66,  /* [7006] */
    (xdc_Char)0x75,  /* [7007] */
    (xdc_Char)0x6e,  /* [7008] */
    (xdc_Char)0x63,  /* [7009] */
    (xdc_Char)0x3a,  /* [7010] */
    (xdc_Char)0x20,  /* [7011] */
    (xdc_Char)0x30,  /* [7012] */
    (xdc_Char)0x78,  /* [7013] */
    (xdc_Char)0x25,  /* [7014] */
    (xdc_Char)0x78,  /* [7015] */
    (xdc_Char)0x2c,  /* [7016] */
    (xdc_Char)0x20,  /* [7017] */
    (xdc_Char)0x70,  /* [7018] */
    (xdc_Char)0x72,  /* [7019] */
    (xdc_Char)0x65,  /* [7020] */
    (xdc_Char)0x54,  /* [7021] */
    (xdc_Char)0x68,  /* [7022] */
    (xdc_Char)0x72,  /* [7023] */
    (xdc_Char)0x65,  /* [7024] */
    (xdc_Char)0x61,  /* [7025] */
    (xdc_Char)0x64,  /* [7026] */
    (xdc_Char)0x3a,  /* [7027] */
    (xdc_Char)0x20,  /* [7028] */
    (xdc_Char)0x25,  /* [7029] */
    (xdc_Char)0x64,  /* [7030] */
    (xdc_Char)0x2c,  /* [7031] */
    (xdc_Char)0x20,  /* [7032] */
    (xdc_Char)0x69,  /* [7033] */
    (xdc_Char)0x6e,  /* [7034] */
    (xdc_Char)0x74,  /* [7035] */
    (xdc_Char)0x4e,  /* [7036] */
    (xdc_Char)0x75,  /* [7037] */
    (xdc_Char)0x6d,  /* [7038] */
    (xdc_Char)0x3a,  /* [7039] */
    (xdc_Char)0x20,  /* [7040] */
    (xdc_Char)0x25,  /* [7041] */
    (xdc_Char)0x64,  /* [7042] */
    (xdc_Char)0x2c,  /* [7043] */
    (xdc_Char)0x20,  /* [7044] */
    (xdc_Char)0x69,  /* [7045] */
    (xdc_Char)0x72,  /* [7046] */
    (xdc_Char)0x70,  /* [7047] */
    (xdc_Char)0x3a,  /* [7048] */
    (xdc_Char)0x20,  /* [7049] */
    (xdc_Char)0x30,  /* [7050] */
    (xdc_Char)0x78,  /* [7051] */
    (xdc_Char)0x25,  /* [7052] */
    (xdc_Char)0x78,  /* [7053] */
    (xdc_Char)0x0,  /* [7054] */
    (xdc_Char)0x4c,  /* [7055] */
    (xdc_Char)0x44,  /* [7056] */
    (xdc_Char)0x5f,  /* [7057] */
    (xdc_Char)0x65,  /* [7058] */
    (xdc_Char)0x6e,  /* [7059] */
    (xdc_Char)0x64,  /* [7060] */
    (xdc_Char)0x3a,  /* [7061] */
    (xdc_Char)0x20,  /* [7062] */
    (xdc_Char)0x68,  /* [7063] */
    (xdc_Char)0x77,  /* [7064] */
    (xdc_Char)0x69,  /* [7065] */
    (xdc_Char)0x3a,  /* [7066] */
    (xdc_Char)0x20,  /* [7067] */
    (xdc_Char)0x30,  /* [7068] */
    (xdc_Char)0x78,  /* [7069] */
    (xdc_Char)0x25,  /* [7070] */
    (xdc_Char)0x78,  /* [7071] */
    (xdc_Char)0x0,  /* [7072] */
    (xdc_Char)0x78,  /* [7073] */
    (xdc_Char)0x64,  /* [7074] */
    (xdc_Char)0x63,  /* [7075] */
    (xdc_Char)0x2e,  /* [7076] */
    (xdc_Char)0x0,  /* [7077] */
    (xdc_Char)0x72,  /* [7078] */
    (xdc_Char)0x75,  /* [7079] */
    (xdc_Char)0x6e,  /* [7080] */
    (xdc_Char)0x74,  /* [7081] */
    (xdc_Char)0x69,  /* [7082] */
    (xdc_Char)0x6d,  /* [7083] */
    (xdc_Char)0x65,  /* [7084] */
    (xdc_Char)0x2e,  /* [7085] */
    (xdc_Char)0x0,  /* [7086] */
    (xdc_Char)0x4d,  /* [7087] */
    (xdc_Char)0x61,  /* [7088] */
    (xdc_Char)0x69,  /* [7089] */
    (xdc_Char)0x6e,  /* [7090] */
    (xdc_Char)0x0,  /* [7091] */
    (xdc_Char)0x4d,  /* [7092] */
    (xdc_Char)0x65,  /* [7093] */
    (xdc_Char)0x6d,  /* [7094] */
    (xdc_Char)0x6f,  /* [7095] */
    (xdc_Char)0x72,  /* [7096] */
    (xdc_Char)0x79,  /* [7097] */
    (xdc_Char)0x0,  /* [7098] */
    (xdc_Char)0x63,  /* [7099] */
    (xdc_Char)0x6f,  /* [7100] */
    (xdc_Char)0x6e,  /* [7101] */
    (xdc_Char)0x73,  /* [7102] */
    (xdc_Char)0x6f,  /* [7103] */
    (xdc_Char)0x6c,  /* [7104] */
    (xdc_Char)0x65,  /* [7105] */
    (xdc_Char)0x0,  /* [7106] */
    (xdc_Char)0x74,  /* [7107] */
    (xdc_Char)0x69,  /* [7108] */
    (xdc_Char)0x2e,  /* [7109] */
    (xdc_Char)0x73,  /* [7110] */
    (xdc_Char)0x79,  /* [7111] */
    (xdc_Char)0x73,  /* [7112] */
    (xdc_Char)0x62,  /* [7113] */
    (xdc_Char)0x69,  /* [7114] */
    (xdc_Char)0x6f,  /* [7115] */
    (xdc_Char)0x73,  /* [7116] */
    (xdc_Char)0x2e,  /* [7117] */
    (xdc_Char)0x6b,  /* [7118] */
    (xdc_Char)0x6e,  /* [7119] */
    (xdc_Char)0x6c,  /* [7120] */
    (xdc_Char)0x2e,  /* [7121] */
    (xdc_Char)0x54,  /* [7122] */
    (xdc_Char)0x61,  /* [7123] */
    (xdc_Char)0x73,  /* [7124] */
    (xdc_Char)0x6b,  /* [7125] */
    (xdc_Char)0x2e,  /* [7126] */
    (xdc_Char)0x49,  /* [7127] */
    (xdc_Char)0x64,  /* [7128] */
    (xdc_Char)0x6c,  /* [7129] */
    (xdc_Char)0x65,  /* [7130] */
    (xdc_Char)0x54,  /* [7131] */
    (xdc_Char)0x61,  /* [7132] */
    (xdc_Char)0x73,  /* [7133] */
    (xdc_Char)0x6b,  /* [7134] */
    (xdc_Char)0x0,  /* [7135] */
    (xdc_Char)0x4c,  /* [7136] */
    (xdc_Char)0x6f,  /* [7137] */
    (xdc_Char)0x67,  /* [7138] */
    (xdc_Char)0x67,  /* [7139] */
    (xdc_Char)0x65,  /* [7140] */
    (xdc_Char)0x72,  /* [7141] */
    (xdc_Char)0x49,  /* [7142] */
    (xdc_Char)0x64,  /* [7143] */
    (xdc_Char)0x6c,  /* [7144] */
    (xdc_Char)0x65,  /* [7145] */
    (xdc_Char)0x0,  /* [7146] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1ba1,  /* left */
        (xdc_Bits16)0x1ba6,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1baf,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bb4,  /* right */
    },  /* [3] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0xc;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1beb;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x4;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0xd;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0xe;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__startupDoneFxn__C, ".const:xdc_runtime_TimestampNull_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__startupDoneFxn xdc_runtime_TimestampNull_Module__startupDoneFxn__C = ((CT__xdc_runtime_TimestampNull_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysCallback */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysCallback_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysCallback_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysCallback_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysCallback_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysCallback_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysCallback_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.sysbios.LoggerIdle OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_sysbios_LoggerIdle_Object2__ s0; char c; } ti_uia_sysbios_LoggerIdle___S1;
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__DESC__C, ".const:ti_uia_sysbios_LoggerIdle_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_sysbios_LoggerIdle_Object__DESC__C = {
    (Ptr)&ti_uia_sysbios_LoggerIdle_Module__FXNS__C, /* fxnTab */
    &ti_uia_sysbios_LoggerIdle_Module__root__V.link, /* modLink */
    sizeof(ti_uia_sysbios_LoggerIdle___S1) - sizeof(ti_uia_sysbios_LoggerIdle_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_sysbios_LoggerIdle_Object2__), /* objSize */
    (Ptr)&ti_uia_sysbios_LoggerIdle_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_sysbios_LoggerIdle_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 48;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_lm4_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    ti_sysbios_family_arm_lm4_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 42;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 45;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 46;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 31;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 49;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 21;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 24;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 25;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 26;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 27;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.sysbios.LoggerIdle SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_sysbios_LoggerIdle_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_sysbios_LoggerIdle_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_sysbios_LoggerIdle_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_sysbios_LoggerIdle_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_sysbios_LoggerIdle_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_sysbios_LoggerIdle_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_sysbios_LoggerIdle_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_sysbios_LoggerIdle_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_sysbios_LoggerIdle_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_sysbios_LoggerIdle_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_sysbios_LoggerIdle_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_sysbios_LoggerIdle_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 41;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_sysbios_LoggerIdle_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_sysbios_LoggerIdle_Object__ *)oa) + i;
    }

    if (ti_uia_sysbios_LoggerIdle_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_sysbios_LoggerIdle_Object__ *)ti_uia_sysbios_LoggerIdle_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_sysbios_LoggerIdle_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_sysbios_LoggerIdle_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_sysbios_LoggerIdle_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_sysbios_LoggerIdle___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_sysbios_LoggerIdle_Params __prms;
    ti_uia_sysbios_LoggerIdle_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_sysbios_LoggerIdle_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_sysbios_LoggerIdle_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_sysbios_LoggerIdle_Handle ti_uia_sysbios_LoggerIdle_create( const ti_uia_sysbios_LoggerIdle_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_sysbios_LoggerIdle_Params __prms;
    ti_uia_sysbios_LoggerIdle_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_sysbios_LoggerIdle_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_sysbios_LoggerIdle_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_sysbios_LoggerIdle_construct(ti_uia_sysbios_LoggerIdle_Struct *__obj, const ti_uia_sysbios_LoggerIdle_Params *__paramsPtr )
{
    ti_uia_sysbios_LoggerIdle_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_sysbios_LoggerIdle_Params), NULL);
    /* module-specific initialization */
    ti_uia_sysbios_LoggerIdle_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_sysbios_LoggerIdle_destruct(ti_uia_sysbios_LoggerIdle_Struct *obj)
{
    ti_uia_sysbios_LoggerIdle_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, *((ti_uia_sysbios_LoggerIdle_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_sysbios_LoggerIdle_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_sysbios_LoggerIdle_delete(ti_uia_sysbios_LoggerIdle_Handle *instp)
{
    ti_uia_sysbios_LoggerIdle_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysCallback SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysCallback_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysCallback_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle console = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);









