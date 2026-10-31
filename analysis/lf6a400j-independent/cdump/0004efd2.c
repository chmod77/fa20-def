
/* WARNING: Removing unreachable block (ram,0x0004f9a4) */
/* WARNING: Removing unreachable block (ram,0x0004f9ce) */
/* WARNING: Removing unreachable block (ram,0x0004fa06) */
/* WARNING: Removing unreachable block (ram,0x0004fa22) */
/* WARNING: Removing unreachable block (ram,0x0004fa3e) */
/* WARNING: Removing unreachable block (ram,0x0004fa76) */
/* WARNING: Removing unreachable block (ram,0x0004faae) */
/* WARNING: Removing unreachable block (ram,0x0004fae6) */
/* WARNING: Removing unreachable block (ram,0x0004fb02) */
/* WARNING: Removing unreachable block (ram,0x0004fb1e) */
/* WARNING: Removing unreachable block (ram,0x0004fb3a) */
/* WARNING: Removing unreachable block (ram,0x0004fb56) */
/* WARNING: Removing unreachable block (ram,0x0004fb80) */
/* WARNING: Removing unreachable block (ram,0x0004fb9c) */
/* WARNING: Removing unreachable block (ram,0x0004fbfe) */
/* WARNING: Removing unreachable block (ram,0x0004fc1a) */
/* WARNING: Removing unreachable block (ram,0x0004fc44) */
/* WARNING: Removing unreachable block (ram,0x0004fc60) */
/* WARNING: Removing unreachable block (ram,0x0004fcaa) */
/* WARNING: Removing unreachable block (ram,0x0004fcd4) */
/* WARNING: Removing unreachable block (ram,0x0004fcf0) */
/* WARNING: Removing unreachable block (ram,0x0004fd0c) */
/* WARNING: Removing unreachable block (ram,0x0004fd28) */
/* WARNING: Removing unreachable block (ram,0x0004fd44) */
/* WARNING: Removing unreachable block (ram,0x0004fd6e) */
/* WARNING: Removing unreachable block (ram,0x0004fda6) */
/* WARNING: Removing unreachable block (ram,0x0004f818) */
/* WARNING: Removing unreachable block (ram,0x0004f7c0) */
/* WARNING: Removing unreachable block (ram,0x0004f408) */
/* WARNING: Removing unreachable block (ram,0x0004f3f8) */
/* WARNING: Removing unreachable block (ram,0x0004f418) */
/* WARNING: Removing unreachable block (ram,0x0004f7d0) */
/* WARNING: Removing unreachable block (ram,0x0004fd8a) */
/* WARNING: Removing unreachable block (ram,0x0004fd60) */
/* WARNING: Removing unreachable block (ram,0x0004fd36) */
/* WARNING: Removing unreachable block (ram,0x0004fd1a) */
/* WARNING: Removing unreachable block (ram,0x0004fcfe) */
/* WARNING: Removing unreachable block (ram,0x0004fce2) */
/* WARNING: Removing unreachable block (ram,0x0004fcc6) */
/* WARNING: Removing unreachable block (ram,0x0004fc7c) */
/* WARNING: Removing unreachable block (ram,0x0004fc52) */
/* WARNING: Removing unreachable block (ram,0x0004fc36) */
/* WARNING: Removing unreachable block (ram,0x0004fc0c) */
/* WARNING: Removing unreachable block (ram,0x0004fbf0) */
/* WARNING: Removing unreachable block (ram,0x0004fb8e) */
/* WARNING: Removing unreachable block (ram,0x0004fb64) */
/* WARNING: Removing unreachable block (ram,0x0004fb48) */
/* WARNING: Removing unreachable block (ram,0x0004fb2c) */
/* WARNING: Removing unreachable block (ram,0x0004fb10) */
/* WARNING: Removing unreachable block (ram,0x0004faf4) */
/* WARNING: Removing unreachable block (ram,0x0004fabc) */
/* WARNING: Removing unreachable block (ram,0x0004faa0) */
/* WARNING: Removing unreachable block (ram,0x0004fa68) */
/* WARNING: Removing unreachable block (ram,0x0004fa30) */
/* WARNING: Removing unreachable block (ram,0x0004fa14) */
/* WARNING: Removing unreachable block (ram,0x0004f9ea) */
/* WARNING: Removing unreachable block (ram,0x0004f9b2) */
/* WARNING: Removing unreachable block (ram,0x0004f996) */
/* WARNING: Removing unreachable block (ram,0x0004f988) */

