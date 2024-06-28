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
 FUN2((char *)VAR3.VAR4);
 memcpy(VAR3.VAR6, VAR5, sizeof(VAR3.VAR6));
 VAR3.VAR6[(sizeof(VAR3.VAR6)/sizeof(char))-1] = '';
 FUN2((char *)VAR3.VAR6);
 FUN2((char *)VAR3.VAR4);
 }
 }
}
static void FUN3()
{
 if(VAR7)
 {
 {
 charVoid VAR3;
 VAR3.VAR4 = (void *)VAR5;
 FUN2((char *)VAR3.VAR4);
 memcpy(VAR3.VAR6, VAR5, sizeof(VAR3.VAR6));
 VAR3.VAR6[(sizeof(VAR3.VAR6)/sizeof(char))-1] = '';
 FUN2((char *)VAR3.VAR6);
 FUN2((char *)VAR3.VAR4);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
