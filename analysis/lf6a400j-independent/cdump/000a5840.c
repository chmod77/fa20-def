
void FUN_000a5840(char param_1,short param_2,short param_3,short param_4,uint param_5,uint param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 uint param_13,undefined1 *param_14)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != '\0') {
    iVar2 = (param_6 & 0xffff) * 2 + (param_5 & 0xffff) * -2;
    iVar1 = 0x7fff;
    if ((iVar2 < 0x8000) && (iVar1 = -0x8000, -0x8001 < iVar2)) {
      iVar1 = iVar2;
    }
    iVar2 = (param_13 & 0xffff) * 2 + (param_5 & 0xffff) * -2;
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    DAT_fffec384 = param_8 == '\0';
    if (!(bool)DAT_fffec384) {
      if (((param_3 == 0x6400) && (0x63ff < param_2)) && (param_7 == '\0')) {
        DAT_fffec384 = 2;
      }
      else if (((param_3 == 0) && (param_2 < 1)) && (param_9 != '\0')) {
        DAT_fffec384 = 3;
      }
      else if (((param_3 == 0) && (param_2 < 1)) && (param_10 != '\0')) {
        DAT_fffec384 = 4;
      }
      else if (((param_3 == (short)iVar2) && (param_2 <= (short)iVar2)) && (param_11 != '\0')) {
        DAT_fffec384 = 5;
      }
      else if (((param_3 == (short)iVar1) && ((short)iVar1 <= param_2)) && (param_11 != '\0')) {
        DAT_fffec384 = 6;
      }
      else if (((param_3 == param_4) && (param_4 <= param_2)) && (param_12 != '\0')) {
        DAT_fffec384 = 7;
      }
      else {
        DAT_fffec384 = 0;
      }
    }
  }
  *param_14 = DAT_fffec384;
  return;
}

