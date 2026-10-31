
/* WARNING: Removing unreachable block (ram,0x0007522e) */
/* WARNING: Removing unreachable block (ram,0x0007520c) */
/* WARNING: Removing unreachable block (ram,0x000753b8) */
/* WARNING: Removing unreachable block (ram,0x00075132) */
/* WARNING: Removing unreachable block (ram,0x000753f6) */
/* WARNING: Removing unreachable block (ram,0x000751f8) */
/* WARNING: Removing unreachable block (ram,0x00075250) */
/* WARNING: Removing unreachable block (ram,0x00075254) */
/* WARNING: Removing unreachable block (ram,0x00075272) */
/* WARNING: Removing unreachable block (ram,0x00075276) */
/* WARNING: Removing unreachable block (ram,0x000752a6) */
/* WARNING: Removing unreachable block (ram,0x000752aa) */
/* WARNING: Removing unreachable block (ram,0x000752c8) */
/* WARNING: Removing unreachable block (ram,0x000752cc) */
/* WARNING: Removing unreachable block (ram,0x000752fc) */
/* WARNING: Removing unreachable block (ram,0x00075300) */
/* WARNING: Removing unreachable block (ram,0x0007531e) */
/* WARNING: Removing unreachable block (ram,0x00075322) */
/* WARNING: Removing unreachable block (ram,0x00075352) */
/* WARNING: Removing unreachable block (ram,0x00075356) */
/* WARNING: Removing unreachable block (ram,0x00075374) */
/* WARNING: Removing unreachable block (ram,0x00075378) */
/* WARNING: Removing unreachable block (ram,0x00075396) */
/* WARNING: Removing unreachable block (ram,0x0007539a) */
/* WARNING: Removing unreachable block (ram,0x000751e0) */
/* WARNING: Removing unreachable block (ram,0x00074ff6) */
/* WARNING: Removing unreachable block (ram,0x0007508a) */
/* WARNING: Removing unreachable block (ram,0x00075102) */
/* WARNING: Removing unreachable block (ram,0x00075154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00074fa2(undefined1 *param_1,int param_2,byte param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  short sStack_14;
  
  uVar3 = 0;
  puVar2 = param_1;
  do {
    if ((uint)param_3 <= (uVar3 & 0xff)) {
      sStack_14 = (ushort)(byte)((char)puVar2 - (char)param_1) << 8;
      return (int)sStack_14;
    }
    cVar1 = *(char *)(param_2 + (uVar3 & 0xff));
    if (cVar1 == '\0') {
      *puVar2 = 0;
      puVar2[1] = 0x54;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
LAB_00075460:
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
LAB_0007546a:
      puVar2 = puVar2 + 1;
    }
    else {
      if (cVar1 == '\x02') {
        *puVar2 = 2;
        puVar2[1] = 1;
        puVar2[2] = DAT_ffff35e0;
        puVar2[3] = DAT_ffff35e1;
        puVar2[4] = DAT_ffff35e2;
        puVar2[5] = DAT_ffff35e3;
        puVar2[6] = DAT_ffff35e4;
        puVar2[7] = DAT_ffff35e5;
        puVar2[8] = DAT_ffff35e6;
        puVar2[9] = DAT_ffff35e7;
        puVar2[10] = DAT_ffff35e8;
        puVar2[0xb] = DAT_ffff35e9;
        puVar2[0xc] = DAT_ffff35ea;
        puVar2[0xd] = DAT_ffff35eb;
        puVar2[0xe] = DAT_ffff35ec;
        puVar2[0xf] = DAT_ffff35ed;
        puVar2[0x10] = DAT_ffff35ee;
        puVar2[0x11] = DAT_ffff35ef;
        puVar2 = puVar2 + 0x12;
        *puVar2 = DAT_ffff35f0;
        goto LAB_0007546a;
      }
      if (cVar1 == '\x04') {
        *puVar2 = 4;
        puVar2[1] = 1;
        puVar2[2] = 0x4c;
        puVar2[3] = 0x46;
        puVar2[4] = 0x36;
        puVar2[5] = 0x41;
        puVar2[6] = 0x34;
        puVar2[7] = 0x30;
        puVar2[8] = 0x30;
        puVar2[9] = 0x4a;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2 = puVar2 + 0xf;
        *puVar2 = 0;
        goto LAB_00075460;
      }
      if (cVar1 == '\x06') {
        if ((DAT_ffff2fd7 & 1) == 0) {
          DAT_ffff8723 = DAT_ffff8723 | 0x80;
          DAT_ffff8572 = 9;
        }
        else {
          *puVar2 = 6;
          puVar2[1] = 1;
          puVar2[2] = (char)((ushort)_DAT_ffff2fae >> 8);
          puVar2[3] = (char)_DAT_ffff2fae;
          puVar2[4] = (char)((ushort)_DAT_ffff2fb0 >> 8);
          puVar2[5] = (char)_DAT_ffff2fb0;
          puVar2 = puVar2 + 6;
          DAT_ffff8723 = DAT_ffff8723 & 0x7f;
        }
      }
    }
    uVar3 = (uVar3 & 0xff) + 1;
  } while( true );
}

