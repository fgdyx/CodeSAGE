#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static VAR4 FUN1(badStruct VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 ;
 }
 return VAR5;
}
static void FUN3()
{
 badStruct VAR5;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR5.VAR7.VAR8 = VAR6.VAR8;
 VAR5.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR5.VAR7;
 VAR6.VAR9 = &VAR5.VAR7;
 VAR2 = 0;
 VAR5 = FUN1(VAR5);
}
static void FUN5()
{
 badStruct VAR5;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR5.VAR7.VAR8 = VAR6.VAR8;
 VAR5.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR5.VAR7;
 VAR6.VAR9 = &VAR5.VAR7;
 VAR3 = 1;
 VAR5 = FUN4(VAR5);
 VAR10 = VAR5.VAR7.VAR9;
 VAR11 = VAR5.VAR7.VAR8;
 VAR10->VAR8 = VAR11;
 VAR11->VAR9 = VAR10;
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
