#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 badStruct VAR4;
 linkedList VAR5 = { &VAR5, &VAR5 };
 VAR4.VAR6.VAR7 = VAR5.VAR7;
 VAR4.VAR6.VAR8 = VAR5.VAR8;
 VAR5.VAR7 = &VAR4.VAR6;
 VAR5.VAR8 = &VAR4.VAR6;
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR4, sizeof(VAR4), stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 FUN1(&VAR4);
}
#endif
