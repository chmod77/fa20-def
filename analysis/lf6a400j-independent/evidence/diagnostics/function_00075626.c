
void FUN_00075626(void)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ushort uVar7;
  
  pcVar6 = DAT_00075950;
  puVar2 = DAT_00075710;
  if (*DAT_00075700 == 7) {
    if (((DAT_00075704[1] == '\x14') && (uVar4 = (uint)(byte)DAT_00075704[6], uVar4 != 0)) &&
       (uVar4 <= *(ushort *)PTR_DAT_00075708)) {
LAB_000756a6:
      pcVar5 = (char *)(DAT_00075704[2] * 0x1000000 + (uint)(byte)DAT_00075704[3] * 0x10000 +
                        (uint)(byte)DAT_00075704[4] * 0x100 + (uint)(byte)DAT_00075704[5]);
      pcVar3 = pcVar5 + (uVar4 - 1);
      if ((((pcVar5 < *(char **)PTR_DAT_00075718) || (*(char **)PTR_PTR_0007571c < pcVar5)) ||
          ((pcVar3 < *(char **)PTR_DAT_00075718 || (*(char **)PTR_PTR_0007571c < pcVar3)))) &&
         ((((pcVar5 < *(char **)PTR_DAT_00075944 || (*(char **)PTR_DAT_00075948 < pcVar5)) ||
           (pcVar3 < *(char **)PTR_DAT_00075944)) || (*(char **)PTR_DAT_00075948 < pcVar3)))) {
        *DAT_00075950 = '\x7f';
        pcVar6[1] = '#';
        pcVar6[2] = '1';
      }
      else {
        if (((*DAT_0007594c == '\x01') || (*DAT_0007594c == '\x03')) || (*DAT_0007594c == '\x05')) {
          *DAT_00075950 = *DAT_00075704 + '@';
          for (uVar7 = 0; pcVar6 = pcVar6 + 1, uVar7 < uVar4; uVar7 = uVar7 + 1) {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            *pcVar6 = cVar1;
          }
          *DAT_00075954 = (short)uVar4 + 1;
          return;
        }
        *DAT_00075950 = '\x7f';
        pcVar6[1] = '#';
        pcVar6[2] = '3';
      }
      *DAT_00075954 = 3;
      return;
    }
  }
  else {
    if (*DAT_00075700 != 8) {
      *DAT_00075710 = 0x7f;
      puVar2[1] = 0x23;
      puVar2[2] = 0x13;
      goto LAB_0007569c;
    }
    if (((DAT_00075704[1] == '$') &&
        (uVar4 = (uint)(byte)DAT_00075704[6] * 0x100 + (uint)(byte)DAT_00075704[7], uVar4 != 0)) &&
       (uVar4 <= *(ushort *)PTR_DAT_0007570c)) goto LAB_000756a6;
  }
  *DAT_00075710 = 0x7f;
  puVar2[1] = 0x23;
  puVar2[2] = 0x31;
LAB_0007569c:
  *DAT_00075714 = 3;
  return;
}

