
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00020007) */
/* WARNING: Removing unreachable block (ram,0x0007005e) */
/* WARNING: Removing unreachable block (ram,0x000700e4) */
/* WARNING: Removing unreachable block (ram,0x00070126) */
/* WARNING: Removing unreachable block (ram,0x0007017e) */
/* WARNING: Removing unreachable block (ram,0x000701a4) */
/* WARNING: Removing unreachable block (ram,0x00070212) */
/* WARNING: Removing unreachable block (ram,0x00070234) */
/* WARNING: Removing unreachable block (ram,0x000702de) */
/* WARNING: Removing unreachable block (ram,0x0007034a) */
/* WARNING: Removing unreachable block (ram,0x00070368) */
/* WARNING: Removing unreachable block (ram,0x00070350) */
/* WARNING: Removing unreachable block (ram,0x00070352) */
/* WARNING: Removing unreachable block (ram,0x0007028c) */
/* WARNING: Removing unreachable block (ram,0x00070218) */
/* WARNING: Removing unreachable block (ram,0x0007021a) */
/* WARNING: Removing unreachable block (ram,0x000700ea) */
/* WARNING: Removing unreachable block (ram,0x000700ec) */
/* WARNING: Removing unreachable block (ram,0x00110056) */
/* WARNING: Removing unreachable block (ram,0x0011005c) */
/* WARNING: Removing unreachable block (ram,0x00110060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00141a6c(byte *param_1,byte *param_2,undefined4 param_3,byte *param_4,
                      undefined4 param_5,uint param_6,uint param_7,uint param_8,char param_9,
                      uint param_10,undefined1 *param_11,undefined4 param_12,undefined4 param_13,
                      int param_14)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar4;
  uint uVar3;
  byte *pbVar5;
  undefined4 extraout_r1;
  short sVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined1 unaff_r12;
  undefined4 unaff_r14;
  byte *unaff_gbr;
  ulonglong uVar7;
  undefined4 in_stack_00000040;
  
  pbVar5 = (&PTR_LAB_001611c4)[(uint)*param_1 * 3];
  bVar4 = param_1[1];
  uVar3 = (uint)(char)bVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar2 = FUN_000052ac(bVar4,*(undefined4 *)(&DAT_001616e4 + (uint)bVar4 * 4));
    FUN_00005318(bVar4,param_2);
    return CONCAT44(extraout_r1,uVar2);
  case 1:
    _UNK_0000000c = 0x6e4;
    PTR_LAB_001611c4._0_1_ = 0;
    return CONCAT44(pbVar5,1);
  case 2:
    *(undefined1 *)(uVar3 * 2) = 0xc4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
    *(undefined4 *)(unaff_r11 + uVar3) = unaff_r14;
    *(undefined4 *)(unaff_r11 + uVar3) = unaff_r14;
    *(undefined4 *)(unaff_r11 + uVar3) = unaff_r14;
    *(int *)(unaff_r9 + -4) = (int)(ZEXT48(param_2) * 0x1611c4 >> 0x20);
    sVar6 = (short)unaff_r8;
    *(short *)(&UNK_0006f181 + uVar3) = sVar6;
    *(undefined4 *)((int)&param_5 + uVar3) = 0xfffe3000;
    *(short *)(uVar3 + 0xf8f79000) = (short)unaff_r14;
    *(undefined1 *)(uVar3 + 0xf8f4d400) = unaff_r12;
    *(int *)(int)sVar6 = (int)sVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
    _UNK_0000000c = 0x6e4;
    PTR_LAB_001611c4._0_1_ = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    *(uint *)(uVar3 * 2) = uVar3;
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
                    /* WARNING: Read-only address (ram,0x0000000c) is written */
    _UNK_0000000c = 6;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)((int)unaff_gbr * 2) = unaff_gbr;
    *(byte **)unaff_gbr = unaff_gbr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    if ((uVar3 & 4) == 0) {
                    /* WARNING: Read-only address (ram,0x001611c4) is written */
      PTR_LAB_001611c4._0_1_ = 0;
    }
    else {
                    /* WARNING: Read-only address (ram,0x001611c4) is written */
      PTR_LAB_001611c4._0_1_ = 2;
    }
    if ((param_4[0x57] & 8) == 0) {
      *param_2 = *param_2 & 0xdf;
    }
    else {
      *param_2 = *param_2 | 0x20;
    }
    if ((param_4[0x57] & 0x10) == 0) {
      *param_2 = *param_2 & 0xbf;
    }
    else {
      *param_2 = *param_2 | 0x40;
    }
    if ((param_4[0x57] & 0x40) == 0) {
      *param_2 = *param_2 & 0x7f;
    }
    else {
      *param_2 = *param_2 | 0x80;
    }
    if ((param_4[0x2e] & 0x20) == 0) {
      DAT_fffef519 = DAT_fffef519 & 0xfe;
    }
    else {
      DAT_fffef519 = DAT_fffef519 | 1;
    }
    if ((*param_4 & 0x40) == 0) {
      DAT_fffef519 = DAT_fffef519 & 0xfd;
    }
    else {
      DAT_fffef519 = DAT_fffef519 | 2;
    }
    if (((int)DAT_ffff002c & 0x80U) == 0) {
      *pbVar5 = *pbVar5 & 0xef;
    }
    else {
      *pbVar5 = *pbVar5 | 0x10;
    }
    if (((((DAT_fffef9d4 & 2) != 0) || ((DAT_fffef9d4 & 4) != 0)) || ((DAT_fffef9d4 & 8) != 0)) ||
       ((DAT_fffef9d4 & 0x10) != 0)) {
      DAT_fffef498 = DAT_fffef498 | 1;
    }
    if ((((((int)(char)DAT_fffef9f2 & 0x80U) != 0) || ((DAT_fffef9f2 & 0x40) != 0)) ||
        (((DAT_fffef879 & 1) != 0 || (((DAT_fffef879 & 8) != 0 || ((DAT_fffef879 & 4) != 0)))))) ||
       ((DAT_fffef879 & 2) != 0)) {
      DAT_fffef498 = DAT_fffef498 | 2;
    }
    break;
  case 7:
    FUN_000b0c48();
    FUN_000afd84(0,(int)DAT_ffff04ed,(int)DAT_ffff04ef,unaff_r8 + 1);
    param_8 = (uint)_DAT_ffff0d3c;
    FUN_000b0234(0,(int)_DAT_fffeeee2,(int)DAT_ffff04e7,(int)_DAT_ffff0d48);
    FUN_000b056c(0,(int)DAT_ffff05aa,(int)_DAT_ffff0d44,unaff_r8 + 6);
    param_7 = (uint)((*unaff_gbr & 0x20) != 0);
    param_8 = (int)DAT_fffeeec6 & 1;
    param_14 = param_14 + 6;
    param_6 = (uint)DAT_ffff04ec;
    FUN_000afaa0(0,DAT_ffff091f & 1,(int)_DAT_ffff0d42,(int)DAT_ffff04ed);
    param_7 = (uint)((*unaff_gbr & 0x20) != 0);
    param_8 = (int)DAT_fffeeec6 & 1;
    param_6 = (uint)DAT_ffff04ec;
    FUN_000afc80(0,DAT_ffff091f & 1,(int)_DAT_ffff0d42,(int)DAT_ffff04ed);
    FUN_000b1200(0,(int)DAT_ffff04e6,&param_12);
    uVar2 = FUN_00001550(0xf0);
    bVar4 = DAT_ffff6570 | 0x10;
    if ((param_12._0_1_ & 1) == 0) {
      bVar4 = DAT_ffff6570 & 0xef;
    }
    DAT_ffff6570 = bVar4;
    FUN_00001550(uVar2);
    FUN_000b1278(0,(int)DAT_ffff04e6,&param_13);
    uVar2 = FUN_00001550(0xf0);
    bVar4 = DAT_ffff6570 | 1;
    if ((param_13._0_1_ & 1) == 0) {
      bVar4 = DAT_ffff6570 & 0xfe;
    }
    DAT_ffff6570 = bVar4;
    uVar7 = FUN_00001550(uVar2);
    return uVar7;
  case 8:
    param_10 = param_10 & 0xff;
    if ((param_10 == 1) && (399 < (uVar3 & 0xffff))) {
      DAT_fffedd1c = 0;
    }
    if ((param_9 != '\0') || (param_10 = (uint)param_2 & 0xff, param_10 == 1)) {
      DAT_fffedd1c = 0;
    }
    *param_11 = DAT_fffedd1c;
    return CONCAT44(&LAB_00001400,param_10);
  case 9:
    _UNK_0000000c = 0x6e4;
    PTR_LAB_001611c4._0_1_ = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
    _UNK_0000000c = 0x6e4;
    PTR_LAB_001611c4._0_1_ = 0;
    return CONCAT44(in_stack_00000040,0xffffff99);
  case 0xb:
    _UNK_0000000c = 0x6e4;
    PTR_LAB_001611c4._0_1_ = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((((((DAT_fffef9d4 & 2) != 0) || ((DAT_fffef9d4 & 4) != 0)) || ((DAT_fffef9d4 & 8) != 0)) ||
      (((DAT_fffef9d4 & 0x10) != 0 || (((int)(char)DAT_fffef9f2 & 0x80U) != 0)))) ||
     ((((DAT_fffef9f2 & 0x40) != 0 || (((DAT_fffef879 & 1) != 0 || ((DAT_fffef879 & 8) != 0)))) ||
      (((DAT_fffef879 & 4) != 0 || ((DAT_fffef879 & 2) != 0)))))) {
    DAT_fffef498 = DAT_fffef498 | 8;
  }
  if ((DAT_fffef8f3 & 8) != 0) {
    *pbVar5 = *pbVar5 | 0x20;
  }
  if ((DAT_fffef8f3 & 4) != 0) {
    *pbVar5 = *pbVar5 | 0x40;
  }
  if (((DAT_fffef8f3 & 2) != 0) || ((DAT_fffef8f3 & 1) != 0)) {
    *pbVar5 = *pbVar5 | 0x80;
  }
  if (((param_4[0x66] & 1) == 0) && ((param_4[0x66] & 2) == 0)) {
    DAT_fffef519 = DAT_fffef519 & 0xfb;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 4;
  }
  if ((DAT_ffff08bd & 0x40) == 0) {
    DAT_fffef519 = DAT_fffef519 & 0xf7;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 8;
  }
  if (((DAT_ffff0885 & 0x10) == 0) && ((DAT_ffff08af & 0x40) == 0)) {
    DAT_fffef519 = DAT_fffef519 & 0xef;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 0x10;
  }
  if (((DAT_ffff0885 & 8) == 0) && ((DAT_ffff08af & 0x20) == 0)) {
    DAT_fffef519 = DAT_fffef519 & 0xdf;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 0x20;
  }
  if (((DAT_ffff0885 & 4) == 0) && ((DAT_ffff08af & 0x10) == 0)) {
    DAT_fffef519 = DAT_fffef519 & 0xbf;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 0x40;
  }
  if (((DAT_ffff0885 & 2) == 0) && ((DAT_ffff08af & 8) == 0)) {
    iVar1 = (int)(char)DAT_fffef519;
    DAT_fffef519 = DAT_fffef519 & 0x7f;
    return CONCAT44(pbVar5,iVar1) & 0xffffffff0000007f;
  }
  iVar1 = (int)(char)DAT_fffef519;
  DAT_fffef519 = DAT_fffef519 | 0x80;
  return CONCAT44(pbVar5,iVar1) | 0x80;
}

