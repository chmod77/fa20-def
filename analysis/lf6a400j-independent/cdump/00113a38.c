
void FUN_00113a38(int param_1,byte *param_2,char param_3,char param_4,byte param_5,char param_6,
                 char param_7,char param_8,char param_9,byte param_10,char param_11,char param_12,
                 byte *param_13,byte param_14,byte param_15,char param_16,char param_17,
                 byte param_18,char param_19)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  char in_stack_0000004f;
  byte in_stack_00000053;
  undefined1 *in_stack_00000054;
  byte local_1c0 [104];
  byte local_158 [104];
  byte local_f0 [104];
  byte local_88 [124];
  undefined1 *local_c;
  
  local_c = &DAT_fffeded8;
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x13);
  bVar3 = *(byte *)(param_1 + 0x14);
  bVar9 = *(byte *)(param_1 + 0x2c);
  bVar4 = *(byte *)(param_1 + 0x2d);
  bVar5 = *(byte *)(param_1 + 0x4b);
  bVar6 = *(byte *)(param_1 + 0x58);
  local_158[0] = *param_2;
  local_158[1] = param_2[1];
  local_158[2] = param_2[2];
  local_158[3] = param_2[3];
  local_158[4] = param_2[4];
  local_158[5] = param_2[5];
  local_158[6] = param_2[6];
  local_158[7] = param_2[7];
  local_158[8] = param_2[8];
  local_158[9] = param_2[9];
  local_158[10] = param_2[10];
  local_158[0xb] = param_2[0xb];
  local_158[0xc] = param_2[0xc];
  local_158[0xd] = param_2[0xd];
  local_158[0xe] = param_2[0xe];
  local_158[0xf] = param_2[0xf];
  local_158[0x10] = param_2[0x10];
  local_158[0x11] = param_2[0x11];
  local_158[0x12] = param_2[0x12];
  local_158[0x13] = param_2[0x13];
  local_158[0x14] = param_2[0x14];
  local_158[0x15] = param_2[0x15];
  local_158[0x16] = param_2[0x16];
  local_158[0x17] = param_2[0x17];
  local_158[0x18] = param_2[0x18];
  local_158[0x19] = param_2[0x19];
  local_158[0x1a] = param_2[0x1a];
  local_158[0x1b] = param_2[0x1b];
  local_158[0x1c] = param_2[0x1c];
  local_158[0x1d] = param_2[0x1d];
  local_158[0x1e] = param_2[0x1e];
  local_158[0x1f] = param_2[0x1f];
  local_158[0x20] = param_2[0x20];
  local_158[0x21] = param_2[0x21];
  local_158[0x22] = param_2[0x22];
  local_158[0x23] = param_2[0x23];
  local_158[0x24] = param_2[0x24];
  local_158[0x25] = param_2[0x25];
  local_158[0x26] = param_2[0x26];
  local_158[0x27] = param_2[0x27];
  local_158[0x28] = param_2[0x28];
  local_158[0x29] = param_2[0x29];
  local_158[0x2a] = param_2[0x2a];
  local_158[0x2b] = param_2[0x2b];
  local_158[0x2c] = param_2[0x2c];
  local_158[0x2d] = param_2[0x2d];
  local_158[0x2e] = param_2[0x2e];
  local_158[0x2f] = param_2[0x2f];
  local_158[0x30] = param_2[0x30];
  local_158[0x31] = param_2[0x31];
  local_158[0x32] = param_2[0x32];
  local_158[0x33] = param_2[0x33];
  local_158[0x34] = param_2[0x34];
  local_158[0x35] = param_2[0x35];
  local_158[0x36] = param_2[0x36];
  local_158[0x37] = param_2[0x37];
  local_158[0x38] = param_2[0x38];
  local_158[0x39] = param_2[0x39];
  local_158[0x3a] = param_2[0x3a];
  local_158[0x3b] = param_2[0x3b];
  local_158[0x3c] = param_2[0x3c];
  local_158[0x3d] = param_2[0x3d];
  local_158[0x3e] = param_2[0x3e];
  local_158[0x3f] = param_2[0x3f];
  local_158[0x40] = param_2[0x40];
  local_158[0x41] = param_2[0x41];
  local_158[0x42] = param_2[0x42];
  local_158[0x43] = param_2[0x43];
  local_158[0x44] = param_2[0x44];
  local_158[0x45] = param_2[0x45];
  local_158[0x46] = param_2[0x46];
  local_158[0x47] = param_2[0x47];
  local_158[0x48] = param_2[0x48];
  local_158[0x49] = param_2[0x49];
  local_158[0x4a] = param_2[0x4a];
  local_158[0x4b] = param_2[0x4b];
  local_158[0x4c] = param_2[0x4c];
  local_158[0x4d] = param_2[0x4d];
  local_158[0x4e] = param_2[0x4e];
  local_158[0x4f] = param_2[0x4f];
  local_158[0x50] = param_2[0x50];
  local_158[0x51] = param_2[0x51];
  local_158[0x52] = param_2[0x52];
  local_158[0x53] = param_2[0x53];
  local_158[0x54] = param_2[0x54];
  local_158[0x55] = param_2[0x55];
  local_158[0x56] = param_2[0x56];
  local_158[0x57] = param_2[0x57];
  local_158[0x58] = param_2[0x58];
  local_158[0x59] = param_2[0x59];
  local_158[0x5a] = param_2[0x5a];
  local_158[0x5b] = param_2[0x5b];
  local_158[0x5c] = param_2[0x5c];
  local_158[0x5d] = param_2[0x5d];
  local_158[0x5e] = param_2[0x5e];
  local_158[0x5f] = param_2[0x5f];
  local_158[0x60] = param_2[0x60];
  local_158[0x61] = param_2[0x61];
  local_158[0x62] = param_2[0x62];
  local_158[99] = param_2[99];
  local_158[100] = param_2[100];
  local_158[0x65] = param_2[0x65];
  local_158[0x66] = param_2[0x66];
  local_f0[0] = *param_13;
  local_f0[1] = param_13[1];
  local_f0[2] = param_13[2];
  local_f0[3] = param_13[3];
  local_f0[4] = param_13[4];
  local_f0[5] = param_13[5];
  local_f0[6] = param_13[6];
  local_f0[7] = param_13[7];
  local_f0[8] = param_13[8];
  local_f0[9] = param_13[9];
  local_f0[10] = param_13[10];
  local_f0[0xb] = param_13[0xb];
  local_f0[0xc] = param_13[0xc];
  local_f0[0xd] = param_13[0xd];
  local_f0[0xe] = param_13[0xe];
  local_f0[0xf] = param_13[0xf];
  local_f0[0x10] = param_13[0x10];
  local_f0[0x11] = param_13[0x11];
  local_f0[0x12] = param_13[0x12];
  local_f0[0x13] = param_13[0x13];
  local_f0[0x14] = param_13[0x14];
  local_f0[0x15] = param_13[0x15];
  local_f0[0x16] = param_13[0x16];
  local_f0[0x17] = param_13[0x17];
  local_f0[0x18] = param_13[0x18];
  local_f0[0x19] = param_13[0x19];
  local_f0[0x1a] = param_13[0x1a];
  local_f0[0x1b] = param_13[0x1b];
  local_f0[0x1c] = param_13[0x1c];
  local_f0[0x1d] = param_13[0x1d];
  local_f0[0x1e] = param_13[0x1e];
  local_f0[0x1f] = param_13[0x1f];
  local_f0[0x20] = param_13[0x20];
  local_f0[0x21] = param_13[0x21];
  local_f0[0x22] = param_13[0x22];
  local_f0[0x23] = param_13[0x23];
  local_f0[0x24] = param_13[0x24];
  local_f0[0x25] = param_13[0x25];
  local_f0[0x26] = param_13[0x26];
  local_f0[0x27] = param_13[0x27];
  local_f0[0x28] = param_13[0x28];
  local_f0[0x29] = param_13[0x29];
  local_f0[0x2a] = param_13[0x2a];
  local_f0[0x2b] = param_13[0x2b];
  local_f0[0x2c] = param_13[0x2c];
  local_f0[0x2d] = param_13[0x2d];
  local_f0[0x2e] = param_13[0x2e];
  local_f0[0x2f] = param_13[0x2f];
  local_f0[0x30] = param_13[0x30];
  local_f0[0x31] = param_13[0x31];
  local_f0[0x32] = param_13[0x32];
  local_f0[0x33] = param_13[0x33];
  local_f0[0x34] = param_13[0x34];
  local_f0[0x35] = param_13[0x35];
  local_f0[0x36] = param_13[0x36];
  local_f0[0x37] = param_13[0x37];
  local_f0[0x38] = param_13[0x38];
  local_f0[0x39] = param_13[0x39];
  local_f0[0x3a] = param_13[0x3a];
  local_f0[0x3b] = param_13[0x3b];
  local_f0[0x3c] = param_13[0x3c];
  local_f0[0x3d] = param_13[0x3d];
  local_f0[0x3e] = param_13[0x3e];
  local_f0[0x3f] = param_13[0x3f];
  local_f0[0x40] = param_13[0x40];
  local_f0[0x41] = param_13[0x41];
  local_f0[0x42] = param_13[0x42];
  local_f0[0x43] = param_13[0x43];
  local_f0[0x44] = param_13[0x44];
  local_f0[0x45] = param_13[0x45];
  local_f0[0x46] = param_13[0x46];
  local_f0[0x47] = param_13[0x47];
  local_f0[0x48] = param_13[0x48];
  local_f0[0x49] = param_13[0x49];
  local_f0[0x4a] = param_13[0x4a];
  local_f0[0x4b] = param_13[0x4b];
  local_f0[0x4c] = param_13[0x4c];
  local_f0[0x4d] = param_13[0x4d];
  local_f0[0x4e] = param_13[0x4e];
  local_f0[0x4f] = param_13[0x4f];
  local_f0[0x50] = param_13[0x50];
  local_f0[0x51] = param_13[0x51];
  local_f0[0x52] = param_13[0x52];
  local_f0[0x53] = param_13[0x53];
  local_f0[0x54] = param_13[0x54];
  local_f0[0x55] = param_13[0x55];
  local_f0[0x56] = param_13[0x56];
  local_f0[0x57] = param_13[0x57];
  local_f0[0x58] = param_13[0x58];
  local_f0[0x59] = param_13[0x59];
  local_f0[0x5a] = param_13[0x5a];
  local_f0[0x5b] = param_13[0x5b];
  local_f0[0x5c] = param_13[0x5c];
  local_f0[0x5d] = param_13[0x5d];
  local_f0[0x5e] = param_13[0x5e];
  local_f0[0x5f] = param_13[0x5f];
  local_f0[0x60] = param_13[0x60];
  local_f0[0x61] = param_13[0x61];
  local_f0[0x62] = param_13[0x62];
  local_f0[99] = param_13[99];
  local_f0[100] = param_13[100];
  local_f0[0x65] = param_13[0x65];
  local_f0[0x66] = param_13[0x66];
  local_88[0] = 0x41;
  local_88[1] = 0xd3;
  local_88[2] = 0x3c;
  local_88[3] = 3;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0x88;
  local_88[7] = 0;
  local_88[8] = 0xff;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0xcc;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 1;
  local_88[0x12] = 0xd1;
  local_88[0x13] = 0xf;
  local_88[0x14] = 3;
  local_88[0x15] = 0x14;
  local_88[0x16] = 0xf3;
  local_88[0x17] = 0x30;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0xc0;
  local_88[0x1c] = 3;
  local_88[0x1d] = 0;
  local_88[0x1e] = 0;
  local_88[0x1f] = 0;
  local_88[0x20] = 0;
  local_88[0x21] = 0;
  local_88[0x22] = 0;
  local_88[0x23] = 0;
  local_88[0x24] = 0;
  local_88[0x25] = 0;
  local_88[0x26] = 0;
  local_88[0x27] = 2;
  local_88[0x28] = 2;
  local_88[0x29] = 0;
  local_88[0x2a] = 0;
  local_88[0x2b] = 1;
  local_88[0x2c] = 0x3f;
  local_88[0x2d] = 0x7e;
  local_88[0x2e] = 0x3e;
  local_88[0x2f] = 0;
  local_88[0x30] = 1;
  local_88[0x31] = 0x80;
  local_88[0x32] = 0;
  local_88[0x33] = 0;
  local_88[0x34] = 0xcf;
  local_88[0x35] = 0x3f;
  local_88[0x36] = 0;
  local_88[0x37] = 0;
  local_88[0x38] = 0;
  local_88[0x39] = 0xc1;
  local_88[0x3a] = 0;
  local_88[0x3b] = 0xc3;
  local_88[0x3c] = 0xc0;
  local_88[0x3d] = 0;
  local_88[0x3e] = 0;
  local_88[0x3f] = 0;
  local_88[0x40] = 0;
  local_88[0x41] = 0;
  local_88[0x42] = 0;
  local_88[0x43] = 0;
  local_88[0x44] = 0;
  local_88[0x45] = 0;
  local_88[0x46] = 0;
  local_88[0x47] = 0;
  local_88[0x48] = 0x7c;
  local_88[0x49] = 0;
  local_88[0x4a] = 0;
  local_88[0x4b] = 0;
  local_88[0x4c] = 0;
  local_88[0x4d] = 0;
  local_88[0x4e] = 0;
  local_88[0x4f] = 0x80;
  local_88[0x50] = 0;
  local_88[0x51] = 0xc;
  local_88[0x52] = 0;
  local_88[0x53] = 0x3c;
  local_88[0x54] = 0xf;
  local_88[0x55] = 0xa7;
  local_88[0x56] = 0;
  local_88[0x57] = 0xdc;
  local_88[0x58] = 0xf8;
  local_88[0x59] = 0;
  local_88[0x5a] = 0;
  local_88[0x5b] = 0;
  local_88[0x5c] = 0;
  local_88[0x5d] = 0;
  local_88[0x5e] = 0;
  local_88[0x5f] = 0;
  local_88[0x60] = 0;
  local_88[0x61] = 0;
  local_88[0x62] = 0;
  local_88[99] = 0xf;
  local_88[100] = 0x7f;
  local_88[0x65] = 0xc3;
  local_88[0x66] = 0xe3;
  uVar10 = 0;
  if (param_3 == -0x80) {
    do {
      uVar10 = uVar10 & 0xff;
      (&DAT_fffeded8)[uVar10] = local_1c0[uVar10] & local_88[uVar10];
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xff) < 0x67);
    goto LAB_00114ca2;
  }
  if (param_3 == '@') {
    do {
      (&DAT_fffeded8)[uVar10 & 0xff] = 0;
      uVar10 = (uVar10 & 0xff) + 1;
    } while ((uVar10 & 0xff) < 0x67);
    goto LAB_00114ca2;
  }
  do {
    uVar10 = uVar10 & 0xff;
    (&DAT_fffeded8)[uVar10] = local_1c0[uVar10];
    uVar10 = uVar10 + 1;
  } while ((uVar10 & 0xff) < 0x67);
  if (param_3 != '\x02') {
    if ((param_3 == '\x10') && (param_19 != -1)) {
      if (param_7 != '\0') {
        if ((local_158[0x4b] & 4) == 0) {
          if ((local_f0[0x4b] & 4) == 0) {
            DAT_fffedf23 = DAT_fffedf23 & 0xfb;
          }
        }
        else {
          DAT_fffedf23 = DAT_fffedf23 | 4;
        }
      }
      if ((0x4f < param_10) && (param_19 != -0x5b)) {
        DAT_fffedeea = DAT_fffedeea & 0x3f;
      }
      if ((0x4f < param_18) && (param_19 != -0x5b)) {
        DAT_fffedf05 = DAT_fffedf05 & 0x7f;
        DAT_fffedf04 = DAT_fffedf04 & 0xbf;
      }
    }
    else if ((param_3 == '\b') && (param_7 != '\0')) {
      for (uVar10 = 0; uVar10 < 0x67; uVar10 = uVar10 + 1) {
        bVar7 = local_88[uVar10];
        bVar8 = local_158[uVar10];
        (&DAT_fffeded8)[uVar10] = (&DAT_fffeded8)[uVar10] | bVar7 & bVar8;
        (&DAT_fffeded8)[uVar10] =
             (&DAT_fffeded8)[uVar10] & 0xff - (bVar7 & 0xff - (bVar8 | local_f0[uVar10]));
      }
      if (param_19 != -1) {
        DAT_fffedf23 = DAT_fffedf23 & 0xfb | bVar5 & 4;
        bVar5 = DAT_fffedeea & 0x3f;
        DAT_fffedeea = bVar5 | bVar1 & 0xc0;
        bVar6 = bVar6 & 0x80;
        bVar7 = DAT_fffedeec & 0xfc;
        DAT_fffedeec = bVar7 | bVar3 & 3;
        bVar8 = DAT_fffedf04 & 0xbf;
        DAT_fffedf04 = bVar8 | bVar9 & 0x40;
        bVar9 = DAT_fffedf05 & 0x7f;
        DAT_fffedf05 = bVar9 | bVar4 & 0x80;
        if (((param_6 != '\0') && ((local_158[0x14] & 1) == 0)) && (param_19 != -0x5b)) {
          DAT_fffedeec = bVar7 | bVar3 & 2;
        }
        if (((param_8 != '\0') && ((local_158[0x14] & 2) == 0)) && (param_19 != -0x5b)) {
          DAT_fffedeec = DAT_fffedeec & 0xfd;
        }
        bVar2 = DAT_fffedeeb & 0xf0 | bVar2 & 0xf;
        if ((DAT_fffedeec & 3) == 0) {
          bVar6 = 0;
          bVar2 = DAT_fffedeeb & 0xc0;
        }
        DAT_fffedeeb = bVar2;
        DAT_fffedf30 = DAT_fffedf30 & 0x7f | bVar6;
        if ((param_11 != '\0') && (((int)(char)local_158[0x12] & 0x80U) == 0)) {
          DAT_fffedeea = bVar5 | bVar1 & 0x40;
        }
        if ((param_12 != '\0') && ((local_158[0x12] & 0x40) == 0)) {
          DAT_fffedeea = DAT_fffedeea & 0xbf;
        }
        if ((param_17 != '\0') && (((int)(char)local_158[0x2d] & 0x80U) == 0)) {
          DAT_fffedf05 = bVar9;
        }
        if ((param_16 != '\0') && ((local_158[0x2c] & 0x40) == 0)) {
          DAT_fffedf04 = bVar8;
        }
      }
    }
    goto LAB_00114ca2;
  }
  if (param_19 == -1) goto LAB_00114ca2;
  if (param_4 != '\x14') {
    if (param_4 == '\x12') {
      if ((param_7 != '\0') && ((param_5 == 0x80 || (param_5 == 0x40)))) {
        DAT_fffedeea = DAT_fffedeea | param_5;
      }
    }
    else if ((param_4 == '-') && (param_5 == 0x80)) {
      if (param_7 != '\0') {
        DAT_fffedf05 = DAT_fffedf05 | 0x80;
      }
    }
    else if ((param_4 == ',') && ((param_5 == 0x40 && (param_7 != '\0')))) {
      DAT_fffedf04 = DAT_fffedf04 | 0x40;
    }
    goto LAB_00114ca2;
  }
  if (param_5 == 1) {
    if ((param_7 != '\0') && ((in_stack_0000004f == '\x01' || (3 < in_stack_00000053)))) {
LAB_00114988:
      DAT_fffedeec = DAT_fffedeec | param_5;
    }
  }
  else {
    if (param_5 != 2) goto LAB_00114ca2;
    if ((param_9 != '\0') || (2 < param_14)) goto LAB_00114988;
  }
  if ((DAT_fffedeec & 3) != 0) {
    if (((int)(char)param_15 & 0x80U) != 0) {
      DAT_fffedf30 = DAT_fffedf30 | 0x80;
    }
    DAT_fffedeeb = DAT_fffedeeb | param_15 & 0x7f;
  }
