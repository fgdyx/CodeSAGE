#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN3((wchar_t *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(wchar_t))-1] = VAR6'';
 FUN3((wchar_t *)VAR2.VAR5);
 FUN3((wchar_t *)VAR2.VAR3);
 }
 }
}
static void FUN4()
{
 if(5==5)
 {
 {
 charVoid VAR2;
 VAR2.VAR3 = (void *)VAR4;
 FUN3((wchar_t *)VAR2.VAR3);
 memcpy(VAR2.VAR5, VAR4, sizeof(VAR2.VAR5));
 VAR2.VAR5[(sizeof(VAR2.VAR5)/sizeof(wchar_t))-1] = VAR6'';
 FUN3((wchar_t *)VAR2.VAR5);
 FUN3((wchar_t *)VAR2.VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
