
void FUN_00069958(void)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_fffef738 & 1) == 0) {
    DAT_fffefa38 = DAT_fffefa38 & 0xfe;
  }
  else {
    DAT_fffefa38 = DAT_fffefa38 | 1;
  }
  DAT_fffefe9f = 1;
  if ((DAT_fffef738 & 4) == 0) {
    DAT_fffefa38 = DAT_fffefa38 & 0xfd;
  }
  else {
    DAT_fffefa38 = DAT_fffefa38 | 2;
  }
  DAT_fffefea0 = 1;
  if ((DAT_fffef738 & 2) == 0) {
    DAT_fffefa38 = DAT_fffefa38 & 0xfb;
  }
  else {
    DAT_fffefa38 = DAT_fffefa38 | 4;
  }
  DAT_fffefea1 = 1;
  if ((DAT_fffef738 & 8) == 0) {
    DAT_fffefa38 = DAT_fffefa38 & 0xf7;
  }
  else {
    DAT_fffefa38 = DAT_fffefa38 | 8;
  }
  DAT_fffefea2 = 1;
  if ((DAT_fffefff1 & 4) == 0) {
    DAT_fffefa38 = DAT_fffefa38 & 0xef;
  }
  else {
    DAT_fffefa38 = DAT_fffefa38 | 0x10;
  }
  DAT_fffefea3 = 1;
  if ((DAT_fffef739 & 1) == 0) {
    DAT_fffefe9c = DAT_fffefe9c & 0xfe;
  }
  else {
    DAT_fffefe9c = DAT_fffefe9c | 1;
  }
  DAT_fffefea4 = 1;
  if ((DAT_fffef739 & 4) == 0) {
    DAT_fffefe9c = DAT_fffefe9c & 0xfd;
  }
  else {
    DAT_fffefe9c = DAT_fffefe9c | 2;
  }
  DAT_fffefea5 = 1;
  if ((DAT_fffef739 & 8) == 0) {
    DAT_fffefe9c = DAT_fffefe9c & 0xfb;
  }
  else {
    DAT_fffefe9c = DAT_fffefe9c | 4;
  }
  DAT_fffefea6 = 1;
  if ((DAT_fffef739 & 2) == 0) {
    DAT_fffefe9c = DAT_fffefe9c & 0xf7;
  }
  else {
    DAT_fffefe9c = DAT_fffefe9c | 8;
  }
  DAT_fffefea7 = 1;
  if (((DAT_fffef739 & 0x10) == 0) && ((DAT_fffef739 & 0x20) == 0)) {
    DAT_fffefe9c = DAT_fffefe9c & 0xef;
  }
  else if (((int)DAT_fffef555 & 0x80U) == 0) {
    DAT_fffefe9c = DAT_fffefe9c | 0x10;
  }
  DAT_fffefea8 = 1;
  if ((DAT_fffef739 & 0x40) == 0) {
    DAT_fffefe9c = DAT_fffefe9c & 0xdf;
  }
  else {
    DAT_fffefe9c = DAT_fffefe9c | 0x20;
  }
  DAT_fffefea9 = 1;
  if (((DAT_fffef737 & 0x10) == 0) && ((DAT_fffef744 & 1) == 0)) {
    DAT_fffefe9d = DAT_fffefe9d & 0xfe;
  }
  else {
    DAT_fffefe9d = DAT_fffefe9d | 1;
  }
  DAT_fffefeaa = 1;
  if ((DAT_fffef744 & 2) == 0) {
    DAT_fffefe9d = DAT_fffefe9d & 0xfd;
  }
  else {
    DAT_fffefe9d = DAT_fffefe9d | 2;
  }
  DAT_fffefeab = 1;
  if ((DAT_fffef737 & 0x20) == 0) {
    DAT_fffefe9e = DAT_fffefe9e & 0xfe;
  }
  else {
    DAT_fffefe9e = DAT_fffefe9e | 1;
  }
  DAT_fffefeac = 1;
  if (((DAT_fffef910 & 4) == 0) && ((DAT_fffef737 & 0x40) == 0)) {
    DAT_fffefe9e = DAT_fffefe9e & 0xfd;
  }
  else {
    DAT_fffefe9e = DAT_fffefe9e | 2;
  }
  DAT_fffefead = 1;
  if (((int)(char)DAT_fffef910 & 0x80U) == 0) {
    DAT_fffefe9e = DAT_fffefe9e & 0xfb;
  }
  else {
    DAT_fffefe9e = DAT_fffefe9e | 4;
  }
  DAT_fffefeae = 1;
  if ((DAT_ffff093f & 8) == 0) {
    DAT_fffeff79 = DAT_fffeff79 & 0xfb;
  }
  else {
    DAT_fffeff79 = DAT_fffeff79 | 4;
  }
  DAT_fffeff80 = 1;
  if (((((int)DAT_ffff34b8 & 0x80U) == 0) && ((DAT_fffef911 & 2) == 0)) && (DAT_fffeff81 == '\0')) {
    DAT_fffeff79 = DAT_fffeff79 & 0xf7;
  }
  else {
    DAT_fffeff79 = DAT_fffeff79 | 8;
  }
  DAT_fffeff82 = 1;
  if (((((DAT_fffeffec & 4) == 0) && ((DAT_fffeffec & 8) == 0)) &&
      (((DAT_ffff34bd & 0x10) == 0 && (((DAT_fffefff6 & 1) == 0 && ((DAT_fffef910 & 0x10) == 0))))))
     && (((DAT_fffef910 & 0x20) == 0 &&
         ((((int)DAT_fffef732 & 0x80U) == 0 && ((DAT_ffff0951 & 1) == 0)))))) {
    DAT_fffefe9e = DAT_fffefe9e & 0xf7;
  }
  else if ((((DAT_fffeffec & 4) != 0) || ((DAT_fffeffec & 8) != 0)) ||
          (((((((DAT_fffefff3 & 1) != 0 && ((DAT_ffff34bd & 0x10) != 0)) ||
              ((DAT_fffefff6 & 1) != 0)) ||
             (((DAT_fffef910 & 0x10) != 0 || ((DAT_fffef910 & 0x20) != 0)))) ||
            (((int)DAT_fffef732 & 0x80U) != 0)) || ((DAT_ffff0951 & 1) != 0)))) {
    DAT_fffefe9e = DAT_fffefe9e | 8;
  }
  DAT_fffefeaf = 1;
  if (((DAT_ffff34bd & 0x20) == 0) && ((DAT_fffeff79 & 1) == 0)) {
    DAT_fffef733 = DAT_fffef733 & 0xfe;
  }
  else {
    DAT_fffef733 = DAT_fffef733 | 1;
  }
  DAT_fffefeb0 = 1;
  if (((DAT_ffff34bd & 0x10) == 0) && ((DAT_fffeff79 & 2) == 0)) {
    DAT_fffef733 = DAT_fffef733 & 0xfd;
  }
  else {
    DAT_fffef733 = DAT_fffef733 | 2;
  }
  DAT_fffefeb1 = 1;
  bVar1 = DAT_fffef556 | 0x80;
  if ((DAT_fffeffec & 4) == 0) {
    bVar1 = DAT_fffef556 & 0x7f;
  }
  bVar2 = bVar1 | 0x40;
  if ((DAT_fffeffec & 8) == 0) {
    bVar2 = bVar1 & 0xbf;
  }
  bVar1 = bVar2 | 0x20;
  if ((DAT_fffefff3 & 1) == 0) {
    bVar1 = bVar2 & 0xdf;
  }
  bVar2 = bVar1 | 0x10;
  if ((DAT_fffefff6 & 1) == 0) {
    bVar2 = bVar1 & 0xef;
  }
  bVar1 = bVar2 | 8;
  if ((DAT_fffef910 & 0x10) == 0) {
    bVar1 = bVar2 & 0xf7;
  }
  bVar2 = bVar1 | 4;
  if ((DAT_fffef910 & 0x20) == 0) {
    bVar2 = bVar1 & 0xfb;
  }
  bVar1 = bVar2 | 2;
  if (((int)DAT_fffef732 & 0x80U) == 0) {
    bVar1 = bVar2 & 0xfd;
  }
  DAT_fffef556 = bVar1 | 1;
  if ((DAT_ffff0951 & 1) == 0) {
    DAT_fffef556 = bVar1 & 0xfe;
  }
  bVar1 = DAT_fffef557 | 0x80;
  if ((DAT_ffff094e & 1) == 0) {
    bVar1 = DAT_fffef557 & 0x7f;
  }
  bVar2 = bVar1 | 0x40;
  if ((DAT_ffff0948 & 1) == 0) {
    bVar2 = bVar1 & 0xbf;
  }
  bVar1 = bVar2 | 0x20;
  if ((DAT_ffff094c & 1) == 0) {
    bVar1 = bVar2 & 0xdf;
  }
  DAT_fffef557 = bVar1 | 0x10;
  if ((DAT_ffff0943 & 1) == 0) {
    DAT_fffef557 = bVar1 & 0xef;
  }
  return;
}

