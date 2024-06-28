#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 int VAR6[100] = {0};
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 if(VAR7)
 {
 VAR2 = VAR4;
 }
 {
 int VAR6[100] = {0};
 memcpy(VAR2, VAR6, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
