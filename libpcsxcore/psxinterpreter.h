#ifndef __PSX_INTERPRETER_H__
#define __PSX_INTERPRETER_H__

#ifdef __cplusplus
extern "C" {
#endif


static void psxSPECIAL();
static void psxREGIMM();
static void psxJ();
static void psxJAL();
static void psxBEQ();
static void psxBNE();
static void psxBLEZ();
static void psxBGTZ();
static void psxADDI();
static void psxADDIU();
static void psxSLTI();
static void psxSLTIU();
static void psxANDI();
static void psxORI();
static void psxXORI();
static void psxLUI();
static void psxCOP0();
static void psxNULL();
static void psxCOP2();
static void psxLB ();
static void psxLH();
static void psxLWL();
static void psxLW();
static void psxLBU();
static void psxLHU();
static void psxLWR();
static void psxSB ();
static void psxSH();
static void psxSWL();
static void psxSW();
static void psxSWR();
static void psxLWC2();
static void psxSWC2();
static void psxHLE();
static void psxSLL();
static void psxSRL();
static void psxSRA();
static void psxSLLV();
static void psxSRLV();
static void psxSRAV();
static void psxJR();
static void psxJALR();
static void psxSYSCALL();
static void psxLogOn();
static void psxLogOff();
static void psxBeginLog();
static void psxEndLog();
static void psxBREAK();
static void psxMFHI();
static void psxMTHI();
static void psxMFLO();
static void psxMTLO();
static void psxMULT();
static void psxMULTU();
static void psxDIV();
static void psxDIVU();
static void psxADD();
static void psxADDU();
static void psxSUB();
static void psxSUBU();
static void psxAND();
static void psxOR();
static void psxXOR();
static void psxNOR();
static void psxSLT();
static void psxSLTU();
static void psxBLTZ();
static void psxBGEZ();
static void psxBLTZAL();
static void psxBGEZAL(); 
static void psxMFC0();
static void psxCFC0();
static void psxMTC0();
static void psxCTC0();
static void psxRFE();
static void psxBASIC(); 
static void psxRTPS ();
static void psxNCLIP(); 
static void psxOP();
static void psxDPCS();
static void psxINTPL();
static void psxMVMVA();
static void psxNCDS();
static void psxCDP();
static void psxNCDT();
static void psxNCCS();
static void psxCC();
static void psxNCS();
static void psxNCT();
static void psxSQR();
static void psxDCPL();
static void psxDPCT();
static void psxAVSZ3();
static void psxAVSZ4();
static void psxRTPT();
static void psxGPF();
static void psxGPL();
static void psxNCCT();
static void psxMFC2();
static void psxCFC2();
static void psxMTC2();
static void psxCTC2();



#ifdef __cplusplus
}
#endif
#endif