#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN2((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN2((char *)VAR2.VAR5);
 FUN2((char *)VAR2.VAR3);
 }
 break;
 }
}
static void FUN3()
{
 switch(6)
 {
 case 6:
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN2((char *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(char))-1] = '';
 FUN2((char *)VAR2.VAR5);
 FUN2((char *)VAR2.VAR3);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
