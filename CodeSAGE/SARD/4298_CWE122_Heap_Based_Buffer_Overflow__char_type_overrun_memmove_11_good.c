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
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN3((char *)VAR3->VAR4);
 memmove(VAR3->VAR6, VAR5, sizeof(VAR3->VAR6));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN3((char *)VAR3->VAR6);
 FUN3((char *)VAR3->VAR4);
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN3((char *)VAR3->VAR4);
 memmove(VAR3->VAR6, VAR5, sizeof(VAR3->VAR6));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN3((char *)VAR3->VAR6);
 FUN3((char *)VAR3->VAR4);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
