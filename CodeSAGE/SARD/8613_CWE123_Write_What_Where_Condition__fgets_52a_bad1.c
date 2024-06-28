#ifndef VAR1
void FUN1(badStruct VAR2);
void FUN2()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR2, sizeof(VAR2), stdin) == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 FUN1(VAR2);
}
#endif
