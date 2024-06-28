#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 {
 int64_t VAR4[100] = {0};
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 free(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
