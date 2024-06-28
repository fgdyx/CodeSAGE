#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN2((wchar_t *)VAR2.VAR3);
 /* FLAW: Use the sizeof(structCharVoid) which will overwrite the pointer voidSecond */
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(wchar_t))-1] = VAR6'';
 FUN2((wchar_t *)VAR2.VAR5);
 FUN2((wchar_t *)VAR2.VAR3);
 }
 }
}
#endif
