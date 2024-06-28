#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
}
void FUN2(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5LL;
 }
 }
 free(VAR3);
}
#endif
