#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 }
 {
 int64_t VAR5[100] = {0};
 memcpy(VAR4, VAR5, 100*sizeof(VAR3));
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
