#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN3((char *)VAR3->VAR4);
 /* FLAW: Use the sizeof(*structCharVoid) which will overwrite the pointer y */
 memcpy(VAR3->VAR6, VAR5, sizeof(*VAR3));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN3((char *)VAR3->VAR6);
 FUN3((char *)VAR3->VAR4);
 free(VAR3);
 }
 }
}
#endif
