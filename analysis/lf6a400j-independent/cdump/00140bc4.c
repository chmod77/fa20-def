
/* WARNING: Removing unreachable block (ram,0x00140cea) */
/* WARNING: Removing unreachable block (ram,0x00140cf2) */
/* WARNING: Removing unreachable block (ram,0x00140cf8) */
/* WARNING: Removing unreachable block (ram,0x00140cfe) */
/* WARNING: Removing unreachable block (ram,0x00140d0a) */
/* WARNING: Removing unreachable block (ram,0x00140d10) */
/* WARNING: Removing unreachable block (ram,0x00140d18) */
/* WARNING: Removing unreachable block (ram,0x00140d1e) */
/* WARNING: Removing unreachable block (ram,0x00140d26) */
/* WARNING: Removing unreachable block (ram,0x00140d2c) */
/* WARNING: Removing unreachable block (ram,0x00140d32) */
/* WARNING: Removing unreachable block (ram,0x00140d3e) */
/* WARNING: Removing unreachable block (ram,0x00140d44) */
/* WARNING: Removing unreachable block (ram,0x00140d4c) */
/* WARNING: Removing unreachable block (ram,0x00140d52) */
/* WARNING: Removing unreachable block (ram,0x00140d58) */
/* WARNING: Removing unreachable block (ram,0x00140d66) */
/* WARNING: Removing unreachable block (ram,0x00140d5c) */
/* WARNING: Removing unreachable block (ram,0x00140d74) */
/* WARNING: Removing unreachable block (ram,0x00140d7c) */
/* WARNING: Removing unreachable block (ram,0x00140db2) */
/* WARNING: Removing unreachable block (ram,0x00140c70) */
/* WARNING: Removing unreachable block (ram,0x00140da2) */
/* WARNING: Removing unreachable block (ram,0x00140db6) */
/* WARNING: Removing unreachable block (ram,0x00140dd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00140bc4(void)

{
  undefined4 uVar1;
  byte bVar2;
  
  FUN_00140670();
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff675e = _DAT_ffff675e & 0x7fff;
  _DAT_fffff76c = _DAT_fffff76c & 0x7fff;
  FUN_00001550(uVar1);
  do {
  } while (((int)(char)DAT_fffff01c & 0x80U) == 0);
  if (((int)(char)DAT_fffff01c & 0x80U) != 0) {
    DAT_fffff01c = DAT_fffff01c & 0x7f;
  }
  do {
    if ((DAT_fffff01c & 0x20) != 0) {
      DAT_fffff01c = DAT_fffff01c & 0xdf;
    }
  } while ((DAT_fffff01c & 0x40) == 0);
  bVar2 = DAT_fffff01c & 0xbf;
  do {
  } while (((int)(char)bVar2 & 0x80U) == 0);
  if (((int)(char)bVar2 & 0x80U) != 0) {
    bVar2 = DAT_fffff01c & 0x3f;
  }
  do {
    do {
      DAT_fffff01c = bVar2;
      bVar2 = DAT_fffff01c;
    } while ((DAT_fffff01c & 0x20) == 0);
    bVar2 = 0;
  } while( true );
}