uint FUN_0004efd2(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  if (((int)DAT_ffff6559 & 8U) == 0) {
    DAT_fffef32a = 0;
    DAT_fffef32b = 0;
    DAT_fffef32c = 0;
    DAT_fffef32d = 0;
    DAT_fffef32e = 0;
    DAT_fffef32f = 0;
    DAT_fffef3fc = 0;
    DAT_fffef498 = 0;
    DAT_fffef518 = 0;
    DAT_fffef519 = 0;
    DAT_fffef560 = 0;
    return (int)DAT_ffff6559;
  }
  if ((DAT_ffff3773 & 0x10) == 0) {
    DAT_fffef32a = DAT_fffef32a & 0xfe;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 1;
  }
  if (((((DAT_ffff3775 & 1) == 0) && ((DAT_ffff3775 & 2) == 0)) && ((DAT_ffff3775 & 8) == 0)) &&
     ((DAT_ffff37c7 & 0x40) == 0)) {
    DAT_fffef32a = DAT_fffef32a & 0xfd;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 2;
  }
  if ((((DAT_ffff3788 & 1) == 0) && ((DAT_ffff3788 & 2) == 0)) && ((DAT_ffff3788 & 4) == 0)) {
    DAT_fffef32a = DAT_fffef32a & 0xfb;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 4;
  }
  if ((((DAT_ffff3789 & 0x10) == 0) && ((DAT_ffff3789 & 0x20) == 0)) && ((DAT_ffff3799 & 8) == 0)) {
    DAT_fffef32a = DAT_fffef32a & 0xf7;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 8;
  }
  if ((((((DAT_ffff086c & 4) == 0) && ((DAT_ffff086c & 0x10) == 0)) && ((DAT_ffff087f & 2) == 0)) &&
      ((((int)(char)DAT_ffff08bc & 0x80U) == 0 && ((DAT_ffff08bd & 0x20) == 0)))) &&
     ((((int)(char)DAT_ffff086d & 0x80U) == 0 && ((DAT_ffff086d & 0x20) == 0)))) {
    DAT_fffef32a = DAT_fffef32a & 0xef;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 0x10;
  }
  if ((((((DAT_ffff086c & 4) == 0) && ((DAT_ffff086c & 0x10) == 0)) &&
       (((DAT_ffff087f & 2) == 0 &&
        (((((int)(char)DAT_ffff08bc & 0x80U) == 0 && ((DAT_ffff08bd & 0x20) == 0)) &&
         ((DAT_ffff0868 & 1) == 0)))))) &&
      (((DAT_ffff08ac & 8) == 0 && ((DAT_ffff08ac & 0x10) == 0)))) &&
     ((((int)(char)DAT_ffff086d & 0x80U) == 0 &&
      (((DAT_ffff086d & 0x20) == 0 && ((DAT_ffff087f & 0x20) == 0)))))) {
    DAT_fffef32a = DAT_fffef32a & 0xdf;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 0x20;
  }
  if (((((((DAT_ffff3787 & 4) == 0) && ((DAT_ffff3787 & 0x10) == 0)) && ((DAT_ffff379a & 2) == 0))
       && ((((int)(char)DAT_ffff37d7 & 0x80U) == 0 && ((DAT_ffff37d8 & 0x20) == 0)))) &&
      ((DAT_ffff3783 & 1) == 0)) &&
     ((((DAT_ffff37c7 & 8) == 0 && ((DAT_ffff37c7 & 0x10) == 0)) &&
      ((((int)(char)DAT_ffff3788 & 0x80U) == 0 &&
       (((DAT_ffff3788 & 0x20) == 0 && ((DAT_ffff379a & 0x20) == 0)))))))) {
    DAT_fffef32a = DAT_fffef32a & 0xbf;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 0x40;
  }
  if ((((((DAT_ffff377a & 1) == 0) && ((DAT_ffff377a & 2) == 0)) && ((DAT_ffff377a & 4) == 0)) &&
      (((DAT_ffff377a & 8) == 0 && ((DAT_ffff377a & 0x10) == 0)))) &&
     ((((DAT_ffff377a & 0x20) == 0 &&
       (((DAT_ffff377a & 0x40) == 0 && (((int)(char)DAT_ffff377a & 0x80U) == 0)))) &&
      ((DAT_ffff3784 & 0x10) == 0)))) {
    DAT_fffef32a = DAT_fffef32a & 0x7f;
  }
  else {
    DAT_fffef32a = DAT_fffef32a | 0x80;
  }
  if (((int)(char)DAT_ffff3784 & 0x80U) == 0) {
    DAT_fffef32b = DAT_fffef32b & 0xfe;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 1;
  }
  if ((DAT_ffff3784 & 0x40) == 0) {
    DAT_fffef32b = DAT_fffef32b & 0xfd;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 2;
  }
  if (((DAT_ffff377c & 8) == 0) && ((DAT_ffff377c & 0x10) == 0)) {
    DAT_fffef32b = DAT_fffef32b & 0xfb;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 4;
  }
  if (((((DAT_ffff3774 & 4) == 0) && ((DAT_ffff3774 & 8) == 0)) && ((DAT_ffff3773 & 0x40) == 0)) &&
     (((int)(char)DAT_ffff3773 & 0x80U) == 0)) {
    DAT_fffef32b = DAT_fffef32b & 0xf7;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 8;
  }
  if (((DAT_ffff3772 & 1) == 0) && ((DAT_ffff3772 & 4) == 0)) {
    DAT_fffef32b = DAT_fffef32b & 0xef;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 0x10;
  }
  if (((DAT_ffff3786 & 1) == 0) && ((DAT_ffff3786 & 2) == 0)) {
    DAT_fffef32b = DAT_fffef32b & 0xdf;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 0x20;
  }
  if ((((((((int)(char)DAT_ffff08a6 & 0x80U) == 0) && ((DAT_ffff08a6 & 0x40) == 0)) &&
        ((DAT_ffff08a6 & 8) == 0)) && (((DAT_ffff08a6 & 4) == 0 && ((DAT_ffff0890 & 1) == 0)))) &&
      (((DAT_ffff086c & 1) == 0 && (((DAT_ffff086c & 0x40) == 0 && ((DAT_ffff086d & 0x40) == 0))))))
     && (((DAT_ffff086d & 0x10) == 0 && ((DAT_ffff0867 & 0x20) == 0)))) {
    DAT_fffef32b = DAT_fffef32b & 0xbf;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 0x40;
  }
  if (((((((int)(char)DAT_ffff37c1 & 0x80U) == 0) && ((DAT_ffff37c1 & 0x40) == 0)) &&
       ((DAT_ffff37c1 & 8) == 0)) &&
      ((((DAT_ffff37c1 & 4) == 0 && ((DAT_ffff37ab & 1) == 0)) &&
       (((DAT_ffff3787 & 1) == 0 && (((DAT_ffff3787 & 0x40) == 0 && ((DAT_ffff3788 & 0x40) == 0)))))
       ))) && (((DAT_ffff3788 & 0x10) == 0 && ((DAT_ffff3782 & 0x20) == 0)))) {
    DAT_fffef32b = DAT_fffef32b & 0x7f;
  }
  else {
    DAT_fffef32b = DAT_fffef32b | 0x80;
  }
  if (((((int)(char)DAT_ffff37a6 & 0x80U) == 0) && ((DAT_ffff37a6 & 0x40) == 0)) &&
     (((DAT_fffeeec2 & 4) == 0 ||
      ((((((int)(char)DAT_ffff37bd & 0x80U) == 0 && ((DAT_ffff37bd & 0x40) == 0)) &&
        ((DAT_ffff37bf & 0x10) == 0)) && (((DAT_ffff37bd & 0x10) == 0 && ((DAT_ffff37bf & 4) == 0)))
       ))))) {
    DAT_fffef32c = DAT_fffef32c & 0xfe;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 1;
  }
  if ((((DAT_ffff3773 & 1) == 0) && ((DAT_ffff3773 & 2) == 0)) &&
     (((int)(char)DAT_ffff3799 & 0x80U) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0xfd;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 2;
  }
  if (((DAT_ffff088c & 0x10) == 0) && ((DAT_ffff088c & 0x20) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0xfb;
    bVar1 = false;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 4;
    bVar1 = true;
  }
  if (((DAT_ffff088b & 2) == 0) && ((DAT_ffff088b & 8) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0xf7;
    bVar2 = false;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 8;
    bVar2 = true;
  }
  if (((DAT_ffff088b & 1) == 0) && ((DAT_ffff088b & 4) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0xef;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 0x10;
  }
  if (((((DAT_ffff37a7 & 1) == 0) && ((DAT_ffff37a7 & 4) == 0)) && ((DAT_ffff37a7 & 2) == 0)) &&
     ((DAT_ffff37a7 & 8) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0xdf;
    bVar3 = false;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 0x20;
    bVar3 = true;
  }
  if ((((bVar1) || (bVar2)) || (bVar3)) &&
     (((DAT_fffef3d4 & 0x20) != 0 || ((DAT_fffef3d4 & 8) != 0)))) {
    DAT_fffef32c = DAT_fffef32c | 0x40;
  }
  else {
    DAT_fffef32c = DAT_fffef32c & 0xbf;
  }
  if (((DAT_ffff378e & 1) == 0) && ((DAT_ffff378e & 2) == 0)) {
    DAT_fffef32c = DAT_fffef32c & 0x7f;
  }
  else {
    DAT_fffef32c = DAT_fffef32c | 0x80;
  }
  if ((((((((DAT_ffff0885 & 0x10) == 0) && ((DAT_ffff0885 & 8) == 0)) &&
         ((DAT_ffff08af & 0x40) == 0)) &&
        ((((DAT_ffff08af & 0x20) == 0 && ((DAT_ffff0885 & 4) == 0)) &&
         (((DAT_ffff0885 & 2) == 0 && (((DAT_ffff08af & 0x10) == 0 && ((DAT_ffff08af & 8) == 0))))))
        )) && (((int)(char)DAT_ffff0886 & 0x80U) == 0)) &&
      (((((DAT_ffff0886 & 0x20) == 0 && ((DAT_ffff0886 & 0x40) == 0)) &&
        ((DAT_ffff0886 & 0x10) == 0)) &&
       ((((DAT_ffff08ba & 1) == 0 && ((DAT_ffff08ba & 2) == 0)) &&
        (((DAT_ffff0886 & 8) == 0 && (((DAT_ffff0886 & 2) == 0 && ((DAT_ffff0886 & 4) == 0))))))))))
     && ((((DAT_ffff0886 & 1) == 0 &&
          ((((((((DAT_ffff08ba & 8) == 0 && ((DAT_ffff08ba & 4) == 0)) && ((DAT_ffff08ab & 1) == 0))
              && (((DAT_ffff08ab & 4) == 0 && ((DAT_ffff0863 & 4) == 0)))) &&
             ((DAT_ffff0863 & 8) == 0)) && (((DAT_ffff08ab & 2) == 0 && ((DAT_ffff08ab & 8) == 0))))
           && (((DAT_ffff0892 & 2) == 0 &&
               ((((DAT_ffff0892 & 1) == 0 && (((int)(char)DAT_ffff0890 & 0x80U) == 0)) &&
                ((DAT_ffff0890 & 0x40) == 0)))))))) &&
         ((((int)(char)DAT_ffff0893 & 0x80U) == 0 && ((DAT_ffff0893 & 0x40) == 0)))))) {
    DAT_fffef32d = DAT_fffef32d & 0xfe;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 1;
  }
  if ((((((DAT_ffff37ba & 0x40) == 0) && ((DAT_ffff37ba & 1) == 0)) &&
       (((DAT_ffff37ba & 2) == 0 &&
        ((((DAT_ffff37ba & 4) == 0 && ((DAT_ffff37ba & 8) == 0)) && ((DAT_ffff37ba & 0x10) == 0)))))
       ) && (((DAT_ffff37ba & 0x20) == 0 && ((DAT_ffff37c3 & 4) == 0)))) &&
     ((DAT_ffff37c3 & 8) == 0)) {
    DAT_fffef32d = DAT_fffef32d & 0xfd;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 2;
  }
  if (((DAT_ffff3778 & 8) == 0) && (((int)(char)DAT_ffff3778 & 0x80U) == 0)) {
    DAT_fffef32d = DAT_fffef32d & 0xfb;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 4;
  }
  if ((DAT_ffff37c7 & 1) == 0) {
    DAT_fffef32d = DAT_fffef32d & 0xf7;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 8;
  }
  if (((((DAT_ffff37a0 & 0x10) == 0) && ((DAT_ffff37a0 & 8) == 0)) && ((DAT_ffff37ca & 0x40) == 0))
     && ((DAT_ffff37ca & 0x20) == 0)) {
    DAT_fffef32d = DAT_fffef32d & 0xef;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 0x10;
  }
  if ((((DAT_ffff37a2 & 1) == 0) && (((int)(char)DAT_ffff37a3 & 0x80U) == 0)) &&
     ((DAT_ffff37a3 & 0x40) == 0)) {
    DAT_fffef32d = DAT_fffef32d & 0xdf;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 0x20;
  }
  if ((DAT_fffef9f3 & 4) == 0) {
    DAT_fffef32d = DAT_fffef32d & 0xbf;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 0x40;
  }
  if ((DAT_ffff3778 & 8) == 0) {
    DAT_fffef32d = DAT_fffef32d & 0x7f;
  }
  else {
    DAT_fffef32d = DAT_fffef32d | 0x80;
  }
  if ((DAT_fffeeec2 & 4) == 0) {
    if ((DAT_fffef210 & 1) == 0) goto LAB_0004f7ea;
  }
  else if (((((int)(char)DAT_ffff37bd & 0x80U) != 0) || ((DAT_ffff37bd & 0x40) != 0)) ||
          ((DAT_ffff37bf & 0x10) != 0)) {
    DAT_fffef32e = DAT_fffef32e | 1;
    goto LAB_0004f7ea;
  }
  DAT_fffef32e = DAT_fffef32e & 0xfe;
LAB_0004f7ea:
  if (((((DAT_ffff37bd & 0x10) == 0) && ((DAT_ffff08a4 & 2) == 0)) && ((DAT_ffff08a5 & 0x20) == 0))
     && ((DAT_ffff08a4 & 4) == 0)) {
    DAT_fffef32e = DAT_fffef32e & 0xfd;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 2;
  }
  if (((DAT_ffff08bc & 1) == 0) && ((DAT_ffff08bc & 2) == 0)) {
    DAT_fffef32e = DAT_fffef32e & 0xfb;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 4;
  }
  if (((DAT_ffff08bb & 1) == 0) && ((DAT_ffff08bb & 2) == 0)) {
    DAT_fffef32e = DAT_fffef32e & 0xf7;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 8;
  }
  if (((((DAT_ffff08bc & 1) == 0) && ((DAT_ffff08bc & 2) == 0)) && ((DAT_ffff08bb & 1) == 0)) &&
     (((((DAT_ffff08bb & 2) == 0 && ((DAT_ffff08bb & 4) == 0)) &&
       (((DAT_ffff08bb & 8) == 0 && (((DAT_ffff08bb & 0x10) == 0 && ((DAT_ffff08bb & 0x20) == 0)))))
       ) && ((DAT_ffff08bb & 0x40) == 0)))) {
    DAT_fffef32e = DAT_fffef32e & 0xef;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 0x10;
  }
  if (((((DAT_ffff08bb & 4) == 0) && ((DAT_ffff08bb & 8) == 0)) && ((DAT_ffff08bb & 0x10) == 0)) &&
     (((DAT_ffff08bb & 0x20) == 0 && ((DAT_ffff08bb & 0x40) == 0)))) {
    DAT_fffef518 = DAT_fffef518 & 0xfe;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 1;
  }
  if ((((DAT_ffff08bb & 1) == 0) && ((DAT_ffff08bb & 2) == 0)) && ((DAT_ffff08bc & 0x40) == 0)) {
    DAT_fffef518 = DAT_fffef518 & 0xfd;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 2;
  }
  if (((((((DAT_ffff3772 & 0x45) == 0) && ((DAT_ffff3773 & 3) == 0)) && ((DAT_ffff3774 & 0x30) == 0)
        ) && ((((((DAT_ffff3775 & 0xb) == 0 && (DAT_ffff377a == 0)) &&
                (((DAT_ffff377c & 8) == 0 &&
                 (((DAT_ffff377e & 0x4c) == 0 && ((DAT_ffff3784 & 0xd0) == 0)))))) &&
               ((DAT_ffff3785 & 0xf) == 0)) &&
              (((((DAT_ffff3788 & 7) == 0 && ((DAT_ffff3789 & 0x30) == 0)) &&
                ((DAT_ffff378d & 0xc0) == 0)) &&
               (((DAT_ffff378e & 0xb) == 0 && ((DAT_ffff3799 & 0x88) == 0)))))))) &&
      (((((DAT_ffff379d & 1) == 0 && (((DAT_ffff379e & 0x2f) == 0 && ((DAT_ffff379f & 0x7e) == 0))))
        && ((DAT_ffff37a0 & 0x20) == 0)) &&
       (((((DAT_ffff37a1 == '\0' && ((DAT_ffff37a6 & 0xc0) == 0)) && ((DAT_ffff37ab & 0xc0) == 0))
         && (((DAT_ffff37ad & 3) == 0 && ((DAT_ffff37ae & 0xc0) == 0)))) &&
        ((DAT_ffff37ba & 0x70) == 0)))))) &&
     ((((((DAT_ffff37bd & 0xd0) == 0 && ((DAT_ffff37bf & 0x34) == 0)) &&
        (((DAT_ffff37c5 & 0x3c) == 0 &&
         ((((DAT_ffff37c6 & 0xf) == 0 && ((DAT_ffff37c7 & 0x40) == 0)) &&
          ((DAT_ffff37c9 & 0xd8) == 0)))))) &&
       (((DAT_ffff37ca & 0x84) == 0 && ((DAT_ffff37d5 & 0xf) == 0)))) &&
      (((DAT_ffff37d6 & 0x7f) == 0 && (((DAT_ffff37d7 & 0x7f) == 0 && ((DAT_ffff37d8 & 0x53) == 0)))
       ))))) {
    DAT_fffef560 = DAT_fffef560 & 0xfe;
  }
  else {
    DAT_fffef560 = DAT_fffef560 | 1;
  }
  if ((((DAT_ffff379f & 0x10) == 0) && ((DAT_ffff379f & 0x20) == 0)) && ((DAT_ffff379f & 2) == 0)) {
    DAT_fffef3fc = DAT_fffef3fc & 0xfd;
    bVar1 = false;
  }
  else {
    DAT_fffef3fc = DAT_fffef3fc | 2;
    bVar1 = true;
  }
  if ((((DAT_ffff379f & 4) == 0) && ((DAT_ffff379f & 8) == 0)) && ((DAT_ffff379f & 2) == 0)) {
    DAT_fffef3fc = DAT_fffef3fc & 0xfb;
    bVar2 = false;
  }
  else {
    DAT_fffef3fc = DAT_fffef3fc | 4;
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) {
    DAT_fffef3fc = DAT_fffef3fc | 8;
  }
  else {
    DAT_fffef3fc = DAT_fffef3fc & 0xf7;
  }
  if ((((DAT_ffff3774 & 0x10) == 0) && ((DAT_ffff3774 & 0x20) == 0)) && ((DAT_ffff379f & 0x40) == 0)
     ) {
    DAT_fffef32e = DAT_fffef32e & 0xdf;
    bVar1 = false;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 0x20;
    bVar1 = true;
  }
  if ((((DAT_ffff379e & 1) == 0) && ((DAT_ffff379e & 2) == 0)) && ((DAT_ffff379f & 0x40) == 0)) {
    DAT_fffef32e = DAT_fffef32e & 0xbf;
    bVar2 = false;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 0x40;
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) {
    DAT_fffef3fc = DAT_fffef3fc | 1;
  }
  else {
    DAT_fffef3fc = DAT_fffef3fc & 0xfe;
  }
  if ((DAT_ffff379d & 1) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0xfb;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 4;
  }
  if ((DAT_ffff379e & 8) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0xf7;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 8;
  }
  if ((DAT_ffff379e & 0x10) == 0) {
    DAT_fffef32e = DAT_fffef32e & 0x7f;
  }
  else {
    DAT_fffef32e = DAT_fffef32e | 0x80;
  }
  if ((DAT_ffff379e & 0x20) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0xef;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 0x10;
  }
  if (((int)(char)DAT_ffff37c9 & 0x80U) == 0) {
    DAT_fffef32f = DAT_fffef32f & 0xfc;
  }
  else {
    DAT_fffef32f = DAT_fffef32f & 0xfe | 2;
  }
  if ((DAT_ffff379e & 4) == 0) {
    DAT_fffef32f = DAT_fffef32f & 0xfd;
  }
  else {
    DAT_fffef32f = DAT_fffef32f | 2;
  }
  if ((DAT_ffff37c9 & 8) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0xdf;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 0x20;
  }
  if ((DAT_ffff37c9 & 0x10) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0xbf;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 0x40;
  }
  if ((DAT_ffff37c9 & 0x40) == 0) {
    DAT_fffef518 = DAT_fffef518 & 0x7f;
  }
  else {
    DAT_fffef518 = DAT_fffef518 | 0x80;
  }
  if ((DAT_ffff37a0 & 0x20) == 0) {
    DAT_fffef519 = DAT_fffef519 & 0xfe;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 1;
  }
  if ((DAT_ffff3772 & 0x40) == 0) {
    DAT_fffef519 = DAT_fffef519 & 0xfd;
  }
  else {
    DAT_fffef519 = DAT_fffef519 | 2;
  }
  if (((int)DAT_ffff002c & 0x80U) == 0) {
    DAT_fffef3fc = DAT_fffef3fc & 0xef;
  }
  else {
    DAT_fffef3fc = DAT_fffef3fc | 0x10;
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
  if ((((((((DAT_fffef9d4 & 2) != 0) || ((DAT_fffef9d4 & 4) != 0)) || ((DAT_fffef9d4 & 8) != 0)) ||
        (((DAT_fffef9d4 & 0x10) != 0 || (((int)(char)DAT_fffef9f2 & 0x80U) != 0)))) ||
       (((DAT_fffef9f2 & 0x40) != 0 || (((DAT_fffef879 & 1) != 0 || ((DAT_fffef879 & 8) != 0))))))
      || ((DAT_fffef879 & 4) != 0)) || ((DAT_fffef879 & 2) != 0)) {
    DAT_fffef498 = DAT_fffef498 | 8;
  }
  if ((DAT_fffef8f3 & 8) != 0) {
    DAT_fffef3fc = DAT_fffef3fc | 0x20;
  }
  if ((DAT_fffef8f3 & 4) != 0) {
    DAT_fffef3fc = DAT_fffef3fc | 0x40;
  }
  if (((DAT_fffef8f3 & 2) != 0) || ((DAT_fffef8f3 & 1) != 0)) {
    DAT_fffef3fc = DAT_fffef3fc | 0x80;
  }
  if (((DAT_ffff37d8 & 1) == 0) && ((DAT_ffff37d8 & 2) == 0)) {
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
    uVar4 = (uint)(char)DAT_fffef519;
    DAT_fffef519 = (char)(uVar4 & 0x7f);
    return uVar4 & 0x7f;
  }
  uVar4 = (uint)(char)DAT_fffef519;
  DAT_fffef519 = (char)(uVar4 | 0x80);
  return uVar4 | 0x80;
}

