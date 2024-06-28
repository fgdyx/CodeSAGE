#ifndef VAR1
static void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 goto VAR7;
VAR7:
 ;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR8 = VAR2.VAR4.VAR6;
 VAR9 = VAR2.VAR4.VAR5;
 VAR8->VAR5 = VAR9;
 VAR9->VAR6 = VAR8;
}
void FUN2()
{
 FUN1();
}
#endif
