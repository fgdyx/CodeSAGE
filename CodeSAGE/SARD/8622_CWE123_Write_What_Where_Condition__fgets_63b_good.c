#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 badStruct VAR4 = *VAR3;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR5 = VAR4.VAR6.VAR7;
 VAR8 = VAR4.VAR6.VAR9;
 VAR5->VAR9 = VAR8;
 VAR8->VAR7 = VAR5;
}
#endif
