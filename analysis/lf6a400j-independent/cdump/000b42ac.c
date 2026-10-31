
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000b42ac(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  byte local_8c [4];
  byte bStack_88;
  byte abStack_84 [4];
  byte bStack_80;
  byte bStack_7c;
  byte bStack_78;
  byte bStack_74;
  byte abStack_70 [4];
  byte bStack_6c;
  byte bStack_68;
  byte abStack_64 [4];
  undefined1 local_60 [12];
  byte abStack_54 [4];
  byte abStack_50 [4];
  undefined1 local_4c [12];
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  char cStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *local_24;
  
  local_24 = &DAT_ffff0415;
  puStack_40 = &DAT_ffff0da6;
  FUN_000b5a68((int)DAT_ffff2996,(int)DAT_ffff03a0,&DAT_ffff0db4);
  puStack_3c = &DAT_ffff0415;
  FUN_000b4234((int)DAT_ffff2996,(int)DAT_ffff03a0,&DAT_ffff0508);
  FUN_000b4210((int)DAT_ffff2996,(int)DAT_ffff03a0);
  FUN_000b5a24((DAT_fffee710 & 0x20) != 0,(int)v_Vehicle_Speed_byte_65A1,(DAT_ffffab40 & 0x20) != 0,
               (int)_DAT_fffeeede);
  FUN_000b6758((int)DAT_ffff66b0,local_8c);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050d | 1;
  if ((local_8c[0] & 1) == 0) {
    bVar4 = DAT_ffff050d & 0xfe;
  }
  DAT_ffff050d = bVar4;
  FUN_00001550(uVar3);
  puStack_38 = &DAT_ffff0d86;
  FUN_000b3738((int)_DAT_fffeeede,&DAT_ffff0d94);
  FUN_000b4258(puStack_3c + 0xf4);
  FUN_000b5e70((int)_DAT_fffeeee0,_DAT_ffff166c,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03a0
              );
  FUN_000b5e34((int)_DAT_fffeeede,(int)DAT_ffff03a0,(DAT_ffff054a & 0x10) != 0,&DAT_ffff0dca);
  FUN_000b6044((int)DAT_ffff2996,(int)DAT_ffff03a0,(int)_DAT_ffff0b9a);
  FUN_000b3350(DAT_ffff050d & 1,(DAT_fffee710 & 0x20) != 0,(int)DAT_ffff299c,(DAT_ffff0000 & 4) != 0
              );
  FUN_000b5a8c(DAT_ffff050d & 1,(int)_DAT_fffeef94,puStack_40 + 0x12);
  FUN_000b6764(DAT_ffff050d & 1,(DAT_fffeeca8 & 0x10) != 0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050f | 2;
  if ((bStack_88 & 1) == 0) {
    bVar4 = DAT_ffff050f & 0xfd;
  }
  DAT_ffff050f = bVar4;
  FUN_00001550(uVar3);
  FUN_000b5b38((int)DAT_ffff2996,(int)DAT_ffff03a0,(DAT_ffff06ce & 8) != 0,(int)_DAT_ffff0d70);
  puStack_34 = &DAT_ffff0d70;
  FUN_000b3260((int)_DAT_ffff0dba,(int)_DAT_ffff38f8);
  FUN_000b5d28((int)_DAT_ffff0dba,(int)_DAT_ffff0dea,(DAT_ffff06ce & 8) != 0);
  FUN_000b5da4((int)_DAT_ffff0dc2,(int)_DAT_ffff0e68,&DAT_ffff0dc6);
  FUN_000b5d68((int)_DAT_ffff10f2,DAT_ffff06da & 1,(int)_DAT_ffff0dc6,(DAT_ffff06ce & 8) != 0);
  FUN_000b3330((int)_DAT_ffff0dc4,(int)_DAT_ffff0db8,puStack_38);
  FUN_000b65f0((int)_DAT_ffff0db8,DAT_ffff050d & 1,(int)_DAT_ffff0dc4,abStack_84);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050f | 0x80;
  if ((abStack_84[0] & 1) == 0) {
    bVar4 = DAT_ffff050f & 0x7f;
  }
  DAT_ffff050f = bVar4;
  FUN_00001550(uVar3);
  FUN_000b5cb8((int)_DAT_ffff0dc4,puStack_40 + 0x1a);
  FUN_000b3288((int)_DAT_ffff0d86,puStack_34 + 0x12,puStack_34 + 0x14);
  cStack_30 = '\x01' - ((DAT_ffff050f & 2) == 0);
  uStack_2c = (uint)((DAT_fffef498 & 4) != 0);
  FUN_000b2f30((int)cStack_30,(DAT_fffef32c & 2) != 0,(DAT_ffffab40 & 0x20) != 0,(int)DAT_fffee6a2);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050f | 4;
  if ((bStack_80 & 1) == 0) {
    bVar4 = DAT_ffff050f & 0xfb;
  }
  DAT_ffff050f = bVar4;
  FUN_00001550(uVar3);
  FUN_000b6078((int)_DAT_fffeeee0,0,(int)_DAT_fffeeede,(int)_DAT_fffeef10);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050c | 2;
  if ((bStack_7c & 1) == 0) {
    bVar4 = DAT_ffff050c & 0xfd;
  }
  DAT_ffff050c = bVar4;
  FUN_00001550(uVar3);
  FUN_000b61a4((int)_DAT_fffeeee0,0,(int)_DAT_fffeeede);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050c | 1;
  if ((bStack_78 & 1) == 0) {
    bVar4 = DAT_ffff050c & 0xfe;
  }
  DAT_ffff050c = bVar4;
  FUN_00001550(uVar3);
  FUN_000b6230((int)DAT_ffff04ff);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050e | 0x20;
  if ((bStack_74 & 1) == 0) {
    bVar4 = DAT_ffff050e & 0xdf;
  }
  DAT_ffff050e = bVar4;
  FUN_00001550(uVar3);
  FUN_000b65dc((int)DAT_ffff04ff,((int)DAT_fffef51c & 0x80U) != 0,abStack_70);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff050e | 0x80;
  if ((abStack_70[0] & 1) == 0) {
    bVar4 = DAT_ffff050e & 0x7f;
  }
  DAT_ffff050e = bVar4;
  FUN_00001550();
  FUN_000b6258((int)v_Coolant_Temperature_29A5,((int)(char)DAT_ffff050e & 0x80U) != 0,
               (int)_DAT_ffff0b60);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050e | 1;
  if ((bStack_6c & 1) == 0) {
    bVar4 = DAT_ffff050e & 0xfe;
  }
  DAT_ffff050e = bVar4;
  FUN_00001550(uVar3);
  FUN_000b4260((int)_DAT_ffff0d86,(int)DAT_ffff299c,(int)DAT_ffff03a0,
               ((int)(char)DAT_ffff050e & 0x80U) != 0);
  FUN_000b2c44((int)_DAT_ffff0db4,(int)_DAT_ffff0da6,(int)DAT_ffff0500);
  FUN_000b64cc(DAT_ffff050e & 1,(int)_DAT_ffff0d86,(int)DAT_ffff0500,(DAT_fffee710 & 0x20) != 0);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff050d | 4;
  if ((bStack_68 & 1) == 0) {
    bVar4 = DAT_ffff050d & 0xfb;
  }
  DAT_ffff050d = bVar4;
  FUN_00001550(uVar3);
  FUN_000b3758();
  FUN_000b6698(((int)(char)DAT_ffff3692 & 0x80U) != 0,(DAT_ffff050d & 4) != 0,abStack_64);
  FUN_00001550(0xf0);
  bVar4 = DAT_ffff050d | 2;
  if ((abStack_64[0] & 1) == 0) {
    bVar4 = DAT_ffff050d & 0xfd;
  }
  DAT_ffff050d = bVar4;
  FUN_00001550();
  FUN_000b38d8((DAT_ffff050d & 4) != 0,(int)DAT_ffff0500,0xffff3b04,local_60);
  for (uVar5 = 0; (uVar5 & 0xff) < 0xc; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xc4fc) = local_60[uVar5];
  }
  FUN_000b59d4((DAT_ffff050d & 2) != 0,(int)_DAT_ffff0d72,puStack_40 + 6);
  abStack_54[0] = 1 - (((int)(char)DAT_ffff3692 & 0x80U) == 0);
  FUN_000b6248((DAT_ffff050d & 2) != 0,(int)(char)abStack_54[0],abStack_54);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff3692 | 0x80;
  if ((abStack_54[0] & 1) == 0) {
    bVar4 = DAT_ffff3692 & 0x7f;
  }
  DAT_ffff3692 = bVar4;
  FUN_00001550(uVar3);
  abStack_50[0] = DAT_ffff3693 & 1;
  FUN_000b66ac(0xffff3b04,(DAT_ffff050d & 4) != 0,abStack_50[0],abStack_50);
  uVar3 = FUN_00001550(0xf0);
  bVar4 = DAT_ffff3693 | 1;
  if ((abStack_50[0] & 1) == 0) {
    bVar4 = DAT_ffff3693 & 0xfe;
  }
  DAT_ffff3693 = bVar4;
  FUN_00001550(uVar3);
  FUN_000b3790((int)_DAT_ffff0dac,(DAT_ffff050d & 4) != 0,(int)_DAT_ffff0d72,(int)DAT_ffff0500);
  FUN_000b3834((int)_DAT_ffff0dac,(DAT_ffff050d & 4) != 0,(int)_DAT_ffff0d72,(int)DAT_ffff0500);
  FUN_000b3b00((int)_DAT_ffff0dac,(DAT_ffff050d & 4) != 0,(int)_DAT_ffff0d72);
  puVar2 = puStack_38;
  puVar1 = puStack_40;
  for (uVar5 = 0; (uVar5 & 0xff) < 10; uVar5 = uVar5 + 1) {
    uVar5 = uVar5 & 0xff;
    *(undefined1 *)(uVar5 - 0xc712) = local_4c[uVar5];
  }
  puStack_28 = puStack_3c;
  FUN_000b53d4((int)_DAT_ffff389a,(int)DAT_ffff044d,(int)DAT_ffff044e,(int)DAT_ffff044f);
  puStack_28 = (undefined1 *)(uint)((DAT_ffff0664 & 2) != 0);
  FUN_000b4020(((int)(char)DAT_ffff3692 & 0x80U) != 0,DAT_ffff0664 & 1,puStack_28,(int)DAT_ffff0500)
  ;
  FUN_000b508c(((int)(char)DAT_ffff050e & 0x80U) != 0,(int)_DAT_ffff0da6,puVar1 + 2,puVar2 + 0x16);
  puStack_40 = puVar1 + 10;
  FUN_000b518c((int)_DAT_ffff0da6,(int)DAT_ffff04ff,(int)_DAT_ffff0d9a,(int)_DAT_ffff0d86);
  FUN_000b5088((int)_DAT_ffff0d9e,puVar2 + 0x14);
  FUN_000b538c((int)_DAT_ffff0dae,DAT_ffff050d & 1,(int)_DAT_ffff0d9a,puVar2 + 0x1e);
  puVar1 = puStack_34;
  puStack_38 = puVar2 + 0xc;
  FUN_000b34bc(DAT_ffff050d & 1,(DAT_fffee710 & 0x20) != 0,(int)_DAT_fffeeede,(int)DAT_ffff04ff);
  FUN_000b2ec8((int)_v_A_F_Correction_1_0D92,((int)(char)DAT_ffff050f & 0x80U) != 0,DAT_ffff050d & 1
               ,puVar1 + 4);
  puStack_34 = puVar1 + 6;
  FUN_000b2efc(((int)(char)DAT_ffff050f & 0x80U) != 0,(int)_v_A_F_Correction_1_0D92,DAT_ffff050d & 1
               ,puStack_34);
  puStack_3c = puStack_3c + 0xed;
  FUN_000b34ac((int)_v_A_F_Correction_1_0D92);
  return;
}

