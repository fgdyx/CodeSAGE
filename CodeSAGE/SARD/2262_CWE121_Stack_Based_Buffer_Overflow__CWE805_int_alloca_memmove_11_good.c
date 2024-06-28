#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memmove(VAR2, VAR5, 100*sizeof(int));
 FUN5(VAR2[0]);
 }
}
static void FUN6()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 if(FUN7())
 {
 VAR2 = VAR4;
 }
 {
 int VAR5[100] = {0};
 memmove(VAR2, VAR5, 100*sizeof(int));
 FUN5(VAR2[0]);
 }
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
