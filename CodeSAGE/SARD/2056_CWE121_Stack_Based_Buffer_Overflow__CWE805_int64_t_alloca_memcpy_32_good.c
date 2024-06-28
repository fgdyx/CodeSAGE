#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR2 * VAR6 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR7 = (VAR2 *)FUN2(100*sizeof(VAR2));
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = VAR7;
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 {
 int64_t VAR8[100] = {0};
 memcpy(VAR3, VAR8, 100*sizeof(VAR2));
 FUN3(VAR3[0]);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
