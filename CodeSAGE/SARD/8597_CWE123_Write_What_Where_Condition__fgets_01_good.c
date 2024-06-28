#ifndef VAR1
static void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 ;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR7 = VAR2.VAR4.VAR6;
 VAR8 = VAR2.VAR4.VAR5;
 VAR7->VAR5 = VAR8;
 VAR8->VAR6 = VAR7;
}
void FUN2()
{
 FUN1();
}
#endif