LAB_00114ca2:
  *in_stack_00000054 = DAT_fffeded8;
  in_stack_00000054[1] = DAT_fffeded9;
  in_stack_00000054[2] = DAT_fffededa;
  in_stack_00000054[3] = DAT_fffededb;
  in_stack_00000054[4] = DAT_fffededc;
  in_stack_00000054[5] = DAT_fffededd;
  in_stack_00000054[6] = DAT_fffedede;
  in_stack_00000054[7] = DAT_fffededf;
  in_stack_00000054[8] = DAT_fffedee0;
  in_stack_00000054[9] = DAT_fffedee1;
  in_stack_00000054[10] = DAT_fffedee2;
  in_stack_00000054[0xb] = DAT_fffedee3;
  in_stack_00000054[0xc] = DAT_fffedee4;
  in_stack_00000054[0xd] = DAT_fffedee5;
  in_stack_00000054[0xe] = DAT_fffedee6;
  in_stack_00000054[0xf] = DAT_fffedee7;
  in_stack_00000054[0x10] = DAT_fffedee8;
  in_stack_00000054[0x11] = DAT_fffedee9;
  in_stack_00000054[0x12] = DAT_fffedeea;
  in_stack_00000054[0x13] = DAT_fffedeeb;
  in_stack_00000054[0x14] = DAT_fffedeec;
  in_stack_00000054[0x15] = DAT_fffedeed;
  in_stack_00000054[0x16] = DAT_fffedeee;
  in_stack_00000054[0x17] = DAT_fffedeef;
  in_stack_00000054[0x18] = DAT_fffedef0;
  in_stack_00000054[0x19] = DAT_fffedef1;
  in_stack_00000054[0x1a] = DAT_fffedef2;
  in_stack_00000054[0x1b] = DAT_fffedef3;
  in_stack_00000054[0x1c] = DAT_fffedef4;
  in_stack_00000054[0x1d] = DAT_fffedef5;
  in_stack_00000054[0x1e] = DAT_fffedef6;
  in_stack_00000054[0x1f] = DAT_fffedef7;
  in_stack_00000054[0x20] = DAT_fffedef8;
  in_stack_00000054[0x21] = DAT_fffedef9;
  in_stack_00000054[0x22] = DAT_fffedefa;
  in_stack_00000054[0x23] = DAT_fffedefb;
  in_stack_00000054[0x24] = DAT_fffedefc;
  in_stack_00000054[0x25] = DAT_fffedefd;
  in_stack_00000054[0x26] = DAT_fffedefe;
  in_stack_00000054[0x27] = DAT_fffedeff;
  in_stack_00000054[0x28] = DAT_fffedf00;
  in_stack_00000054[0x29] = DAT_fffedf01;
  in_stack_00000054[0x2a] = DAT_fffedf02;
  in_stack_00000054[0x2b] = DAT_fffedf03;
  in_stack_00000054[0x2c] = DAT_fffedf04;
  in_stack_00000054[0x2d] = DAT_fffedf05;
  in_stack_00000054[0x2e] = DAT_fffedf06;
  in_stack_00000054[0x2f] = DAT_fffedf07;
  in_stack_00000054[0x30] = DAT_fffedf08;
  in_stack_00000054[0x31] = DAT_fffedf09;
  in_stack_00000054[0x32] = DAT_fffedf0a;
  in_stack_00000054[0x33] = DAT_fffedf0b;
  in_stack_00000054[0x34] = DAT_fffedf0c;
  in_stack_00000054[0x35] = DAT_fffedf0d;
  in_stack_00000054[0x36] = DAT_fffedf0e;
  in_stack_00000054[0x37] = DAT_fffedf0f;
  in_stack_00000054[0x38] = DAT_fffedf10;
  in_stack_00000054[0x39] = DAT_fffedf11;
  in_stack_00000054[0x3a] = DAT_fffedf12;
  in_stack_00000054[0x3b] = DAT_fffedf13;
  in_stack_00000054[0x3c] = DAT_fffedf14;
  in_stack_00000054[0x3d] = DAT_fffedf15;
  in_stack_00000054[0x3e] = DAT_fffedf16;
  in_stack_00000054[0x3f] = DAT_fffedf17;
  in_stack_00000054[0x40] = DAT_fffedf18;
  in_stack_00000054[0x41] = DAT_fffedf19;
  in_stack_00000054[0x42] = DAT_fffedf1a;
  in_stack_00000054[0x43] = DAT_fffedf1b;
  in_stack_00000054[0x44] = DAT_fffedf1c;
  in_stack_00000054[0x45] = DAT_fffedf1d;
  in_stack_00000054[0x46] = DAT_fffedf1e;
  in_stack_00000054[0x47] = DAT_fffedf1f;
  in_stack_00000054[0x48] = DAT_fffedf20;
  in_stack_00000054[0x49] = DAT_fffedf21;
  in_stack_00000054[0x4a] = DAT_fffedf22;
  in_stack_00000054[0x4b] = DAT_fffedf23;
  in_stack_00000054[0x4c] = DAT_fffedf24;
  in_stack_00000054[0x4d] = DAT_fffedf25;
  in_stack_00000054[0x4e] = DAT_fffedf26;
  in_stack_00000054[0x4f] = DAT_fffedf27;
  in_stack_00000054[0x50] = DAT_fffedf28;
  in_stack_00000054[0x51] = DAT_fffedf29;
  in_stack_00000054[0x52] = DAT_fffedf2a;
  in_stack_00000054[0x53] = DAT_fffedf2b;
  in_stack_00000054[0x54] = DAT_fffedf2c;
  in_stack_00000054[0x55] = DAT_fffedf2d;
  in_stack_00000054[0x56] = DAT_fffedf2e;
  in_stack_00000054[0x57] = DAT_fffedf2f;
  in_stack_00000054[0x58] = DAT_fffedf30;
  in_stack_00000054[0x59] = DAT_fffedf31;
  in_stack_00000054[0x5a] = DAT_fffedf32;
  in_stack_00000054[0x5b] = DAT_fffedf33;
  in_stack_00000054[0x5c] = DAT_fffedf34;
  in_stack_00000054[0x5d] = DAT_fffedf35;
  in_stack_00000054[0x5e] = DAT_fffedf36;
  in_stack_00000054[0x5f] = DAT_fffedf37;
  in_stack_00000054[0x60] = DAT_fffedf38;
  in_stack_00000054[0x61] = DAT_fffedf39;
  in_stack_00000054[0x62] = DAT_fffedf3a;
  in_stack_00000054[99] = DAT_fffedf3b;
  in_stack_00000054[100] = DAT_fffedf3c;
  in_stack_00000054[0x65] = DAT_fffedf3d;
  in_stack_00000054[0x66] = DAT_fffedf3e;
  return;
}

