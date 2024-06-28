#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN3((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN3((char *)VAR2.VAR5);
 FUN3((char *)VAR2.VAR3);
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN3((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN3((char *)VAR2.VAR5);
 FUN3((char *)VAR2.VAR3);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
