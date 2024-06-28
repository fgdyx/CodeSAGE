#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
 VAR4->VAR5 = (void *)VAR6;
 FUN2((char *)VAR4->VAR5);
 /* FLAW: Use the sizeof(*structCharVoid) which will overwrite the pointer y */
 memmove(VAR4->VAR7, VAR6, sizeof(*VAR4));
 VAR4->VAR7[(sizeof(VAR4->VAR7)/sizeof(char))-1] = '';
 FUN2((char *)VAR4->VAR7);
 FUN2((char *)VAR4->VAR5);
 }
 }
}
#endif
