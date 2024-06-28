#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 charVoid VAR3;
 VAR3.VAR4 = (void *)VAR5;
 FUN3((wchar_t *)VAR3.VAR4);
 memcpy(VAR3.VAR6, VAR5, sizeof(VAR3.VAR6));
 VAR3.VAR6[(sizeof(VAR3.VAR6)/sizeof(wchar_t))-1] = VAR7'';
 FUN3((wchar_t *)VAR3.VAR6);
 FUN3((wchar_t *)VAR3.VAR4);
 }
 }
}
static void FUN4()
{
 if(VAR8)
 {
 {
 charVoid VAR3;
 VAR3.VAR4 = (void *)VAR5;
 FUN3((wchar_t *)VAR3.VAR4);
 memcpy(VAR3.VAR6, VAR5, sizeof(VAR3.VAR6));
 VAR3.VAR6[(sizeof(VAR3.VAR6)/sizeof(wchar_t))-1] = VAR7'';
 FUN3((wchar_t *)VAR3.VAR6);
 FUN3((wchar_t *)VAR3.VAR4);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
