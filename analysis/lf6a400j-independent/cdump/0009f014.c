
void FUN_0009f014(undefined1 param_1,char param_2,ushort param_3,ushort param_4,short param_5,
                 byte param_6,byte *param_7,byte *param_8)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if ((((param_3 < 0x6401) && (0x13ff < param_3)) && (param_4 < 0x9aaf)) &&
     (((0x26aa < param_4 && (param_5 < 0x26ac)) &&
      ((-0x26ac < param_5 && ((8 < param_6 && (DAT_fffec0f0 < 200)))))))) {
    bVar1 = true;
  }
  if (((((param_2 == '\x06') || (param_2 == '\a')) || (param_2 == '\r')) || (param_2 == '\x0e')) &&
     (bVar1)) {
    bVar2 = 0xfe;
    if (DAT_fffec0f1 != 0xff) {
      bVar2 = DAT_fffec0f1;
    }
    DAT_fffec0f1 = bVar2 + 1;
    if (0xfe < DAT_fffec0f1) {
      DAT_fffec0f1 = 0xff;
    }
  }
  *param_7 = DAT_fffec0f1;
  bVar2 = DAT_fffec0f0;
  if (((bVar1) && (DAT_fffec0f2 == '\0')) && (bVar2 = 0xff, DAT_fffec0f0 != 0xff)) {
    bVar2 = DAT_fffec0f0 + 1;
  }
  *param_8 = bVar2;
  DAT_fffec0f2 = param_1;
  DAT_fffec0f0 = bVar2;
  return;
}

