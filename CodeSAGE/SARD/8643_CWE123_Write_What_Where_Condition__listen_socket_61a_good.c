#ifndef VAR1
VAR2 FUN1(badStruct VAR3);
static void FUN2()
{
 badStruct VAR3;
 linkedList VAR4 = { &VAR4, &VAR4 };
 VAR3.VAR5.VAR6 = VAR4.VAR6;
 VAR3.VAR5.VAR7 = VAR4.VAR7;
 VAR4.VAR6 = &VAR3.VAR5;
 VAR4.VAR7 = &VAR3.VAR5;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR8 = VAR3.VAR5.VAR7;
 VAR9 = VAR3.VAR5.VAR6;
 VAR8->VAR6 = VAR9;
 VAR9->VAR7 = VAR8;
}
void FUN3()
{
 FUN2();
}
#endif
