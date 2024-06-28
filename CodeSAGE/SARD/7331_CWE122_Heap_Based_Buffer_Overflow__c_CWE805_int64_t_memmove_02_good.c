#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
