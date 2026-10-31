
/* WARNING: Removing unreachable block (ram,0x00107586) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010755c(byte param_1,byte param_2,ushort param_3,char param_4,char param_5,
                 undefined1 *param_6,undefined1 *param_7,byte *param_8,byte *param_9,byte *param_10,
                 byte *param_11,byte *param_12,undefined1 *param_13,undefined1 *param_14,
                 undefined1 *param_15)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\x01';
  if (param_1 <= DAT_fffedb06) {
    cVar13 = DAT_fffedb12;
  }
  if (param_1 == 0) {
    cVar13 = '\0';
  }
  cVar12 = '\x01';
  if (DAT_fffedb06 <= param_1) {
    cVar12 = DAT_fffedb09;
  }
  if (param_1 != 0) {
    cVar12 = '\0';
  }
  cVar9 = '\x01';
  if (param_2 <= DAT_fffedb04) {
    cVar9 = DAT_fffedb02;
  }
  if (param_2 == 0) {
    cVar9 = '\0';
  }
  cVar11 = '\x01';
  if (DAT_fffedb04 <= param_2) {
    cVar11 = DAT_fffedb05;
  }
  if (param_2 != 0) {
    cVar11 = '\0';
  }
  DAT_fffedaf5 = false;
  if ((param_4 != '\0') && (DAT_fffedb0f == '\0')) {
    DAT_fffedaf5 = true;
  }
  if ((((bool)DAT_fffedaf5) && (cVar12 != '\0')) && (cVar11 != '\0')) {
    bVar1 = 0xf9 < _DAT_fffedafc;
  }
  else {
    bVar1 = false;
  }
  if ((((bool)DAT_fffedaf5) && (cVar12 != '\0')) && (cVar11 != '\0')) {
    sVar8 = -1;
    if (_DAT_fffedafc != 0xffff) {
      sVar8 = _DAT_fffedafc + 1;
    }
  }
  else {
    _DAT_fffedafc = 0;
    sVar8 = _DAT_fffedafc;
  }
  _DAT_fffedafc = sVar8;
  if (((cVar9 == '\0') || (cVar13 == '\0')) || (!(bool)DAT_fffedaf5)) {
    bVar2 = false;
  }
  else {
    bVar2 = 0xf9 < _DAT_fffedaf6;
  }
  if (((cVar9 == '\0') || (cVar13 == '\0')) || (!(bool)DAT_fffedaf5)) {
    _DAT_fffedaf6 = 0;
    sVar8 = _DAT_fffedaf6;
  }
  else {
    sVar8 = -1;
    if (_DAT_fffedaf6 != 0xffff) {
      sVar8 = _DAT_fffedaf6 + 1;
    }
  }
  _DAT_fffedaf6 = sVar8;
  bVar7 = false;
  if ((DAT_fffedb03 != '\0') && (param_3 < 0x12)) {
    bVar7 = true;
  }
  if (((bVar7) && (param_1 == 0)) && (((bool)DAT_fffedaf5 && (cVar9 != '\0')))) {
    bVar3 = 0xf9 < _DAT_fffedb00;
  }
  else {
    bVar3 = false;
  }
  if ((((bVar7) && (param_1 == 0)) && ((bool)DAT_fffedaf5)) && (cVar9 != '\0')) {
    sVar8 = -1;
    if (_DAT_fffedb00 != 0xffff) {
      sVar8 = _DAT_fffedb00 + 1;
    }
  }
  else {
    _DAT_fffedb00 = 0;
    sVar8 = _DAT_fffedb00;
  }
  _DAT_fffedb00 = sVar8;
  if (((bVar7) && (param_2 == 0)) && (((bool)DAT_fffedaf5 && (cVar13 != '\0')))) {
    bVar4 = 0xf9 < _DAT_fffedafe;
  }
  else {
    bVar4 = false;
  }
  if (((bVar7) && (param_2 == 0)) && (((bool)DAT_fffedaf5 && (cVar13 != '\0')))) {
    sVar8 = -1;
    if (_DAT_fffedafe != 0xffff) {
      sVar8 = _DAT_fffedafe + 1;
    }
  }
  else {
    _DAT_fffedafe = 0;
    sVar8 = _DAT_fffedafe;
  }
  _DAT_fffedafe = sVar8;
  DAT_fffedaf3 = 1;
  if (param_3 < 0x2c7) {
    DAT_fffedaf3 = DAT_fffedb0c;
  }
  if ((bVar4) || (bVar3)) {
    DAT_fffedaf3 = 0;
  }
  bVar7 = false;
  if ((0x2c6 < param_3) && (DAT_fffedb10 != '\0')) {
    bVar7 = true;
  }
  if ((((cVar12 == '\0') || (!(bool)DAT_fffedaf5)) || (param_2 == 0)) || (!bVar7)) {
    bVar5 = false;
  }
  else {
    bVar5 = 0xf9 < _DAT_fffedaf8;
  }
  if (((cVar12 == '\0') || (!(bool)DAT_fffedaf5)) || ((param_2 == 0 || (!bVar7)))) {
    _DAT_fffedaf8 = 0;
    sVar8 = _DAT_fffedaf8;
  }
  else {
    sVar8 = -1;
    if (_DAT_fffedaf8 != 0xffff) {
      sVar8 = _DAT_fffedaf8 + 1;
    }
  }
  _DAT_fffedaf8 = sVar8;
  if (((cVar11 == '\0') || (param_1 == 0)) || ((!(bool)DAT_fffedaf5 || (!bVar7)))) {
    bVar6 = false;
  }
  else {
    bVar6 = 0xf9 < _DAT_fffedafa;
  }
  if ((((cVar11 == '\0') || (param_1 == 0)) || (!(bool)DAT_fffedaf5)) || (!bVar7)) {
    _DAT_fffedafa = 0;
    sVar8 = _DAT_fffedafa;
  }
  else {
    sVar8 = -1;
    if (_DAT_fffedafa != 0xffff) {
      sVar8 = _DAT_fffedafa + 1;
    }
  }
  _DAT_fffedafa = sVar8;
  DAT_fffedaf4 = 1;
  if (0x11 < param_3) {
    DAT_fffedaf4 = DAT_fffedb07;
  }
  if ((bVar5) || (bVar6)) {
    DAT_fffedaf4 = 0;
  }
  if (((bVar2) || (bVar10 = DAT_fffedb0d, bVar1)) && (bVar10 = 0xff, DAT_fffedb0d != 0xff)) {
    bVar10 = DAT_fffedb0d + 1;
  }
  if (((bool)DAT_fffedaf5) && ((((bVar6 || (bVar4)) || (bVar5)) || (DAT_fffedb0d = bVar10, bVar3))))
  {
    DAT_fffedb0d = 0;
  }
  DAT_fffedaf2 = DAT_fffedb08;
  if ((bVar6) && (DAT_fffedaf2 = 0xff, DAT_fffedb08 != 0xff)) {
    DAT_fffedaf2 = DAT_fffedb08 + 1;
  }
  if (param_1 < DAT_fffedb06) {
    DAT_fffedaf2 = 0;
  }
  if (!(bool)DAT_fffedaf5) {
    DAT_fffedaf2 = DAT_fffedb08;
  }
  DAT_fffedaf0 = DAT_fffedb0b;
  if ((bVar5) && (DAT_fffedaf0 = 0xff, DAT_fffedb0b != 0xff)) {
    DAT_fffedaf0 = DAT_fffedb0b + 1;
  }
  if (param_2 < DAT_fffedb04) {
    DAT_fffedaf0 = 0;
  }
  if (!(bool)DAT_fffedaf5) {
    DAT_fffedaf0 = DAT_fffedb0b;
  }
  DAT_fffedaf1 = DAT_fffedb0a;
  if ((bVar3) && (DAT_fffedaf1 = 0xff, DAT_fffedb0a != 0xff)) {
    DAT_fffedaf1 = DAT_fffedb0a + 1;
  }
  if (DAT_fffedb06 < param_1) {
    DAT_fffedaf1 = 0;
  }
  if (!(bool)DAT_fffedaf5) {
    DAT_fffedaf1 = DAT_fffedb0a;
  }
  bVar10 = DAT_fffedb11;
  if ((bVar4) && (bVar10 = 0xff, DAT_fffedb11 != 0xff)) {
    bVar10 = DAT_fffedb11 + 1;
  }
  if (DAT_fffedb04 < param_2) {
    bVar10 = 0;
  }
  DAT_fffedaef = DAT_fffedb11;
  if (((bool)DAT_fffedaf5) &&
     ((((DAT_fffedaef = bVar10, 7 < bVar10 || (7 < DAT_fffedaf0)) || (7 < DAT_fffedaf1)) ||
      (7 < DAT_fffedaf2)))) {
    DAT_fffedb13 = 1;
  }
  if (param_5 != '\0') {
    DAT_fffedb13 = 0;
  }
  if (((bool)DAT_fffedaf5) && (7 < DAT_fffedb0d)) {
    DAT_fffedaed = 1;
  }
  else {
    DAT_fffedaed = DAT_fffedb0e;
  }
  DAT_fffedaec = DAT_fffedb13;
  DAT_fffedaee = DAT_fffedb0d;
  DAT_fffedb02 = cVar9;
  DAT_fffedb05 = cVar11;
  DAT_fffedb07 = DAT_fffedaf4;
  DAT_fffedb09 = cVar12;
  DAT_fffedb0c = DAT_fffedaf3;
  DAT_fffedb12 = cVar13;
  *param_6 = DAT_fffedb13;
  *param_7 = DAT_fffedaed;
  *param_8 = DAT_fffedaee;
  *param_9 = DAT_fffedaef;
  *param_10 = DAT_fffedaf0;
  *param_11 = DAT_fffedaf1;
  *param_12 = DAT_fffedaf2;
  *param_13 = DAT_fffedaf3;
  *param_14 = DAT_fffedaf4;
  *param_15 = DAT_fffedaf5;
  DAT_fffedb06 = param_1;
  DAT_fffedb04 = param_2;
  DAT_fffedb10 = DAT_fffedaf4;
  DAT_fffedb0f = DAT_fffedaec;
  DAT_fffedb0e = DAT_fffedaed;
  DAT_fffedb0d = DAT_fffedaee;
  DAT_fffedb11 = DAT_fffedaef;
  DAT_fffedb0b = DAT_fffedaf0;
  DAT_fffedb0a = DAT_fffedaf1;
  DAT_fffedb08 = DAT_fffedaf2;
  DAT_fffedb03 = DAT_fffedaf3;
  return;
}

