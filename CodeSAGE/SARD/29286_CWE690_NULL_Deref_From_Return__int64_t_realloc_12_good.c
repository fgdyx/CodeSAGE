#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 1*sizeof(VAR2));
 if(FUN2())
 {
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 }
 else
 {
 if (VAR3 != NULL)
 {
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 free(VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
