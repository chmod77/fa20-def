
void FUN_000a3818(char *param_1,short *param_2,uint param_3,char param_4,undefined4 param_5,
                 byte *param_6,char *param_7)

{
  uint uVar1;
  char local_78 [4];
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  char cStack_56;
  short asStack_54 [4];
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_c;
  
  local_78[0] = *param_1;
  local_78[1] = param_1[1];
  local_78[2] = param_1[2];
  local_78[3] = param_1[3];
  cStack_74 = param_1[4];
  cStack_73 = param_1[5];
  cStack_72 = param_1[6];
  cStack_71 = param_1[7];
  cStack_70 = param_1[8];
  cStack_6f = param_1[9];
  cStack_6e = param_1[10];
  cStack_6d = param_1[0xb];
  cStack_6c = param_1[0xc];
  cStack_6b = param_1[0xd];
  cStack_6a = param_1[0xe];
  cStack_69 = param_1[0xf];
  cStack_68 = param_1[0x10];
  cStack_67 = param_1[0x11];
  cStack_66 = param_1[0x12];
  cStack_65 = param_1[0x13];
  cStack_64 = param_1[0x14];
  cStack_63 = param_1[0x15];
  cStack_62 = param_1[0x16];
  cStack_61 = param_1[0x17];
  cStack_60 = param_1[0x18];
  cStack_5f = param_1[0x19];
  cStack_5e = param_1[0x1a];
  cStack_5d = param_1[0x1b];
  cStack_5c = param_1[0x1c];
  cStack_5b = param_1[0x1d];
  cStack_5a = param_1[0x1e];
  cStack_59 = param_1[0x1f];
  cStack_58 = param_1[0x20];
  cStack_57 = param_1[0x21];
  cStack_56 = param_1[0x22];
  asStack_54[0] = *param_2;
  asStack_54[1] = param_2[1];
  asStack_54[2] = param_2[2];
  asStack_54[3] = param_2[3];
  sStack_4c = param_2[4];
  sStack_4a = param_2[5];
  sStack_48 = param_2[6];
  sStack_46 = param_2[7];
  sStack_44 = param_2[8];
  sStack_42 = param_2[9];
  sStack_40 = param_2[10];
  sStack_3e = param_2[0xb];
  sStack_3c = param_2[0xc];
  sStack_3a = param_2[0xd];
  sStack_38 = param_2[0xe];
  sStack_36 = param_2[0xf];
  sStack_34 = param_2[0x10];
  sStack_32 = param_2[0x11];
  sStack_30 = param_2[0x12];
  sStack_2e = param_2[0x13];
  sStack_2c = param_2[0x14];
  sStack_2a = param_2[0x15];
  sStack_28 = param_2[0x16];
  sStack_26 = param_2[0x17];
  sStack_24 = param_2[0x18];
  sStack_22 = param_2[0x19];
  sStack_20 = param_2[0x1a];
  sStack_1e = param_2[0x1b];
  sStack_1c = param_2[0x1c];
  sStack_1a = param_2[0x1d];
  sStack_18 = param_2[0x1e];
  sStack_16 = param_2[0x1f];
  sStack_14 = param_2[0x20];
  sStack_12 = param_2[0x21];
  sStack_10 = param_2[0x22];
  if (param_4 == '\0') {
    DAT_fffec2d6 = 0;
  }
  else {
    if (DAT_fffec2d8 < 0x23) {
      if (local_78[DAT_fffec2d8] == '\x01') {
        sStack_c = asStack_54[DAT_fffec2d8];
        uVar1 = LK_134BB0((uint)&T_02DAF0,param_3);
        if ((short)uVar1 <= sStack_c) {
          if ((DAT_fffec2d7 < 0xff) && (DAT_fffec2d7 < 0xff)) {
            DAT_fffec2d4 = DAT_fffec2d7 + 1;
          }
          else {
            DAT_fffec2d4 = -1;
          }
        }
      }
      if ((DAT_fffec2d8 < 0xff) && (DAT_fffec2d8 < 0xff)) {
        DAT_fffec2d5 = DAT_fffec2d8 + 1;
      }
      else {
        DAT_fffec2d5 = -1;
      }
      goto LAB_000a3a7e;
    }
    DAT_fffec2d6 = DAT_fffec2d7;
  }
  DAT_fffec2d4 = '\0';
  DAT_fffec2d5 = '\0';
LAB_000a3a7e:
  *param_6 = DAT_fffec2d6;
  *(bool *)param_5 = 3 < DAT_fffec2d6;
  *param_7 = DAT_fffec2d4;
  DAT_fffec2d8 = DAT_fffec2d5;
  DAT_fffec2d7 = DAT_fffec2d4;
  return;
}

