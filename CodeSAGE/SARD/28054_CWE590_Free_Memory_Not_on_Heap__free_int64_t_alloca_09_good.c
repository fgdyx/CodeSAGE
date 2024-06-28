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
 {
 VAR2 * VAR5 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR3 = VAR5;
 }
 }
 FUN4(VAR3[0]);
 free(VAR3);
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR7)
 {
 {
 VAR2 * VAR5 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5LL;
 }
 }
 VAR3 = VAR5;
 }
 }
 FUN4(VAR3[0]);
 free(VAR3);
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
