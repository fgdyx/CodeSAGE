#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
 VAR4->VAR5 = (void *)VAR6;
 FUN2((char *)VAR4->VAR5);
 memcpy(VAR4->VAR7, VAR6, sizeof(VAR4->VAR7));
 VAR4->VAR7[(sizeof(VAR4->VAR7)/sizeof(char))-1] = '';
 FUN2((char *)VAR4->VAR7);
 FUN2((char *)VAR4->VAR5);
 free(VAR4);
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 {
 VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
 VAR4->VAR5 = (void *)VAR6;
 FUN2((char *)VAR4->VAR5);
 memcpy(VAR4->VAR7, VAR6, sizeof(VAR4->VAR7));
 VAR4->VAR7[(sizeof(VAR4->VAR7)/sizeof(char))-1] = '';
 FUN2((char *)VAR4->VAR7);
 FUN2((char *)VAR4->VAR5);
 free(VAR4);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
