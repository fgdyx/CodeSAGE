#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN3((char *)VAR2.VAR3);
 /* FLAW: Use the sizeof(structCharVoid) which will overwrite the pointer voidSecond */
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN3((char *)VAR2.VAR5);
 FUN3((char *)VAR2.VAR3);
 }
 }
}
#endif
