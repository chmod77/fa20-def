
/* WARNING: Removing unreachable block (ram,0x00141524) */
/* WARNING: Removing unreachable block (ram,0x00141482) */
/* WARNING: Removing unreachable block (ram,0x0014148a) */
/* WARNING: Removing unreachable block (ram,0x00141490) */
/* WARNING: Removing unreachable block (ram,0x00141496) */
/* WARNING: Removing unreachable block (ram,0x001414a2) */
/* WARNING: Removing unreachable block (ram,0x001414a8) */
/* WARNING: Removing unreachable block (ram,0x001414b0) */
/* WARNING: Removing unreachable block (ram,0x00141410) */
/* WARNING: Removing unreachable block (ram,0x001414b6) */
/* WARNING: Removing unreachable block (ram,0x001414d0) */
/* WARNING: Removing unreachable block (ram,0x001414d6) */
/* WARNING: Removing unreachable block (ram,0x001414d8) */
/* WARNING: Removing unreachable block (ram,0x001414ee) */
/* WARNING: Removing unreachable block (ram,0x001414f4) */
/* WARNING: Removing unreachable block (ram,0x001414fa) */
/* WARNING: Removing unreachable block (ram,0x00141504) */
/* WARNING: Removing unreachable block (ram,0x001414fe) */
/* WARNING: Removing unreachable block (ram,0x00141508) */
/* WARNING: Removing unreachable block (ram,0x00141510) */
/* WARNING: Removing unreachable block (ram,0x00141516) */
/* WARNING: Removing unreachable block (ram,0x0014151e) */
/* WARNING: Removing unreachable block (ram,0x001414de) */
/* WARNING: Removing unreachable block (ram,0x00141530) */
/* WARNING: Removing unreachable block (ram,0x0014155c) */
/* WARNING: Removing unreachable block (ram,0x00141556) */
/* WARNING: Removing unreachable block (ram,0x00141560) */
/* WARNING: Removing unreachable block (ram,0x0014156c) */
/* WARNING: Removing unreachable block (ram,0x0014157a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001413ba(void)

{
  undefined4 uVar1;
  byte bVar2;
  
  FUN_00140670();
  FUN_00140480();
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

