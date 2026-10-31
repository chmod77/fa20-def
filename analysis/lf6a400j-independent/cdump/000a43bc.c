
void FUN_000a43bc(int param_1,char param_2,char param_3,uint param_4,ushort param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  byte bVar8;
  short sVar9;
  undefined1 local_b4 [36];
  undefined1 auStack_90 [36];
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  
  cVar4 = -2;
  if (param_3 != -1) {
    cVar4 = param_3;
  }
  bVar8 = cVar4 + 1;
  if (bVar8 < 0x24) {
    if (bVar8 == 0) {
      bVar8 = 1;
    }
  }
  else {
    bVar8 = 0x23;
  }
  uStack_6c = *param_6;
  uStack_6b = param_6[1];
  uStack_6a = param_6[2];
  uStack_69 = param_6[3];
  uStack_68 = param_6[4];
  uStack_67 = param_6[5];
  uStack_66 = param_6[6];
  uStack_65 = param_6[7];
  uStack_64 = param_6[8];
  uStack_63 = param_6[9];
  uStack_62 = param_6[10];
  uStack_61 = param_6[0xb];
  uStack_60 = param_6[0xc];
  uStack_5f = param_6[0xd];
  uStack_5e = param_6[0xe];
  uStack_5d = param_6[0xf];
  uStack_5c = param_6[0x10];
  uStack_5b = param_6[0x11];
  uStack_5a = param_6[0x12];
  uStack_59 = param_6[0x13];
  uStack_58 = param_6[0x14];
  uStack_57 = param_6[0x15];
  uStack_56 = param_6[0x16];
  uStack_55 = param_6[0x17];
  uStack_54 = param_6[0x18];
  uStack_53 = param_6[0x19];
  uStack_52 = param_6[0x1a];
  uStack_51 = param_6[0x1b];
  uStack_50 = param_6[0x1c];
  uStack_4f = param_6[0x1d];
  uStack_4e = param_6[0x1e];
  uStack_4d = param_6[0x1f];
  uStack_4c = param_6[0x20];
  uVar7 = param_6[0x21];
  uVar1 = param_6[0x22];
  uVar5 = (uint)(byte)(bVar8 - 1);
  local_b4[uVar5] = 0;
  sVar3 = *(short *)(param_1 + uVar5 * 2);
  uVar6 = 0;
  if (-0x11 < (short)-(param_5 & 0xff)) {
    uVar6 = (int)(short)-(param_5 & 0xff) + 0x10;
  }
  uVar6 = (uVar6 & 0xff) * (param_4 & 0xff);
  if (uVar6 < 0x800) {
    sVar9 = (short)uVar6 * 0x10;
  }
  else {
    sVar9 = 0x7fff;
  }
  uStack_48 = *param_6;
  uStack_47 = param_6[1];
  uStack_46 = param_6[2];
  uStack_45 = param_6[3];
  uStack_44 = param_6[4];
  uStack_43 = param_6[5];
  uStack_42 = param_6[6];
  uStack_41 = param_6[7];
  uStack_40 = param_6[8];
  uStack_3f = param_6[9];
  uStack_3e = param_6[10];
  uStack_3d = param_6[0xb];
  uStack_3c = param_6[0xc];
  uStack_3b = param_6[0xd];
  uStack_3a = param_6[0xe];
  uStack_39 = param_6[0xf];
  uStack_38 = param_6[0x10];
  uStack_37 = param_6[0x11];
  uStack_36 = param_6[0x12];
  uStack_35 = param_6[0x13];
  uStack_34 = param_6[0x14];
  uStack_33 = param_6[0x15];
  uStack_32 = param_6[0x16];
  uStack_31 = param_6[0x17];
  uStack_30 = param_6[0x18];
  uStack_2f = param_6[0x19];
  uStack_2e = param_6[0x1a];
  uStack_2d = param_6[0x1b];
  uStack_2c = param_6[0x1c];
  uStack_2b = param_6[0x1d];
  uStack_2a = param_6[0x1e];
  uStack_29 = param_6[0x1f];
  uStack_28 = param_6[0x20];
  uStack_27 = param_6[0x21];
  uVar2 = param_6[0x22];
  auStack_90[uVar5] = 1;
  if ((((param_2 != '\b') && (param_2 != '\t')) && (param_2 != '\n')) && (param_2 != '\v')) {
    uStack_6c = *param_6;
    uStack_6b = param_6[1];
    uStack_6a = param_6[2];
    uStack_69 = param_6[3];
    uStack_68 = param_6[4];
    uStack_67 = param_6[5];
    uStack_66 = param_6[6];
    uStack_65 = param_6[7];
    uStack_64 = param_6[8];
    uStack_63 = param_6[9];
    uStack_62 = param_6[10];
    uStack_61 = param_6[0xb];
    uStack_60 = param_6[0xc];
    uStack_5f = param_6[0xd];
    uStack_5e = param_6[0xe];
    uStack_5d = param_6[0xf];
    uStack_5c = param_6[0x10];
    uStack_5b = param_6[0x11];
    uStack_5a = param_6[0x12];
    uStack_59 = param_6[0x13];
    uStack_58 = param_6[0x14];
    uStack_57 = param_6[0x15];
    uStack_56 = param_6[0x16];
    uStack_55 = param_6[0x17];
    uStack_54 = param_6[0x18];
    uStack_53 = param_6[0x19];
    uStack_52 = param_6[0x1a];
    uStack_51 = param_6[0x1b];
    uStack_50 = param_6[0x1c];
    uStack_4f = param_6[0x1d];
    uStack_4e = param_6[0x1e];
    uStack_4d = param_6[0x1f];
    uStack_4c = param_6[0x20];
    uVar7 = param_6[0x21];
  }
  if ((((param_2 != '\x05') && (param_2 != '\x06')) && (param_2 != '\a')) || (sVar9 != sVar3)) {
    uStack_48 = uStack_6c;
    uStack_47 = uStack_6b;
    uStack_46 = uStack_6a;
    uStack_45 = uStack_69;
    uStack_44 = uStack_68;
    uStack_43 = uStack_67;
    uStack_42 = uStack_66;
    uStack_41 = uStack_65;
    uStack_40 = uStack_64;
    uStack_3f = uStack_63;
    uStack_3e = uStack_62;
    uStack_3d = uStack_61;
    uStack_3c = uStack_60;
    uStack_3b = uStack_5f;
    uStack_3a = uStack_5e;
    uStack_39 = uStack_5d;
    uStack_38 = uStack_5c;
    uStack_37 = uStack_5b;
    uStack_36 = uStack_5a;
    uStack_35 = uStack_59;
    uStack_34 = uStack_58;
    uStack_33 = uStack_57;
    uStack_32 = uStack_56;
    uStack_31 = uStack_55;
    uStack_30 = uStack_54;
    uStack_2f = uStack_53;
    uStack_2e = uStack_52;
    uStack_2d = uStack_51;
    uStack_2c = uStack_50;
    uStack_2b = uStack_4f;
    uStack_2a = uStack_4e;
    uStack_29 = uStack_4d;
    uStack_28 = uStack_4c;
    uStack_27 = uVar7;
  }
  if (param_2 == '\x03') {
    *param_7 = 0;
    param_7[1] = 0;
    param_7[2] = 0;
    param_7[3] = 0;
    param_7[4] = 0;
    param_7[5] = 0;
    param_7[6] = 0;
    param_7[7] = 0;
    param_7[8] = 0;
    param_7[9] = 0;
    param_7[10] = 0;
    param_7[0xb] = 0;
    param_7[0xc] = 0;
    param_7[0xd] = 0;
    param_7[0xe] = 0;
    param_7[0xf] = 0;
    param_7[0x10] = 0;
    param_7[0x11] = 0;
    param_7[0x12] = 0;
    param_7[0x13] = 0;
    param_7[0x14] = 0;
    param_7[0x15] = 0;
    param_7[0x16] = 0;
    param_7[0x17] = 0;
    param_7[0x18] = 0;
    param_7[0x19] = 0;
    param_7[0x1a] = 0;
    param_7[0x1b] = 0;
    param_7[0x1c] = 0;
    param_7[0x1d] = 0;
    param_7[0x1e] = 0;
    param_7[0x1f] = 0;
    param_7[0x20] = 0;
    param_7[0x21] = 0;
    param_7[0x22] = 0;
  }
  else {
    *param_7 = uStack_48;
    param_7[1] = uStack_47;
    param_7[2] = uStack_46;
    param_7[3] = uStack_45;
    param_7[4] = uStack_44;
    param_7[5] = uStack_43;
    param_7[6] = uStack_42;
    param_7[7] = uStack_41;
    param_7[8] = uStack_40;
    param_7[9] = uStack_3f;
    param_7[10] = uStack_3e;
    param_7[0xb] = uStack_3d;
    param_7[0xc] = uStack_3c;
    param_7[0xd] = uStack_3b;
    param_7[0xe] = uStack_3a;
    param_7[0xf] = uStack_39;
    param_7[0x10] = uStack_38;
    param_7[0x11] = uStack_37;
    param_7[0x12] = uStack_36;
    param_7[0x13] = uStack_35;
    param_7[0x14] = uStack_34;
    param_7[0x15] = uStack_33;
    param_7[0x16] = uStack_32;
    param_7[0x17] = uStack_31;
    param_7[0x18] = uStack_30;
    param_7[0x19] = uStack_2f;
    param_7[0x1a] = uStack_2e;
    param_7[0x1b] = uStack_2d;
    param_7[0x1c] = uStack_2c;
    param_7[0x1d] = uStack_2b;
    param_7[0x1e] = uStack_2a;
    param_7[0x1f] = uStack_29;
    param_7[0x20] = uStack_28;
    param_7[0x21] = uStack_27;
    if ((((param_2 == '\x05') || (param_2 == '\x06')) || (param_2 == '\a')) && (sVar9 == sVar3)) {
      param_7[0x22] = uVar2;
    }
    else if ((((param_2 == '\b') || (param_2 == '\t')) || (param_2 == '\n')) || (param_2 == '\v')) {
      param_7[0x22] = uVar1;
    }
    else {
      param_7[0x22] = param_6[0x22];
    }
  }
  return;
}

