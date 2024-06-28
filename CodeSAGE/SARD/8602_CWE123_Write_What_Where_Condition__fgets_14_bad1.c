#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 if(VAR7==5)
 {
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR2, sizeof(VAR2), stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 }
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR8 = VAR2.VAR4.VAR6;
 VAR9 = VAR2.VAR4.VAR5;
 VAR8->VAR5 = VAR9;
 VAR9->VAR6 = VAR8;
}
#endif
