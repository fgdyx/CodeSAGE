#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4);
void FUN2()
{
 badStruct VAR5;
 VAR2<VAR3> VAR4;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR5.VAR2.VAR7 = VAR6.VAR7;
 VAR5.VAR2.VAR8 = VAR6.VAR8;
 VAR6.VAR7 = &VAR5.VAR2;
 VAR6.VAR8 = &VAR5.VAR2;
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR5, sizeof(VAR5), stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN1(VAR4);
}
#endif
