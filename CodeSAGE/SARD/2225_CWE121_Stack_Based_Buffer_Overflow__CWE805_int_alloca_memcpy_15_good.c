#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 VAR2 = VAR4;
 break;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
static void FUN5()
{
 int * VAR2;
 int * VAR3 = (int *)FUN2(50*sizeof(int));
 int * VAR4 = (int *)FUN2(100*sizeof(int));
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 break;
 default:
 FUN3("");
 break;
 }
 {
 int VAR5[100] = {0};
 memcpy(VAR2, VAR5, 100*sizeof(int));
 FUN4(VAR2[0]);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
