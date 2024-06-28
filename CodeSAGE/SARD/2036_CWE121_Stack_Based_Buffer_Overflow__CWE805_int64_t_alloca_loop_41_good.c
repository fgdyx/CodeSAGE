#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN2(VAR3[0]);
 }
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR2 * VAR6 = (VAR2 *)FUN4(50*sizeof(VAR2));
 VAR2 * VAR7 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3 = VAR7;
 FUN1(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
