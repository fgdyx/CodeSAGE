#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(&VAR3[0]);
 break;
 }
 while(1)
 {
 free(VAR3);
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(&VAR3[0]);
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
