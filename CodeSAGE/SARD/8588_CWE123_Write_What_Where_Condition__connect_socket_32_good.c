#ifndef VAR1
static void FUN1()
{
 badStruct VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR2.VAR7.VAR8 = VAR6.VAR8;
 VAR2.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR2.VAR7;
 VAR6.VAR9 = &VAR2.VAR7;
 {
 badStruct VAR2 = *VAR4;
 ;
 *VAR4 = VAR2;
 }
 {
 badStruct VAR2 = *VAR5;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR10 = VAR2.VAR7.VAR9;
 VAR11 = VAR2.VAR7.VAR8;
 VAR10->VAR8 = VAR11;
 VAR11->VAR9 = VAR10;
 }
}
void FUN2()
{
 FUN1();
}
#endif
