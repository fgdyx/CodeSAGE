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
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN2((char *)VAR3->VAR4);
 memmove(VAR3->VAR6, VAR5, sizeof(VAR3->VAR6));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN2((char *)VAR3->VAR6);
 FUN2((char *)VAR3->VAR4);
 }
 }
}
static void FUN3()
{
 if(5==5)
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN2((char *)VAR3->VAR4);
 memmove(VAR3->VAR6, VAR5, sizeof(VAR3->VAR6));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(char))-1] = '';
 FUN2((char *)VAR3->VAR6);
 FUN2((char *)VAR3->VAR4);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
