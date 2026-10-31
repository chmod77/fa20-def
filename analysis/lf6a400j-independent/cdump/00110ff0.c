
/* WARNING: Removing unreachable block (ram,0x001116aa) */
/* WARNING: Removing unreachable block (ram,0x001116ca) */
/* WARNING: Removing unreachable block (ram,0x001116cc) */
/* WARNING: Removing unreachable block (ram,0x001116de) */

void FUN_00110ff0(undefined4 param_1,char param_2,byte param_3,byte param_4,byte param_5,
                 byte param_6,byte param_7,byte param_8,undefined4 param_9,ushort param_10,
                 undefined1 *param_11)

{
  byte bVar1;
  uint uVar2;
  byte local_f4 [104];
  byte local_8c [120];
  undefined1 *local_14;
  
  local_14 = &DAT_fffedd9c;
  if (param_2 == '@') {
    uVar2 = 0;
    do {
      (&DAT_fffedd9c)[uVar2 & 0xff] = 0;
      uVar2 = (uVar2 & 0xff) + 1;
    } while ((uVar2 & 0xff) < 0x67);
  }
  else if (param_2 == '\x10') {
    if ((((param_7 < 3) || (param_6 < 3)) || (param_5 < 3)) || (param_8 < 0x28)) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 & 0xff;
        (&DAT_fffedd9c)[uVar2] = local_f4[uVar2];
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xff) < 0x67);
    }
    else {
      uVar2 = 0;
      do {
        (&DAT_fffedd9c)[uVar2 & 0xff] = 0;
        uVar2 = (uVar2 & 0xff) + 1;
      } while ((uVar2 & 0xff) < 0x67);
    }
  }
  else {
    uVar2 = 0;
    if (param_2 == -0x80) {
      do {
        uVar2 = uVar2 & 0xff;
        (&DAT_fffedd9c)[uVar2] = local_f4[uVar2] & local_8c[uVar2];
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xff) < 0x67);
    }
    else {
      do {
        uVar2 = uVar2 & 0xff;
        (&DAT_fffedd9c)[uVar2] = local_f4[uVar2];
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xff) < 0x67);
      if ((param_10 != 0) &&
         ((&DAT_fffedd9c)[param_3] = (&DAT_fffedd9c)[param_3] | param_4, param_10 != 0xffff)) {
        uVar2 = (uint)(param_10 >> 8);
        bVar1 = (byte)param_10;
        if ((uVar2 == 0x13) && ((param_10 & 0x80) != 0)) {
          DAT_fffeddf4 = DAT_fffeddf4 | 0x80;
          bVar1 = bVar1 & 0x7f;
        }
        (&DAT_fffedd9c)[uVar2] = (&DAT_fffedd9c)[uVar2] | bVar1;
      }
    }
  }
  *param_11 = DAT_fffedd9c;
  param_11[1] = DAT_fffedd9d;
  param_11[2] = DAT_fffedd9e;
  param_11[3] = DAT_fffedd9f;
  param_11[4] = DAT_fffedda0;
  param_11[5] = DAT_fffedda1;
  param_11[6] = DAT_fffedda2;
  param_11[7] = DAT_fffedda3;
  param_11[8] = DAT_fffedda4;
  param_11[9] = DAT_fffedda5;
  param_11[10] = DAT_fffedda6;
  param_11[0xb] = DAT_fffedda7;
  param_11[0xc] = DAT_fffedda8;
  param_11[0xd] = DAT_fffedda9;
  param_11[0xe] = DAT_fffeddaa;
  param_11[0xf] = DAT_fffeddab;
  param_11[0x10] = DAT_fffeddac;
  param_11[0x11] = DAT_fffeddad;
  param_11[0x12] = DAT_fffeddae;
  param_11[0x13] = DAT_fffeddaf;
  param_11[0x14] = DAT_fffeddb0;
  param_11[0x15] = DAT_fffeddb1;
  param_11[0x16] = DAT_fffeddb2;
  param_11[0x17] = DAT_fffeddb3;
  param_11[0x18] = DAT_fffeddb4;
  param_11[0x19] = DAT_fffeddb5;
  param_11[0x1a] = DAT_fffeddb6;
  param_11[0x1b] = DAT_fffeddb7;
  param_11[0x1c] = DAT_fffeddb8;
  param_11[0x1d] = DAT_fffeddb9;
  param_11[0x1e] = DAT_fffeddba;
  param_11[0x1f] = DAT_fffeddbb;
  param_11[0x20] = DAT_fffeddbc;
  param_11[0x21] = DAT_fffeddbd;
  param_11[0x22] = DAT_fffeddbe;
  param_11[0x23] = DAT_fffeddbf;
  param_11[0x24] = DAT_fffeddc0;
  param_11[0x25] = DAT_fffeddc1;
  param_11[0x26] = DAT_fffeddc2;
  param_11[0x27] = DAT_fffeddc3;
  param_11[0x28] = DAT_fffeddc4;
  param_11[0x29] = DAT_fffeddc5;
  param_11[0x2a] = DAT_fffeddc6;
  param_11[0x2b] = DAT_fffeddc7;
  param_11[0x2c] = DAT_fffeddc8;
  param_11[0x2d] = DAT_fffeddc9;
  param_11[0x2e] = DAT_fffeddca;
  param_11[0x2f] = DAT_fffeddcb;
  param_11[0x30] = DAT_fffeddcc;
  param_11[0x31] = DAT_fffeddcd;
  param_11[0x32] = DAT_fffeddce;
  param_11[0x33] = DAT_fffeddcf;
  param_11[0x34] = DAT_fffeddd0;
  param_11[0x35] = DAT_fffeddd1;
  param_11[0x36] = DAT_fffeddd2;
  param_11[0x37] = DAT_fffeddd3;
  param_11[0x38] = DAT_fffeddd4;
  param_11[0x39] = DAT_fffeddd5;
  param_11[0x3a] = DAT_fffeddd6;
  param_11[0x3b] = DAT_fffeddd7;
  param_11[0x3c] = DAT_fffeddd8;
  param_11[0x3d] = DAT_fffeddd9;
  param_11[0x3e] = DAT_fffeddda;
  param_11[0x3f] = DAT_fffedddb;
  param_11[0x40] = DAT_fffedddc;
  param_11[0x41] = DAT_fffedddd;
  param_11[0x42] = DAT_fffeddde;
  param_11[0x43] = DAT_fffedddf;
  param_11[0x44] = DAT_fffedde0;
  param_11[0x45] = DAT_fffedde1;
  param_11[0x46] = DAT_fffedde2;
  param_11[0x47] = DAT_fffedde3;
  param_11[0x48] = DAT_fffedde4;
  param_11[0x49] = DAT_fffedde5;
  param_11[0x4a] = DAT_fffedde6;
  param_11[0x4b] = DAT_fffedde7;
  param_11[0x4c] = DAT_fffedde8;
  param_11[0x4d] = DAT_fffedde9;
  param_11[0x4e] = DAT_fffeddea;
  param_11[0x4f] = DAT_fffeddeb;
  param_11[0x50] = DAT_fffeddec;
  param_11[0x51] = DAT_fffedded;
  param_11[0x52] = DAT_fffeddee;
  param_11[0x53] = DAT_fffeddef;
  param_11[0x54] = DAT_fffeddf0;
  param_11[0x55] = DAT_fffeddf1;
  param_11[0x56] = DAT_fffeddf2;
  param_11[0x57] = DAT_fffeddf3;
  param_11[0x58] = DAT_fffeddf4;
  param_11[0x59] = DAT_fffeddf5;
  param_11[0x5a] = DAT_fffeddf6;
  param_11[0x5b] = DAT_fffeddf7;
  param_11[0x5c] = DAT_fffeddf8;
  param_11[0x5d] = DAT_fffeddf9;
  param_11[0x5e] = DAT_fffeddfa;
  param_11[0x5f] = DAT_fffeddfb;
  param_11[0x60] = DAT_fffeddfc;
  param_11[0x61] = DAT_fffeddfd;
  param_11[0x62] = DAT_fffeddfe;
  param_11[99] = DAT_fffeddff;
  param_11[100] = DAT_fffede00;
  param_11[0x65] = DAT_fffede01;
  param_11[0x66] = DAT_fffede02;
  return;
}

