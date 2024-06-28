#ifndef VAR1
static void FUN1()
{
 badStruct VAR2;
 VAR3 &VAR4 = VAR2;
 linkedList VAR5 = { &VAR5, &VAR5 };
 VAR2.VAR6.VAR7 = VAR5.VAR7;
 VAR2.VAR6.VAR8 = VAR5.VAR8;
 VAR5.VAR7 = &VAR2.VAR6;
 VAR5.VAR8 = &VAR2.VAR6;
 ;
 {
 badStruct VAR2 = VAR4;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR9 = VAR2.VAR6.VAR8;
 VAR10 = VAR2.VAR6.VAR7;
 VAR9->VAR7 = VAR10;
 VAR10->VAR8 = VAR9;
 }
}
void FUN2()
{
 FUN1();
}
#endif
