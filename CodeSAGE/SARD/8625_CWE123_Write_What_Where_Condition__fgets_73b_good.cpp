#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 badStruct VAR5 = VAR4.FUN2();
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR6 = VAR5.VAR2.VAR7;
 VAR8 = VAR5.VAR2.VAR9;
 VAR6->VAR9 = VAR8;
 VAR8->VAR7 = VAR6;
}
#endif
