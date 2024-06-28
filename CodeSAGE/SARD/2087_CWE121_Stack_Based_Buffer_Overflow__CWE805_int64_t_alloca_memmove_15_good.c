#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR3 = VAR5;
 break;
 }
 {
 int64_t VAR6[100] = {0};
 memmove(VAR3, VAR6, 100*sizeof(VAR2));
 FUN4(VAR3[0]);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 switch(6)
 {
 case 6:
 VAR3 = VAR5;
 break;
 default:
 FUN3("");
 break;
 }
 {
 int64_t VAR6[100] = {0};
 memmove(VAR3, VAR6, 100*sizeof(VAR2));
 FUN4(VAR3[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
