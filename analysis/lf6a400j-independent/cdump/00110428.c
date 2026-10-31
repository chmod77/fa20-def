
void FUN_00110428(byte *param_1,char param_2,byte param_3,byte param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte local_e8 [104];
  byte local_80 [120];
  undefined1 *local_8;
  
  local_8 = &DAT_fffedd34;
  bVar1 = *param_1;
  bVar2 = param_1[2];
  bVar3 = param_1[0x2b];
  bVar4 = param_1[0x2c];
  bVar5 = param_1[0x2d];
  bVar6 = param_1[0x2e];
  bVar7 = param_1[0x57];
  uVar8 = 0;
  if (param_2 == '@') {
    do {
      uVar8 = uVar8 & 0xff;
      (&DAT_fffedd34)[uVar8] = local_80[uVar8];
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 0x67);
    DAT_fffedd34 = DAT_fffedd34 & 0xbf | bVar1 & 0x40;
    DAT_fffedd36 = bVar2 & 0x30 | DAT_fffedd36 & 0xcf;
    DAT_fffedd5f = DAT_fffedd5f & 0xfe | bVar3 & 1;
    DAT_fffedd60 = DAT_fffedd60 & 0xc0 | bVar4 & 0x3f;
    DAT_fffedd61 = DAT_fffedd61 & 0x81 | bVar5 & 0x7e;
    DAT_fffedd62 = DAT_fffedd62 & 0xdf | bVar6 & 0x20;
    DAT_fffedd8b = DAT_fffedd8b & 0x27 | bVar7 & 0xd8;
  }
  else if (param_2 == '\x01') {
    do {
      uVar8 = uVar8 & 0xff;
      (&DAT_fffedd34)[uVar8] = local_80[uVar8];
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 0x67);
  }
  else if (param_2 == -0x80) {
    do {
      uVar8 = uVar8 & 0xff;
      (&DAT_fffedd34)[uVar8] = local_e8[uVar8] & local_80[uVar8];
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 0x67);
  }
  else {
    do {
      uVar8 = uVar8 & 0xff;
      (&DAT_fffedd34)[uVar8] = local_e8[uVar8];
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 0x67);
    if ((param_2 == '\x02') || (param_2 == '\x04')) {
      uVar8 = (uint)param_3;
      (&DAT_fffedd34)[uVar8] = (&DAT_fffedd34)[uVar8] & -param_4 - 1;
      if ((uVar8 == 0x14) && ((param_4 & 3) != 0)) {
        DAT_fffedd47 = DAT_fffedd47 & 0xc0;
        DAT_fffedd8c = DAT_fffedd8c & 0x7f;
      }
    }
  }
  *param_5 = DAT_fffedd34;
  param_5[1] = DAT_fffedd35;
  param_5[2] = DAT_fffedd36;
  param_5[3] = DAT_fffedd37;
  param_5[4] = DAT_fffedd38;
  param_5[5] = DAT_fffedd39;
  param_5[6] = DAT_fffedd3a;
  param_5[7] = DAT_fffedd3b;
  param_5[8] = DAT_fffedd3c;
  param_5[9] = DAT_fffedd3d;
  param_5[10] = DAT_fffedd3e;
  param_5[0xb] = DAT_fffedd3f;
  param_5[0xc] = DAT_fffedd40;
  param_5[0xd] = DAT_fffedd41;
  param_5[0xe] = DAT_fffedd42;
  param_5[0xf] = DAT_fffedd43;
  param_5[0x10] = DAT_fffedd44;
  param_5[0x11] = DAT_fffedd45;
  param_5[0x12] = DAT_fffedd46;
  param_5[0x13] = DAT_fffedd47;
  param_5[0x14] = DAT_fffedd48;
  param_5[0x15] = DAT_fffedd49;
  param_5[0x16] = DAT_fffedd4a;
  param_5[0x17] = DAT_fffedd4b;
  param_5[0x18] = DAT_fffedd4c;
  param_5[0x19] = DAT_fffedd4d;
  param_5[0x1a] = DAT_fffedd4e;
  param_5[0x1b] = DAT_fffedd4f;
  param_5[0x1c] = DAT_fffedd50;
  param_5[0x1d] = DAT_fffedd51;
  param_5[0x1e] = DAT_fffedd52;
  param_5[0x1f] = DAT_fffedd53;
  param_5[0x20] = DAT_fffedd54;
  param_5[0x21] = DAT_fffedd55;
  param_5[0x22] = DAT_fffedd56;
  param_5[0x23] = DAT_fffedd57;
  param_5[0x24] = DAT_fffedd58;
  param_5[0x25] = DAT_fffedd59;
  param_5[0x26] = DAT_fffedd5a;
  param_5[0x27] = DAT_fffedd5b;
  param_5[0x28] = DAT_fffedd5c;
  param_5[0x29] = DAT_fffedd5d;
  param_5[0x2a] = DAT_fffedd5e;
  param_5[0x2b] = DAT_fffedd5f;
  param_5[0x2c] = DAT_fffedd60;
  param_5[0x2d] = DAT_fffedd61;
  param_5[0x2e] = DAT_fffedd62;
  param_5[0x2f] = DAT_fffedd63;
  param_5[0x30] = DAT_fffedd64;
  param_5[0x31] = DAT_fffedd65;
  param_5[0x32] = DAT_fffedd66;
  param_5[0x33] = DAT_fffedd67;
  param_5[0x34] = DAT_fffedd68;
  param_5[0x35] = DAT_fffedd69;
  param_5[0x36] = DAT_fffedd6a;
  param_5[0x37] = DAT_fffedd6b;
  param_5[0x38] = DAT_fffedd6c;
  param_5[0x39] = DAT_fffedd6d;
  param_5[0x3a] = DAT_fffedd6e;
  param_5[0x3b] = DAT_fffedd6f;
  param_5[0x3c] = DAT_fffedd70;
  param_5[0x3d] = DAT_fffedd71;
  param_5[0x3e] = DAT_fffedd72;
  param_5[0x3f] = DAT_fffedd73;
  param_5[0x40] = DAT_fffedd74;
  param_5[0x41] = DAT_fffedd75;
  param_5[0x42] = DAT_fffedd76;
  param_5[0x43] = DAT_fffedd77;
  param_5[0x44] = DAT_fffedd78;
  param_5[0x45] = DAT_fffedd79;
  param_5[0x46] = DAT_fffedd7a;
  param_5[0x47] = DAT_fffedd7b;
  param_5[0x48] = DAT_fffedd7c;
  param_5[0x49] = DAT_fffedd7d;
  param_5[0x4a] = DAT_fffedd7e;
  param_5[0x4b] = DAT_fffedd7f;
  param_5[0x4c] = DAT_fffedd80;
  param_5[0x4d] = DAT_fffedd81;
  param_5[0x4e] = DAT_fffedd82;
  param_5[0x4f] = DAT_fffedd83;
  param_5[0x50] = DAT_fffedd84;
  param_5[0x51] = DAT_fffedd85;
  param_5[0x52] = DAT_fffedd86;
  param_5[0x53] = DAT_fffedd87;
  param_5[0x54] = DAT_fffedd88;
  param_5[0x55] = DAT_fffedd89;
  param_5[0x56] = DAT_fffedd8a;
  param_5[0x57] = DAT_fffedd8b;
  param_5[0x58] = DAT_fffedd8c;
  param_5[0x59] = DAT_fffedd8d;
  param_5[0x5a] = DAT_fffedd8e;
  param_5[0x5b] = DAT_fffedd8f;
  param_5[0x5c] = DAT_fffedd90;
  param_5[0x5d] = DAT_fffedd91;
  param_5[0x5e] = DAT_fffedd92;
  param_5[0x5f] = DAT_fffedd93;
  param_5[0x60] = DAT_fffedd94;
  param_5[0x61] = DAT_fffedd95;
  param_5[0x62] = DAT_fffedd96;
  param_5[99] = DAT_fffedd97;
  param_5[100] = DAT_fffedd98;
  param_5[0x65] = DAT_fffedd99;
  param_5[0x66] = DAT_fffedd9a;
  return;
}

