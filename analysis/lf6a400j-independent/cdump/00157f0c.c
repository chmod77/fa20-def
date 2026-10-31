
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00157f0c(void)

{
  uint uVar1;
  byte bVar3;
  undefined4 uVar2;
  
  _DAT_fffeef56 = FUN_001493a6();
  _v_Mass_Airflow_Sensor_Voltage_EEB2 = FUN_0014939a();
  uVar1 = thunk_FUN_0014da4a();
  bVar3 = DAT_fffee6bc | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffee6bc & 0xef;
  }
  DAT_fffee6bc = bVar3;
  DAT_fffee738 = thunk_FUN_0014da1c(0);
  DAT_fffee739 = thunk_FUN_0014da1c(1);
  DAT_fffee73a = thunk_FUN_0014da1c(2);
  DAT_fffee73b = thunk_FUN_0014da1c(3);
  _DAT_fffeeeb4 = thunk_FUN_0014db78();
  uVar1 = thunk_FUN_0014da26();
  bVar3 = DAT_fffef732 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef732 & 0xdf;
  }
  DAT_fffef732 = bVar3;
  uVar1 = thunk_FUN_0014da34();
  bVar3 = DAT_fffef77e | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef77e & 0x7f;
  }
  DAT_fffef77e = bVar3;
  uVar1 = thunk_FUN_0014dbbc();
  bVar3 = DAT_ffff04f5 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff04f5 & 0xef;
  }
  DAT_ffff04f5 = bVar3;
  DAT_fffef044 = FUN_00144cea();
  uVar2 = FUN_00149770();
  _DAT_fffef046 = FUN_00001540(uVar2);
  DAT_fffef045 = FUN_00144cea();
  _DAT_fffeef5a = FUN_001496aa(0);
  _DAT_fffeef5c = FUN_00149672(0);
  if (DAT_fffef1e0 == '\0') {
    DAT_fffef1e5 = FUN_0014942c();
  }
  return;
}

