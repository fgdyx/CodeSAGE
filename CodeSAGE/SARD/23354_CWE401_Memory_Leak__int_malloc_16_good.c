#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 break;
 }
 while(1)
 {
 free(VAR2);
 break;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (int *)FUN4(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 break;
 }
 while(1)
 {
 ;
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
