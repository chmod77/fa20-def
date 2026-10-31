
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00148c6e) */
/* WARNING: Removing unreachable block (ram,0x00148ca4) */
/* WARNING: Removing unreachable block (ram,0x00148c94) */
/* WARNING: Removing unreachable block (ram,0x00148cb2) */
/* WARNING: Removing unreachable block (ram,0x00146d40) */
/* WARNING: Removing unreachable block (ram,0x00146d76) */
/* WARNING: Removing unreachable block (ram,0x00146d66) */
/* WARNING: Removing unreachable block (ram,0x00146d84) */
/* WARNING: Removing unreachable block (ram,0x00148944) */
/* WARNING: Removing unreachable block (ram,0x0014897a) */
/* WARNING: Removing unreachable block (ram,0x0014896a) */
/* WARNING: Removing unreachable block (ram,0x00148988) */
/* WARNING: Removing unreachable block (ram,0x0014859e) */
/* WARNING: Removing unreachable block (ram,0x001485d4) */
/* WARNING: Removing unreachable block (ram,0x001485c4) */
/* WARNING: Removing unreachable block (ram,0x001485e2) */
/* WARNING: Removing unreachable block (ram,0x00147de8) */
/* WARNING: Removing unreachable block (ram,0x00147e1e) */
/* WARNING: Removing unreachable block (ram,0x00147e0e) */
/* WARNING: Removing unreachable block (ram,0x00147e2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_001469a6(byte param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 unaff_gbr;
  
  puVar1 = (undefined1 *)(uint)(byte)(&PTR_DAT_00162528)[(uint)param_1 * 2][8];
  if (((((puVar1 != (undefined1 *)0x1) && (puVar1 != (undefined1 *)0x2)) &&
       (puVar1 != (undefined1 *)0x3)) &&
      ((puVar1 != (undefined1 *)0x4 && (puVar1 != (undefined1 *)0x5)))) ||
     (puVar1 = (undefined1 *)FUN_00146f68(), DAT_ffff6704 != '\0')) {
    return puVar1;
  }
  DAT_ffff6704 = 1;
  DAT_ffff6705 = 0xff;
  FUN_001471d4();
  DAT_ffff670e = param_1;
  if ((param_1 == 0) && ((DAT_ffff66ca & 4) != 0)) {
    DAT_ffff670e = 4;
  }
  FUN_001483c6((int)(char)DAT_ffff670e);
  _DAT_ffff6708 = (&PTR_DAT_00162528)[(uint)DAT_ffff670e * 2];
  DAT_ffff670c = (&DAT_0016252c)[(uint)DAT_ffff670e * 8];
  _DAT_ffff6710 = 0;
  DAT_ffff670d = 0;
  uVar2 = (uint)(byte)_DAT_ffff6708[8];
  puVar1 = (undefined1 *)(uVar2 * 0x14);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(_DAT_ffff6708[8]) {
  case 0:
    return puVar1;
  case 1:
    FUN_001490d4(0);
    (*(code *)(&PTR_LAB_00162570)[(uint)(byte)_DAT_ffff6708[(uint)DAT_ffff670d * 0x10 + 8] * 5])(0);
    do {
    } while( true );
  case 2:
    FUN_001490d4(1);
    (*(code *)(&PTR_LAB_00162570)[(uint)(byte)_DAT_ffff6708[(uint)DAT_ffff670d * 0x10 + 8] * 5])(0);
    do {
    } while( true );
  case 3:
    FUN_001490d4(1);
    (*(code *)(&PTR_LAB_00162570)[(uint)(byte)_DAT_ffff6708[(uint)DAT_ffff670d * 0x10 + 8] * 5])(0);
    do {
    } while( true );
  case 4:
    FUN_001490d4(2);
    (*(code *)(&PTR_LAB_00162570)[(uint)(byte)_DAT_ffff6708[(uint)DAT_ffff670d * 0x10 + 8] * 5])(0);
    do {
    } while( true );
  case 5:
    FUN_001490d4(3);
    (*(code *)(&PTR_LAB_00162570)[(uint)(byte)_DAT_ffff6708[(uint)DAT_ffff670d * 0x10 + 8] * 5])(0);
    do {
    } while( true );
  case 7:
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined1 **)(uVar2 * 0x28) = puVar1;
    *(undefined4 *)unaff_gbr = unaff_gbr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_fffffc01 & 3) != 0) {
    if ((DAT_fffffc01 & 3) == 1) {
      DAT_fffffc04 = 0x67;
      DAT_fffffc05 = 0xd;
      return &DAT_ffff670d;
    }
    DAT_fffffc04 = 0xff;
    DAT_fffffc05 = 0xff;
    DAT_fffffc06 = 0x67;
    DAT_fffffc07 = 0xd;
    return &DAT_ffff670d;
  }
  DAT_fffffc04 = 0xd;
  return &DAT_ffff670d;
}

