#ifndef VAR1
static void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 if(VAR7)
 {
 FUN2("");
 }
 else
 {
 ;
 }
 VAR3.VAR6 = &VAR2.VAR4;
 if(VAR10)
 {
 ;
 }
 VAR8 = VAR2.VAR4.VAR6;
 VAR9 = VAR2.VAR4.VAR5;
 VAR8->VAR5 = VAR9;
 VAR9->VAR6 = VAR8;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
