#ifndef VAR1
static void FUN1(badStruct VAR2)
{
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR3 = VAR2.VAR4.VAR5;
 VAR6 = VAR2.VAR4.VAR7;
 VAR3->VAR7 = VAR6;
 VAR6->VAR5 = VAR3;
}
void FUN2()
{
 badStruct VAR2;
 void (*VAR8) (VAR9) = VAR10;
 linkedList VAR11 = { &VAR11, &VAR11 };
 VAR2.VAR4.VAR7 = VAR11.VAR7;
 VAR2.VAR4.VAR5 = VAR11.VAR5;
 */
 VAR11.VAR7 = &VAR2.VAR4;
 VAR11.VAR5 = &VAR2.VAR4;
 if (fgets((char*)&VAR2, sizeof(VAR2), stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 FUN5(VAR2);
}
#endif
