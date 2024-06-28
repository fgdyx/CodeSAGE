#ifndef VAR1
void FUN1()
{
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN2((wchar_t *)VAR3->VAR4);
 /* FLAW: Use the sizeof(*structCharVoid) which will overwrite the pointer y */
 memcpy(VAR3->VAR6, VAR5, sizeof(*VAR3));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(wchar_t))-1] = VAR7'';
 FUN2((wchar_t *)VAR3->VAR6);
 FUN2((wchar_t *)VAR3->VAR4);
 free(VAR3);
 }
}
#endif
