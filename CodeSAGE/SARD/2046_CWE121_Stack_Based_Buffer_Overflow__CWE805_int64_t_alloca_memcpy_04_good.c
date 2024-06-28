#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 if(VAR6)
 {
 FUN3("");
 }
 else
 {
 VAR3 = VAR5;
 }
 {
 int64_t VAR7[100] = {0};
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN4(VAR3[0]);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 if(VAR8)
 {
 VAR3 = VAR5;
 }
 {
 int64_t VAR7[100] = {0};
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN4(VAR3[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
