#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 {
 int64_t VAR5[100] = {0};
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR6)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 {
 int64_t VAR5[100] = {0};
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
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
