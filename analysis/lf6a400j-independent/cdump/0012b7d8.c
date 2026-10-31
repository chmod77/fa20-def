
void FUN_0012b7d8(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
                 ushort param_11,ushort param_12,ushort param_13,ushort param_14,ushort param_15,
                 ushort param_16,ushort param_17,ushort param_18,ushort *param_19)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  int iVar35;
  ushort uVar36;
  char cStack_2c;
  ushort uStack_24;
  ushort uStack_20;
  
  uVar36 = param_1;
  if (param_2 <= param_1) {
    uVar36 = param_2;
  }
  if (param_3 < uVar36) {
    uVar36 = param_3;
  }
  if (param_4 < uVar36) {
    uVar36 = param_4;
  }
  if (param_5 < uVar36) {
    uVar36 = param_5;
  }
  if (param_6 < uVar36) {
    uVar36 = param_6;
  }
  if (param_7 < uVar36) {
    uVar36 = param_7;
  }
  if (param_8 < uVar36) {
    uVar36 = param_8;
  }
  if (param_9 < uVar36) {
    uVar36 = param_9;
  }
  bVar1 = param_1 == uVar36;
  bVar2 = param_2 == uVar36;
  bVar3 = param_3 == uVar36;
  bVar4 = param_4 == uVar36;
  bVar5 = param_5 == uVar36;
  bVar6 = param_6 == uVar36;
  bVar7 = param_8 == uVar36;
  bVar8 = param_7 == uVar36;
  bVar9 = param_9 == uVar36;
  uVar36 = param_11;
  if (param_11 < param_10) {
    uVar36 = param_10;
  }
  if (uVar36 < param_12) {
    uVar36 = param_12;
  }
  if (uVar36 < param_13) {
    uVar36 = param_13;
  }
  if (uVar36 < param_14) {
    uVar36 = param_14;
  }
  if (uVar36 < param_15) {
    uVar36 = param_15;
  }
  if (uVar36 < param_16) {
    uVar36 = param_16;
  }
  if (uVar36 < param_17) {
    uVar36 = param_17;
  }
  if (uVar36 < param_18) {
    uVar36 = param_18;
  }
  bVar12 = false;
  if ((param_15 == uVar36) && (bVar6)) {
    bVar12 = true;
  }
  bVar13 = false;
  if ((param_16 == uVar36) && (bVar8)) {
    bVar13 = true;
  }
  bVar14 = false;
  if ((param_17 == uVar36) && (bVar7)) {
    bVar14 = true;
  }
  bVar15 = false;
  if ((param_18 == uVar36) && (bVar9)) {
    bVar15 = true;
  }
  bVar11 = false;
  if ((param_14 == uVar36) && (bVar5)) {
    bVar11 = true;
  }
  bVar34 = false;
  if ((param_13 == uVar36) && (bVar4)) {
    bVar34 = true;
  }
  bVar31 = false;
  if ((param_10 == uVar36) && (bVar1)) {
    bVar31 = true;
  }
  bVar32 = false;
  if ((param_11 == uVar36) && (bVar2)) {
    bVar32 = true;
  }
  bVar33 = false;
  if ((param_12 == uVar36) && (bVar3)) {
    bVar33 = true;
  }
  bVar28 = false;
  if ((((!bVar1) && (!bVar2)) && (!bVar3)) &&
     ((((!bVar4 && (!bVar5)) && ((!bVar6 && ((bVar8 && (!bVar7)))))) && (!bVar9)))) {
    bVar28 = true;
  }
  bVar27 = false;
  if ((((((!bVar1) && (!bVar2)) && (!bVar3)) && ((!bVar4 && (!bVar5)))) &&
      ((bVar6 && ((!bVar8 && (!bVar7)))))) && (!bVar9)) {
    bVar27 = true;
  }
  bVar26 = false;
  if ((((((!bVar1) && (!bVar2)) && (!bVar3)) && ((!bVar4 && (bVar5)))) &&
      ((!bVar6 && ((!bVar8 && (!bVar7)))))) && (!bVar9)) {
    bVar26 = true;
  }
  bVar25 = false;
  if (((((!bVar1) && (!bVar2)) && (!bVar3)) &&
      (((bVar4 && (!bVar5)) && ((!bVar6 && ((!bVar8 && (!bVar7)))))))) && (!bVar9)) {
    bVar25 = true;
  }
  bVar24 = false;
  if (((((((!bVar1) && (!bVar2)) && (bVar3)) && ((!bVar4 && (!bVar5)))) && (!bVar6)) &&
      ((!bVar8 && (!bVar7)))) && (!bVar9)) {
    bVar24 = true;
  }
  bVar21 = false;
  if ((((!bVar31) && (!bVar32)) && (!bVar33)) &&
     (((!bVar34 && (!bVar11)) && (((!bVar12 && ((bVar13 && (!bVar14)))) && (!bVar15)))))) {
    bVar21 = true;
  }
  bVar20 = false;
  if (((((!bVar31) && (!bVar32)) && (!bVar33)) &&
      (((!bVar34 && (!bVar11)) && ((bVar12 && ((!bVar13 && (!bVar14)))))))) && (!bVar15)) {
    bVar20 = true;
  }
  bVar19 = false;
  if ((((((!bVar31) && (!bVar32)) && (!bVar33)) && ((!bVar34 && (bVar11)))) &&
      ((!bVar12 && ((!bVar13 && (!bVar14)))))) && (!bVar15)) {
    bVar19 = true;
  }
  bVar18 = false;
  if (((((!bVar31) && (!bVar32)) && (!bVar33)) && ((bVar34 && (!bVar11)))) &&
     (((!bVar12 && ((!bVar13 && (!bVar14)))) && (!bVar15)))) {
    bVar18 = true;
  }
  bVar17 = false;
  if (((((!bVar31) && (!bVar32)) && (bVar33)) &&
      (((!bVar34 && (!bVar11)) && ((!bVar12 && ((!bVar13 && (!bVar14)))))))) && (!bVar15)) {
    bVar17 = true;
  }
  bVar23 = false;
  if ((((((!bVar1) && (bVar2)) && (!bVar3)) && ((!bVar4 && (!bVar5)))) &&
      ((!bVar6 && ((!bVar8 && (!bVar7)))))) && (!bVar9)) {
    bVar23 = true;
  }
  bVar16 = false;
  if ((((!bVar31) && (bVar32)) && (!bVar33)) &&
     (((!bVar34 && (!bVar11)) && (((!bVar12 && ((!bVar13 && (!bVar14)))) && (!bVar15)))))) {
    bVar16 = true;
  }
  bVar30 = false;
  if (((((bVar31) && (!bVar32)) && (!bVar33)) &&
      (((!bVar34 && (!bVar11)) && ((!bVar12 && ((!bVar13 && (!bVar14)))))))) && (!bVar15)) {
    bVar30 = true;
  }
  bVar29 = false;
  if (((((((!bVar1) && (!bVar2)) && (!bVar3)) && ((!bVar4 && (!bVar5)))) && (!bVar6)) &&
      ((!bVar8 && (bVar7)))) && (!bVar9)) {
    bVar29 = true;
  }
  bVar22 = false;
  if ((((!bVar31) && (!bVar32)) && (!bVar33)) &&
     ((((!bVar34 && (!bVar11)) && ((!bVar12 && ((!bVar13 && (bVar14)))))) && (!bVar15)))) {
    bVar22 = true;
  }
  if (bVar30) {
    cStack_2c = '\x01';
  }
  else if (bVar16) {
    cStack_2c = '\x02';
  }
  else if (bVar17) {
    cStack_2c = '\x03';
  }
  else if (bVar18) {
    cStack_2c = '\x04';
  }
  else if (bVar19) {
    cStack_2c = '\x05';
  }
  else if (bVar20) {
    cStack_2c = '\x06';
  }
  else if (bVar21) {
    cStack_2c = '\a';
  }
  else if (bVar22) {
    cStack_2c = '\b';
  }
  else {
    cStack_2c = '\t';
  }
  if (cStack_2c == '\x01') {
    uStack_24 = param_10;
  }
  else if (cStack_2c == '\x02') {
    uStack_24 = param_11;
  }
  else if (cStack_2c == '\x03') {
    uStack_24 = param_12;
  }
  else if (cStack_2c == '\x04') {
    uStack_24 = param_13;
  }
  else if (cStack_2c == '\x05') {
    uStack_24 = param_14;
  }
  else if (cStack_2c == '\x06') {
    uStack_24 = param_15;
  }
  else if (cStack_2c == '\a') {
    uStack_24 = param_16;
  }
  else if (cStack_2c == '\b') {
    uStack_24 = param_17;
  }
  else if (cStack_2c == '\t') {
    uStack_24 = param_18;
  }
  bVar10 = false;
  if ((((((bVar1) && (!bVar2)) && (!bVar3)) && ((!bVar4 && (!bVar5)))) &&
      ((!bVar6 && ((!bVar8 && (!bVar7)))))) && (!bVar9)) {
    bVar10 = true;
  }
  iVar35 = 1;
  if (((((!bVar10) && (iVar35 = 2, !bVar23)) && (iVar35 = 3, !bVar24)) &&
      ((iVar35 = 4, !bVar25 && (iVar35 = 5, !bVar26)))) &&
     ((iVar35 = 6, !bVar27 && ((iVar35 = 7, !bVar28 && (iVar35 = 9, bVar29)))))) {
    iVar35 = 8;
  }
  if (iVar35 == 1) {
    uStack_20 = param_10;
  }
  else if (iVar35 == 2) {
    uStack_20 = param_11;
  }
  else if (iVar35 == 3) {
    uStack_20 = param_12;
  }
  else if (iVar35 == 4) {
    uStack_20 = param_13;
  }
  else if (iVar35 == 5) {
    uStack_20 = param_14;
  }
  else if (iVar35 == 6) {
    uStack_20 = param_15;
  }
  else if (iVar35 == 7) {
    uStack_20 = param_16;
  }
  else if (iVar35 == 8) {
    uStack_20 = param_17;
  }
  else if (iVar35 == 9) {
    uStack_20 = param_18;
  }
  if (((((bVar10) || (bVar23)) || (bVar24)) ||
      (((bVar25 || (bVar26)) || ((bVar27 || ((bVar28 || (bVar29)))))))) ||
     (((!bVar1 && (((!bVar2 && (!bVar3)) && (!bVar4)))) &&
      (((!bVar5 && (!bVar6)) && ((!bVar8 && ((!bVar7 && (bVar9)))))))))) {
    *param_19 = uStack_20;
  }
  else if (((bVar30) ||
           (((((bVar16 || (bVar17)) || (bVar18)) || ((bVar19 || (bVar20)))) ||
            ((bVar21 || (bVar22)))))) ||
          (((((!bVar31 && (!bVar32)) && (!bVar33)) &&
            ((((!bVar34 && (!bVar11)) && (!bVar12)) && ((!bVar13 && (!bVar14)))))) && (bVar15)))) {
    *param_19 = uStack_24;
  }
  else if (bVar31) {
    *param_19 = param_10;
  }
  else if (bVar32) {
    *param_19 = param_11;
  }
  else if (bVar33) {
    *param_19 = param_12;
  }
  else if (bVar34) {
    *param_19 = param_13;
  }
  else if (bVar11) {
    *param_19 = param_14;
  }
  else if (bVar12) {
    *param_19 = param_15;
  }
  else if (bVar13) {
    *param_19 = param_16;
  }
  else if (bVar14) {
    *param_19 = param_17;
  }
  else {
    *param_19 = param_18;
  }
  return;
}

