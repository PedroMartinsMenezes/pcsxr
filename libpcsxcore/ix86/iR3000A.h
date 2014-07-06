#ifndef __IR3000A_H__
#define __IR3000A_H__

#ifdef __cplusplus
extern "C" {
#endif


static void recSPECIAL();
static void recREGIMM();
static void recJ();
static void recJAL();
static void recBEQ();
static void recBNE();
static void recBLEZ();
static void recBGTZ();
static void recADDI();
static void recADDIU();
static void recSLTI();
static void recSLTIU();
static void recANDI();
static void recORI();
static void recXORI();
static void recLUI();
static void recCOP0();
static void recNULL();
static void recCOP2();
static void recLB ();
static void recLH();
static void recLWL();
static void recLW();
static void recLBU();
static void recLHU();
static void recLWR();
static void recSB ();
static void recSH();
static void recSWL();
static void recSW();
static void recSWR();
static void recLWC2();
static void recSWC2();
static void recHLE();
static void recSLL();
static void recSRL();
static void recSRA();
static void recSLLV();
static void recSRLV();
static void recSRAV();
static void recJR();
static void recJALR();
static void recSYSCALL();
static void recBREAK();
static void recMFHI();
static void recMTHI();
static void recMFLO();
static void recMTLO();
static void recMULT();
static void recMULTU();
static void recDIV();
static void recDIVU();
static void recADD();
static void recADDU();
static void recSUB();
static void recSUBU();
static void recAND();
static void recOR();
static void recXOR();
static void recNOR();
static void recSLT();
static void recSLTU();
static void recBLTZ();
static void recBGEZ();
static void recBLTZAL();
static void recBGEZAL(); 
static void recMFC0();
static void recCFC0();
static void recMTC0();
static void recCTC0();
static void recRFE();
static void recBASIC(); 
static void recRTPS ();
static void recNCLIP(); 
static void recOP();
static void recDPCS();
static void recINTPL();
static void recMVMVA();
static void recNCDS();
static void recCDP();
static void recNCDT();
static void recNCCS();
static void recCC();
static void recNCS();
static void recNCT();
static void recSQR();
static void recDCPL();
static void recDPCT();
static void recAVSZ3();
static void recAVSZ4();
static void recRTPT();
static void recGPF();
static void recGPL();
static void recNCCT();
static void recMFC2();
static void recCFC2();
static void recMTC2();
static void recCTC2();



#ifdef __cplusplus
}
#endif
#endif