#ifndef VAR1
void FUN1(badStruct VAR2)
{
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR3 = VAR2.VAR4.VAR5;
 VAR6 = VAR2.VAR4.VAR7;
 VAR3->VAR7 = VAR6;
 VAR6->VAR5 = VAR3;
}
#endif
