#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * &VAR4 = VAR3;
 int64_t VAR5[50];
 int64_t VAR6[100];
 VAR3 = VAR6;
 {
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR7[100] = {0};
 memmove(VAR3, VAR7, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
