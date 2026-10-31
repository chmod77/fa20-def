
uint FUN_00075904(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  pcVar2 = DAT_0007596c;
  *DAT_00075970 = *DAT_0007596c;
  puVar5 = DAT_00075dc0;
  puVar3 = DAT_00075b70;
  puVar1 = DAT_00075950;
  if (((((*(char *)(DAT_00075958 + 1) == '\x01') || (*(char *)(DAT_00075958 + 1) == '\x02')) ||
       (*(char *)(DAT_00075958 + 1) == '@')) ||
      ((*(char *)(DAT_00075958 + 1) == '\x03' || (*(char *)(DAT_00075958 + 1) == 'B')))) ||
     (*(char *)(DAT_00075958 + 1) == 'C')) {
    if (*DAT_00075b4c == 2) {
      if (*(char *)(DAT_00075958 + 1) == '\x01') {
        if ((*DAT_00075b50 & 0x20) == 0) {
          if (*pcVar2 != '\x01') {
            if (*pcVar2 == '\x03') {
              *pcVar2 = '\x01';
              *DAT_00075b54 = 0;
              *DAT_00075b58 = '\0';
LAB_00075abc:
              puVar4 = PTR_FUN_00075b78;
              *DAT_00075b74 = *pcVar2;
              (*(code *)puVar4)();
            }
            else {
              if (*pcVar2 != '@') goto LAB_00075b3a;
              *pcVar2 = '\x01';
            }
          }
          goto LAB_00075ac6;
        }
      }
      else {
        if (*(char *)(DAT_00075958 + 1) != '\x02') {
          if (*(char *)(DAT_00075958 + 1) == '\x03') {
            if (*pcVar2 != '\x03') {
              if (*pcVar2 != '\x01') goto LAB_00075b3a;
              *pcVar2 = '\x03';
            }
LAB_00075b20:
            puVar1 = DAT_00075b70;
            *DAT_00075b70 = 0x50;
            uVar6 = (uint)*pcVar2;
            puVar1[1] = *pcVar2;
            *DAT_00075b74 = *pcVar2;
          }
          else {
            if (*(char *)(DAT_00075958 + 1) != '@') {
              if (*(char *)(DAT_00075958 + 1) == 'B') {
                if ((((*DAT_00075b7c & 0x20) != 0) && (0x7c < *DAT_00075b60)) &&
                   ((short)(ushort)*DAT_00075b60 <= DAT_00075b38)) {
                  if (*pcVar2 == 'B') goto LAB_00075ac6;
                  uVar6 = (uint)*pcVar2;
                  if (uVar6 != 0x43) goto LAB_00075ba0;
                  if (*DAT_00075b58 == '\x01') {
                    *pcVar2 = 'B';
                    *DAT_00075b54 = 0;
                    goto LAB_00075abc;
                  }
                }
              }
              else {
                uVar6 = (uint)*(char *)(DAT_00075958 + 1);
                if (uVar6 != 0x43) goto LAB_00075ba0;
                if ((((*DAT_00075b7c & 0x20) != 0) && (0x7c < *DAT_00075b60)) &&
                   ((short)(ushort)*DAT_00075b60 <= DAT_00075b38)) {
                  if (*pcVar2 == 'C') {
                    *DAT_00075b70 = 0x50;
                    puVar3[1] = *pcVar2;
                    *DAT_00075b84 = 2;
                    uVar6 = (int)*DAT_00075b88 | 1;
                    *DAT_00075b88 = (char)uVar6;
                    goto LAB_00075ba0;
                  }
                  if (*pcVar2 == '\x01') {
                    *pcVar2 = 'C';
                    goto LAB_00075b20;
                  }
                }
              }
              goto LAB_00075b3a;
            }
            if (*pcVar2 != '@') {
              if (*pcVar2 != '\x01') goto LAB_00075b3a;
              *pcVar2 = '@';
            }
LAB_00075ac6:
            puVar1 = DAT_00075b70;
            *DAT_00075b70 = 0x50;
            uVar6 = (uint)*DAT_00075b80;
            puVar1[1] = *DAT_00075b80;
          }
LAB_00075b30:
          *DAT_00075b84 = 2;
          goto LAB_00075ba0;
        }
        if (((((int)*DAT_00075b5c & 0x80U) != 0) && (0x7c < *DAT_00075b60)) &&
           (((short)(ushort)*DAT_00075b60 <= DAT_00075b38 &&
            ((*DAT_00075b64 < 4 && (*DAT_00075b68 <= (byte)*PTR_DAT_00075b6c)))))) {
          if (*pcVar2 == '\x02') goto LAB_00075ac6;
          if ((*pcVar2 == '\x03') && (*DAT_00075b58 == '\x01')) {
            *pcVar2 = '\x02';
            *DAT_00075b54 = 0;
            puVar1 = DAT_00075b70;
            *DAT_00075b70 = 0x50;
            puVar1[1] = *pcVar2;
            puVar4 = PTR_FUN_00075b78;
            *DAT_00075b74 = *pcVar2;
            uVar6 = (*(code *)puVar4)();
            goto LAB_00075b30;
          }
        }
      }
LAB_00075b3a:
      *DAT_00075b70 = 0x7f;
      puVar3[1] = 0x10;
      uVar6 = 0x22;
      puVar3[2] = 0x22;
    }
    else {
      *DAT_00075dc0 = 0x7f;
      puVar5[1] = 0x10;
      uVar6 = 0x13;
      puVar5[2] = 0x13;
    }
  }
  else {
    *DAT_00075950 = 0x7f;
    puVar1[1] = 0x10;
    uVar6 = 0x12;
    puVar1[2] = 0x12;
  }
  *DAT_00075dc4 = 3;
LAB_00075ba0:
  if (*DAT_00075dc8 != *DAT_00075dcc) {
    *DAT_00075dd0 = 0;
    *DAT_00075dd4 = 0;
    *DAT_00075dd8 = 0;
    *DAT_00075ddc = 0;
    *DAT_00075de0 = 0;
    *DAT_00075de4 = 0;
    *DAT_00075de8 = 0;
    *DAT_00075dec = 0;
    *DAT_00075df0 = 0;
    *DAT_00075df4 = 0;
    *DAT_00075df8 = 0;
    *DAT_00075dfc = 0;
    *DAT_00075e00 = 0;
    *DAT_00075e04 = 0;
    *DAT_00075e08 = 0;
    *DAT_00075e0c = 0;
    *DAT_00075e10 = 0;
    *DAT_00075e14 = 0;
    *DAT_00075e18 = 0;
    *DAT_00075e1c = 0;
    *DAT_00075e20 = 0;
    *DAT_00075e24 = 0;
    *DAT_00075e28 = 0;
    *DAT_00075e2c = 0;
    *DAT_00075e30 = 0;
    *DAT_00075e34 = 0;
    *DAT_00075e38 = 0;
    *DAT_00075e3c = 0;
    *DAT_00075e40 = 0;
    *DAT_00075e44 = 0;
    *DAT_00075e48 = 0;
    *DAT_00075e4c = 0;
    *DAT_00075e50 = 0;
    *DAT_00075e54 = 0;
    *DAT_00075e58 = 0;
    *DAT_00075e5c = 0;
  }
  return uVar6;
}

