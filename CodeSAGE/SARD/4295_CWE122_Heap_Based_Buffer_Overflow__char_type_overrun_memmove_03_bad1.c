#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN2((char *)VAR3->VAR4);
 /* FLAW: Use the sizeof(*structCharVoid) which will overwrite the pointer y */
 memmove(VAR3->VAR6, VAR5, sizeof(*VAR3));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN2((char *)VAR3->VAR6);
 FUN2((char *)VAR3->VAR4);
 }
 }
}
#endif
