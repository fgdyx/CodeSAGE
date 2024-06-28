#ifndef VAR1
VAR2 FUN1(badStruct VAR3)
{
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR3, sizeof(VAR3), stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 return VAR3;
}
#endif
