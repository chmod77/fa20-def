
/* WARNING: Removing unreachable block (ram,0x0003b340) */
/* WARNING: Removing unreachable block (ram,0x0003b348) */
/* WARNING: Removing unreachable block (ram,0x0003b350) */
/* WARNING: Removing unreachable block (ram,0x0003b380) */
/* WARNING: Removing unreachable block (ram,0x0003b58a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003aea8(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  byte local_28;
  
  cVar1 = DAT_ffff66b0;
  DAT_ffff0001 = DAT_ffff0009 | 0x40;
  if ((DAT_ffff0009 & 0x10) == 0) {
    DAT_ffff0001 = DAT_ffff0009 & 0xbf;
  }
  bVar2 = DAT_ffff0008 | 2;
  if ((DAT_ffff0568 & 1) == 0) {
    bVar2 = DAT_ffff0008 & 0xfd;
  }
  DAT_ffff0003 = DAT_ffff0007 | 0x10;
  if ((DAT_fffef079 & 0x20) == 0) {
    DAT_ffff0003 = DAT_ffff0007 & 0xef;
  }
  bVar3 = bVar2 | 4;
  if ((DAT_fffef319 & 1) == 0) {
    bVar3 = bVar2 & 0xfb;
  }
  if (DAT_ffff059f == '\a') {
    DAT_ffff000a = DAT_ffff000a | 0x40;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xbf;
  }
  if (DAT_ffff059f == '\x06') {
    DAT_ffff000a = DAT_ffff000a | 2;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xfd;
  }
  if (DAT_ffff059f == '\x05') {
    DAT_ffff000a = DAT_ffff000a | 4;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xfb;
  }
  if (DAT_ffff059f == '\x04') {
    DAT_ffff000a = DAT_ffff000a | 0x20;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xdf;
  }
  if (DAT_ffff059f == '\x01') {
    DAT_ffff000a = DAT_ffff000a | 8;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xf7;
  }
  if (DAT_ffff059f == '\0') {
    DAT_ffff000a = DAT_ffff000a | 0x10;
  }
  else {
    DAT_ffff000a = DAT_ffff000a & 0xef;
  }
  if ((DAT_ffff000b & 0x20) == 0) {
    DAT_ffff0008 = bVar3 & 0xdf;
  }
  else {
    DAT_ffff0008 = bVar3 | 0x20;
  }
  DAT_fffeec55 = DAT_ffff0000;
  DAT_ffff0000 = DAT_ffff0006 & 0xfd | 2;
  if ((DAT_ffff000b & 1) == 0) {
    DAT_ffff0000 = DAT_ffff0006 & 0xfd;
  }
  DAT_ffff0002 = DAT_ffff0008;
  DAT_ffff000f = DAT_ffff000a;
  DAT_ffff0010 = DAT_ffff000b;
  DAT_ffff0004 = DAT_ffff000d;
  DAT_ffff0012 = DAT_ffff000e;
  bVar2 = 0x10;
  if ((DAT_ffff0003 & 0x10) == 0) {
    bVar2 = 0;
  }
  bVar3 = bVar2 | 1;
  if ((DAT_ffff0008 & 4) == 0) {
    bVar3 = bVar2;
  }
  bVar2 = bVar3 | 0x20;
  if ((DAT_ffff0006 & 2) == 0) {
    bVar2 = bVar3;
  }
  bVar3 = bVar2 | 8;
  if (((int)(char)DAT_ffff0001 & 0x80U) == 0) {
    bVar3 = bVar2;
  }
  bVar2 = bVar3 | 4;
  if ((DAT_ffff0001 & 0x40) == 0) {
    bVar2 = bVar3;
  }
  bVar3 = bVar2 | 0x40;
  if (((int)(char)DAT_ffff0008 & 0x80U) == 0) {
    bVar3 = bVar2;
  }
  DAT_fffee68e = DAT_fffee68d;
  bVar2 = DAT_fffee714 | 8;
  if ((DAT_fffee713 & 8) == 0) {
    bVar2 = DAT_fffee714 & 0xf7;
  }
  bVar4 = DAT_fffee713 | 8;
  if ((DAT_fffee712 & 8) == 0) {
    bVar4 = DAT_fffee713 & 0xf7;
  }
  bVar5 = DAT_fffee712 | 8;
  if ((DAT_fffee711 & 8) == 0) {
    bVar5 = DAT_fffee712 & 0xf7;
  }
  bVar6 = DAT_fffee711 | 8;
  if ((DAT_fffee710 & 8) == 0) {
    bVar6 = DAT_fffee711 & 0xf7;
  }
  bVar7 = DAT_fffee710 | 8;
  if ((DAT_fffef09e & 1) == 0) {
    bVar7 = DAT_fffee710 & 0xf7;
  }
  DAT_fffee68d = bVar3;
  DAT_fffee710 = bVar7;
  DAT_fffee711 = bVar6;
  DAT_fffee712 = bVar5;
  DAT_fffee713 = bVar4;
  DAT_fffee714 = bVar2;
  DAT_ffff0007 = DAT_ffff0003;
  DAT_ffff0009 = DAT_ffff0001;
  if (DAT_ffff66b0 == '\x03') {
    _DAT_ffff2ad6 = FUN_00001540(_DAT_ffff2ad6 + 1);
  }
  else {
    _DAT_ffff2ad6 = 0;
  }
  _DAT_fffeed32 = FUN_0016bae4(&PTR_DAT_0016388c,(int)DAT_ffff29a8);
  if (((_DAT_ffff2ad6 < _DAT_fffeed32) || (cVar1 != '\x03')) || ((DAT_ffff0000 & 0x20) == 0)) {
    DAT_fffee710 = DAT_fffee710 & 0xfb;
  }
  else {
    DAT_fffee710 = DAT_fffee710 | 4;
  }
  FUN_0007e1d0();
  DAT_fffee698 = DAT_fffee697;
  bVar2 = 4;
  if ((DAT_ffff0007 & 8) == 0) {
    bVar2 = 0;
  }
  DAT_fffee697 = bVar2 | 0x80;
  if ((DAT_ffff000b & 0x20) == 0) {
    DAT_fffee697 = bVar2;
  }
  local_28 = 8;
  if ((DAT_ffff000b & 1) == 0) {
    local_28 = 0;
  }
  if (((DAT_fffee68d & 0x20) != 0) || ((DAT_fffee68e & 0x20) != 0)) {
    local_28 = local_28 | 4;
  }
  bVar2 = local_28 | 1;
  if ((DAT_ffff0008 & 2) == 0) {
    bVar2 = local_28;
  }
  if ((((DAT_fffee68d & 0x10) != 0) || ((bVar2 & 1) != 0)) ||
     (local_28 = bVar2, (DAT_fffee68d & 1) != 0)) {
    local_28 = bVar2 | 0x10;
  }
  DAT_fffee694 = DAT_fffee693;
  DAT_fffee693 = local_28;
  bVar2 = DAT_fffee714 | 0x80;
  if (((int)(char)DAT_fffee713 & 0x80U) == 0) {
    bVar2 = DAT_fffee714 & 0x7f;
  }
  bVar3 = DAT_fffee713 | 0x80;
  if (((int)(char)DAT_fffee712 & 0x80U) == 0) {
    bVar3 = DAT_fffee713 & 0x7f;
  }
  bVar4 = DAT_fffee712 | 0x80;
  if (((int)(char)DAT_fffee711 & 0x80U) == 0) {
    bVar4 = DAT_fffee712 & 0x7f;
  }
  bVar5 = DAT_fffee711 | 0x80;
  if (((int)(char)DAT_fffee710 & 0x80U) == 0) {
    bVar5 = DAT_fffee711 & 0x7f;
  }
  bVar6 = DAT_fffee710 & 0x7f;
  DAT_fffee691 = DAT_fffee690;
  DAT_fffee690 = 0x20;
  if ((DAT_ffff0000 & 1) == 0) {
    DAT_fffee690 = 0;
  }
  DAT_fffee711 = bVar5;
  DAT_fffee712 = bVar4;
  DAT_fffee713 = bVar3;
  DAT_fffee714 = bVar2;
  if (((DAT_fffee699 & 0x40) != 0) && (((int)(char)DAT_fffee699 & 0x80U) == 0)) {
    DAT_fffee68f = DAT_fffee68d;
    DAT_fffee68e = DAT_fffee68d;
    DAT_fffee696 = local_28;
    DAT_fffee695 = local_28;
    DAT_fffee694 = local_28;
    bVar6 = bVar6 | 8;
    if ((DAT_fffef09e & 1) == 0) {
      bVar6 = DAT_fffee710 & 0x77;
    }
    DAT_fffee711 = bVar5 & 0x7f | 8;
    if ((bVar6 & 8) == 0) {
      DAT_fffee711 = bVar5 & 0x77;
    }
    DAT_fffee712 = bVar4 & 0x7f | 8;
    if ((DAT_fffee711 & 8) == 0) {
      DAT_fffee712 = bVar4 & 0x77;
    }
    DAT_fffee713 = bVar3 & 0x7f | 8;
    if ((DAT_fffee712 & 8) == 0) {
      DAT_fffee713 = bVar3 & 0x77;
    }
    DAT_fffee714 = bVar2 & 0x7f | 8;
    if ((DAT_fffee713 & 8) == 0) {
      DAT_fffee714 = bVar2 & 0x77;
    }
    DAT_fffee699 = DAT_fffee699 | 0x80;
    DAT_fffeec55 = DAT_fffeec55 & 0xfe;
    DAT_fffee691 = DAT_fffee690;
    DAT_fffee692 = DAT_fffee690;
    DAT_fffee698 = DAT_fffee697;
  }
  DAT_fffee710 = bVar6;
  DAT_fffee699 = DAT_fffee699 | 0x40;
  DAT_ffff2a3a = (DAT_ffffab40 & 0x40) == 0;
  uVar8 = DAT_ffff2a3a;
  if ((bool)DAT_ffff2a3a) {
    DAT_ffff2a3a = 0;
    uVar8 = FUN_0000152c(DAT_ffff2a39 + 1);
  }
  DAT_ffff2a39 = uVar8;
  FUN_0007e1cc();
  return;
}

