#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 charVoid VAR3;
 VAR3.VAR4 = (void *)VAR5;
 FUN2((wchar_t *)VAR3.VAR4);
 /* FLAW: Use the sizeof(structCharVoid) which will overwrite the pointer voidSecond */
 memcpy(VAR3.VAR6, VAR5, sizeof(VAR3));
 VAR3.VAR6[(sizeof(VAR3.VAR6)/sizeof(wchar_t))-1] = VAR7'';
 FUN2((wchar_t *)VAR3.VAR6);
 FUN2((wchar_t *)VAR3.VAR4);
 }
 }
}
#endif
