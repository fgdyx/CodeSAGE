#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR3, sizeof(VAR3), stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
}
#endif
