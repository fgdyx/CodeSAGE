#ifndef VAR1
static void FUN1()
{
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN2((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN2((char *)VAR2.VAR5);
 FUN2((char *)VAR2.VAR3);
 }
 }
}
static void FUN3()
{
 if(1)
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN2((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN2((char *)VAR2.VAR5);
 FUN2((char *)VAR2.VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
