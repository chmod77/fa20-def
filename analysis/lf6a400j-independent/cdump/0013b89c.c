
void FUN_0013b89c(void)

{
  undefined2 uVar1;
  
  FUN_00069f44();
  FUN_0003ade6();
  FUN_0003bf24();
  FUN_0003c076();
  FUN_0003b712();
  FUN_0003aea8();
  FUN_0006a07e();
  FUN_0003baf2();
  FUN_0003f87c();
  FUN_0003b634();
  FUN_0003c1d4();
  if (((int)DAT_ffffab40 & 0x80U) == 0) {
    uVar1 = FUN_00001550(0xf0);
    DAT_ffff2983 = FUN_0000152c(DAT_ffff2983 + 1);
    FUN_00001550(uVar1);
    if (0x27 < DAT_ffff2983) {
      DAT_fffee6ad = DAT_fffee6ad | 8;
      FUN_001526ee();
    }
  }
  FUN_0013bc10();
  FUN_0013b976();
  FUN_0013bd70();
  return;
}

